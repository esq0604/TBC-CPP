#include<iostream>

using namespace std;

int value = 123;

//static duration variable �������� 
//������̳� �׽�Ʈ�Ҷ����̾��δ���
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
	
	//global scope operator �̿� 
	cout << ::value << endl;
	//local value 
	cout << value << endl;

	return 0;
}