#include<iostream>

int pow(int base, int exponent)
{
	int result = 1;
	for (int count = 0; count < exponent; ++count)
		result *= base;
	return result;
}

int main()
{
	using namespace std;

	//for���� �����ڿ��� count�� ����ʹٸ� count�� ������ �����.
	int count = 0;
	for (; count < 10; ++count) //iteration -�ݺ���Ű�°�
	{
		cout << count << endl;
		//������ �� iteration�� ����. �׷��� i�� count��� ���ڷθ��̾�.
	}
	cout << count << endl;


	//while(true) ���ѷ���
	/*for (;true;++count)
	{
		cout << count << endl;
	}*/

	//������ ��������
	cout << pow(2, 4) << endl;

	for (int count = 9; count > 0; count-=2)
	{
		cout << count << endl;
	}

	for (int i = 0, j = 0; (i+j) < 10; ++i, j+=2)
	{
		cout << i << " " << j << endl;
	}

	for (int j = 0; j < 9; ++j)
	{
		for (int i = 0; i < 9; ++i)
		{
			cout << i << " " << j << endl;
		}
		cout << endl;
	}


	//overflow ����
	/*for (unsigned int i = 9; i >= 0; --i)
		cout << i << endl;*/

	//0~20 ¦����
	for (int i = 0; i < 20; i += 2)
	{
		cout << i << endl;
	}
	//1~10���� ���ϱ� 
	int result=0;
	for (int i = 0; i < 10; ++i)
	{
		result += i;
	}
	cout << result;
}