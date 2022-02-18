#include<iostream>
#include<array>
#include<tuple>
using namespace std;

int getValue(int x)
{
	int value = x * 2;
	return value;
}

int* returnbyAddress(int x)
{
	int value = x * 2;
	return &value;
}


int* allocateMemory(int size)
{
	return new int[size];
}

int& returnbyReference(int x)
{
	int value = x * 2;
	return value;
}

int& get(std::array<int, 100>& myarr, int idx)
{
	return myarr[idx];
}

struct s
{
	int a, b, c, d;
};
s getStruct()
{
	s mys{ 1,2,3,4 };

	return mys;
}

std::tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;
	return std::make_tuple(a, d);
}

int main()
{
	//6�̶�� ���� �����ؼ� ��.
	//�����ϰ� ����������, ���� ���� ���� �������Ͼ�°�
	//�ӵ��� ���� ��������. �����Ѱ��� ��������
	//�������� arr��, Ŭ������ ����ϸ� �������..
	int value = getValue(3);



	//de -referencing�� ���� ������ ����.
	//ū������ ������ �������� ���� value�� ������ ����鼭 ������µ�
	//de-referencing�� �ϸ� �������� �ʱ� ������.
	int value2 = *returnbyAddress(3);
	cout << value2 << endl;

	//�ּҸ� �����޴¹�� �� �����ϴ�.
	//������ �ּҴ� ������ �����鼭 ������µ� �޸� �ּҸ� �˰��ִ�??
	int* value3 = returnbyAddress(3);
	cout << value3 << endl;

	//return by address ����ϱ⵵��.
	//arr�� ���鶧 new int[10]�� �Լ��� �̾Ƴ��� ���������
	//�޸𸮸� �����ϰ�, �޸��� �����͸� �Լ��� ���ϰ����� �����޴� 
	//���������ϰ������� ����. factory pattern ���� ���� ���Ǵ� ���Ͽ���
	//���� ���ȴ�.�̷��� ������ ���� ������� ����.
	//int* array = new int[10];
	int* array = allocateMemory(100);



	//return by reference 
	//���۷����� ��ȯ�ؼ� �����ִ� ���¿���, ���۷����� ����Ű�� �ִ� ������
	//�������� value3�� ������ ����.
	int value4 = returnbyReference(5);
	cout << value4 << endl;

	//�޴��ʿ����� reference�� ������ 
	//�Լ������� value�� ������ ������ ����� �׷��� ���� ���۷�����
	//�޾Ҵٸ� �����ϴ�.
	int& value5 = returnbyReference(5);
	cout << value5 << endl;
	cout << value5 << endl;

	//return by reference�� �� ���Ѱ��
	//��������ǵ�����Ÿ�Կ� �Ϻη� ��ġ�µ� �Լ��� ��ġ��
	//�����������. 
	//�޸𸮰� ��Ȯ�ϰ� �����ִ� ���¿��� �Ķ���ͷ� �����ϰ� 
	//�� element�� reference��  return���� . ��ġ �����̸��ΰ�ó��
	//���� ������Ʈ��. �̷��� �������� ����ϴ� ��찡 ����.
	//�޸𸮴� ����Ǳ����̳� �ĳ� Ȯ���ϰ� �����ִ� ��� ���۷����� ������ ����ó�� ���ϰ� �۾���
	std::array<int, 100> myarr;
	myarr[30] = 10;

	get(myarr, 30) = 1024;
	cout << myarr[30] << endl;



	//�������� ������ �ް������. ����3���� �������ް�ʹ�!. 
	//struct�� �Ϲ����ι��. directx���̺귯���� ����ϰԵȴٸ�
	//������ ����ü�� ����, �Լ�ȣ���Ҷ��� ����ü�� �����ͷγְ�
	//�������� ����ü�� ����ü�� �����ͷ� �޴°�찡 ����.
	s mys = getStruct();
	mys.a;


	//Ʃ���� ����ϴ¹�� 
	//get���� �޴°ͤ� �Ӻ�����. 
	std::tuple<int, double> my_tp = getTuple();
	cout<<std::get<0>(my_tp)<<endl ; // a
	cout<<std::get<1>(my_tp)<<endl; // d

	//cpp 17���� ��밡��
	//�����Ҷ� Ʃ�÷� �������� a,d���� ���� ������ �����ϸ鼭 �޴°�.
	auto [a, d] = getTuple();
	cout << a << endl;
	cout << d << endl;
	return 0;
}