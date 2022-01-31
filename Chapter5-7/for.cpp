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

	//for문이 끝난뒤에도 count를 쓰고싶다면 count를 밖으로 빼면됨.
	int count = 0;
	for (; count < 10; ++count) //iteration -반복시키는것
	{
		cout << count << endl;
		//끝나면 한 iteration이 끝남. 그래서 i를 count대신 약자로많이씀.
	}
	cout << count << endl;


	//while(true) 무한루프
	/*for (;true;++count)
	{
		cout << count << endl;
	}*/

	//정수의 제곱구현
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


	//overflow 에시
	/*for (unsigned int i = 9; i >= 0; --i)
		cout << i << endl;*/

	//0~20 짝수만
	for (int i = 0; i < 20; i += 2)
	{
		cout << i << endl;
	}
	//1~10까지 더하기 
	int result=0;
	for (int i = 0; i < 10; ++i)
	{
		result += i;
	}
	cout << result;
}