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


	//만약 카운트에 1을ㄷ ㅓ하는 연산을 do안에 넣으면
	//continue이후는 무시하기때문에 진행이안된다.
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
		//나중에 사용자정의변수를 while문 안에 넣으면 속도가 느려짐
		//그땐 밖에 빼서 이용
		char ch;
		cin >> ch;

		cout << ch << " " << count++ << endl;

		//bool타입을 통해서 while문을 탈출.
		if (ch == 'x')
			escape_flag = true;
	}


	breakOrReturn();
	return 0;
}