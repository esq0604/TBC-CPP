#include<iostream>

using namespace std;

//������ Ŭ�� -���Ƿ� �̵�������.
// peek definition�� ���� ���Ǹ� Ȯ���� ������ - �ٸ����Ͽ� �������� ��밡��. 

int add(int a, int b); //forward declr ���漱�� 
int multiply(int a, int b);
int subtract(int a, int b);

//�����Ʃ����� �̿��ϸ� ������ �ɰ��� ����.


int main()
{
	cout << add(1, 2) << endl;

	return 0;
}

//definition ����
int add(int a, int b)
{
	return a + b;
}

int multiply(int a, int b)
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}


