#include<iostream>

using namespace std;

int value = 123;

//static duration variable 정적변수 
//디버깅이나 테스트할때많이쓰인다함
void doSomething()
{
	int a = 1;

	++a;

	cout << a << endl;
}

int main()
{
	
	cout << value << endl;

	int value = 1;
	
	//global scope operator 이용 
	cout << ::value << endl;
	//local value 
	cout << value << endl;

	return 0;
}