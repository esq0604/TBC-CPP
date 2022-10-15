//상속과 접근 지정자.
#include<iostream>
using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};


class Derived : private Base 
{
public:
	Derived()
	{
		Base::m_public;
		Base::m_protected;
	}
};

class GrandChild : public Derived
{
public:
	GrandChild()
	{
		//Derived:: 아무것도 상속받을수없게됨 private으로 접근을 제어했기에.
	}
};
int main()
{
	Derived derived;

	//derived.m_public = 1024;

	
}