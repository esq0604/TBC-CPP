// Chapter1-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
/*
int main()
{
	//x �޸𸮿� ���� �ĺ��� 
	int x = 0;//x(0) x�� �޸𸮿� ������ 0�̶� ������ �ʱ�ȭ, �޸𸮿� �ڱ� ���縦 ���Ե� =>x�� �ν��Ͻ��� ���Ե�.
	//int x = 1; // ���� �Ʒ��� �޸𸮰� �ٸ��ٸ� �̸�,�ĺ��ڰ� �޶���Ѵ�
	
	cout << x << " " << &x << endl;  //&x �޸��� �ּҸ� �˰����� .


	{
		int x = 0; //x���� �ٸ� �޸𸮿� ���� �ĺ����� 
	
		cout << x << " " << &x << endl;
	}
	{
		int x = 2;
	
		cout << x << " " << &x << endl;
	}

	cout << x << " " << &x << endl;
	 
	return 0;
}
// x�� �޸𸮿���  �����.
*/

void doSomething(int x)//���� ���� ������ �޾����Ƿ� �ּҰ��� �ٸ��� ����
{		
	x = 123;
	cout << x << " " << &x << endl;
}

int main()
{
	int x = 0;

	cout << x << " " << &x << endl;
	doSomething(x); //doSomething(&x)��, �Ű����������� *, �����Ͷ�� ���� �ּҰ� ���� �� �������̴�.
	cout << x << " " << &x << endl;

	return 0;

}
