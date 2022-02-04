#include<iostream>
#include<cstddef>
using namespace std;

//nullpointer�� �Լ� �Ķ���ͷ� �Ѿ�� �� �����ϴ�
void doSomething(double* ptr)
{
	cout << "address of pointer variable in Something()" << &ptr << endl;

	if (ptr != nullptr)
	{
		//do something useful
		std::cout << *ptr << std::endl;
	}
	else
	{
		//do nothing with ptr 
		std::cout << "null ptr, do nothing" <<std::endl;
	}
}


int main()
{
	//c-style 
	double* ptr2 =NULL; //0�� ����. 

	//modern cpp
	//uniform initialzation �� �����ϴ�.
	double* ptr = nullptr;

	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;

	doSomething(&d);

	ptr = &d;
	doSomething(ptr);


	//�ڿ� _t - Ÿ���� ����. 
	//nullptr_t�� nullpointer�ۿ� ���ִ´� .
	std::nullptr_t nptr;


	cout << "address of pointer variable in main()" << &ptr << endl;

	return 0;
}