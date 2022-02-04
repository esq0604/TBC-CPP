#include<iostream>
#include<cstddef>
using namespace std;

//nullpointer는 함수 파라미터로 넘어갈때 더 유용하다
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
	double* ptr2 =NULL; //0도 가능. 

	//modern cpp
	//uniform initialzation 도 가느하다.
	double* ptr = nullptr;

	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;

	doSomething(&d);

	ptr = &d;
	doSomething(ptr);


	//뒤에 _t - 타입을 말함. 
	//nullptr_t는 nullpointer밖에 못넣는다 .
	std::nullptr_t nptr;


	cout << "address of pointer variable in main()" << &ptr << endl;

	return 0;
}