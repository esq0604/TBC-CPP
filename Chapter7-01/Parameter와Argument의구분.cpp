#include<iostream>

using namespace std;

int foo(int x, int y);


//����� �Ű������� ���� �޶���. -parameter
//�Ű������� �Լ��� ��� ����� �ϴ��� �ٲ��ټ�����.
//������ ����Ǵ°Ͱ� ����� ���¸� ��.
//�Լ��� ������ ���ÿ� �޸𸮷� �ݳ��̵ȴ�.
int foo(int x, int y)
{
	return x, y;
}

int main()
{
	int x = 1, y = 2;
	foo(x, y+2); 
	foo(7, 8);//7 ,8: arguments (actual parameters)  
}