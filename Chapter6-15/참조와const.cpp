#include<iostream>

using namespace std;


void doSomething(const int& x)
{
	cout << x << endl;
}

int main()
{
				// ������ const 
	//�����ٲ������ϹǷ� ������������ const�� �������.
	const int x = 5;
	const int& ref_x = x;

				//���������� const
	int y = 5;
	const int& ref_y = y;

				//���������� �����ϴº����� const
	const int& ref_2 = ref_x;

				//�������� ������ �޸��ּҰ� �־�߰�����.
	//int ref& _x2 = 3; ���ͷ��� �׳ɳ��������� 
	
				//const reference�� ����. -�ּҵ� ���´�.
	//�׷� �Ϲݺ������� ���̴� ����??
	//�Լ��Ķ���ͷ� ���� �ſ� �����ϴ� 
	const int& ref = 3 + 4;
	cout << ref << endl;
	cout << &ref << endl;

	int a = 1;
	doSomething(a);

	//�ٷ� ���ͷ��� �Ű������� �־��ټ�����.
	doSomething(1);
	doSomething(a + 3);
	doSomething(3 * 4);
}