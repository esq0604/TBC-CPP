#include<iostream>

using namespace std;

void foo( int* ptr)
{
	cout << *ptr << " " << ptr <<" "<<&ptr<<endl;

	//const�� ������ de-referencing�� ���� �ٲܼ�����. 
	//const�� ���ٸ�. �����͸� ����ؼ� �Լ��� ����ΰ�ó�� ����Ҽ����ֵ�.
	*ptr = 10;
}

//c-style �ڵ�
void foo(const int *const ptr ,const int* arr, int length)
{
	for (int i = 0; i < length; i++)
		cout << arr[i] << endl;
	
	//const�� ���� [0]�� de-referencing�ΰ� �˼�����. 
	//arr[0] = 1.0;

	int x = 1;
	//const�� �ٿ��� �ּ���ü�� �ٲܼ�������
	// 	ptr = &x;
	//const int * const ptró�� ptr �տ� ���̸� �ȴ�.
	// const�� 2���ִ� ������ �ִ� ������ �˸�ɵ�.
	//ptr = &x;
}

int main()
{
	int value = 5;
	cout << value << " " << &value << endl;

	int *ptr = &value;

	//������ ������ �����̱� ������. �����ͺ����� �ּҴ� �ٸ��� ���´�.
	//���·� ������ �������� ������. �ּҶ�� ���� �������� ���޷� ���Ѱ��̴�.
	cout << &ptr << endl;
	foo(ptr);
	foo(&value);


	return 0;
}