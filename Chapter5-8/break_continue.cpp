#include<iostream>

using namespace std;

void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
			break;
		if (ch == 'r')
			return;
	}
	cout << "Hello" << endl;
}

int main()
{
	/*int count = 0;
	while (true)
	{
		cout << count << endl;
		if (count == 10) break;
		count++;
	}*/

	/*for (int i = 0; i < 10; ++i)
	{
		cout << i << endl;
		if (i == 5) break;
	}*/

	/*for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0) continue;
		cout << i << endl;
	}*/


	//���� ī��Ʈ�� 1���� ���ϴ� ������ do�ȿ� ������
	//continue���Ĵ� �����ϱ⶧���� �����̾ȵȴ�.
	/*int count(0);
	do
	{
		if (count == 5)
			continue;

		cout << count << endl;
	} while (++count < 10);*/

	int count(0);
	bool escape_flag = false;
	while(!escape_flag)
	{
		//���߿� ��������Ǻ����� while�� �ȿ� ������ �ӵ��� ������
		//�׶� �ۿ� ���� �̿�
		char ch;
		cin >> ch;

		cout << ch << " " << count++ << endl;

		//boolŸ���� ���ؼ� while���� Ż��.
		if (ch == 'x')
			escape_flag = true;
	}


	breakOrReturn();
	return 0;
}