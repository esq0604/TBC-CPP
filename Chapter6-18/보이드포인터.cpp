#include<iostream>

using namespace std; 

//void pointer , generic pointer

enum Type
{
	INT,
	FLOAT,
	CHAR
};

int main()
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	
	void* ptr = nullptr;

	//���̵� �����ͷ� �ִ¼��� �갡 int,float,char���� �� ����̾���.
	ptr = &i;
	ptr = &f;
	//ptr = &c;


					////���̵������ʹ� �����Ϳ����� �Ұ�����.
	//������Ÿ�Կ� �ش��ϴ� �����͸� ����ϸ� ������ ������ ����Ҽ��ִ�.
	int* ptr_i = &i;
	cout << ptr_i << endl;
	cout << ptr_i + 1 << endl;

	
	//+1�� �ҽ� �����Ʈ�� ���ؾ��ϴ��� �˼��� ���� ������.
	//cout << ptr + 1 << endl;

	Type type = FLOAT;
	cout << &f << " " << ptr << endl;
	//de-referencing�� �Ұ�����.
	//�޸𸮿� �������� �����Ȱ� ������, �װ��� ����������Ÿ���� ǥ���ϱ� ����
	//���� �𸥴� . 
	// ����ȯ�� �Ѵٸ� ���� �˼��ִ�.
	//cout << *ptr << endl;
	if(type==FLOAT)
	cout << *static_cast<float*>(ptr) << endl;

	else if(type=INT)
		cout << *static_cast<int*>(ptr) << endl;

	return 0;
}