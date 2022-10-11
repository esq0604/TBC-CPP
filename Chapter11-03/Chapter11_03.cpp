#include<iostream>

using namespace std;
class Mother
{
public:
	int m_i;

	Mother(const int & m_in=0)
		:m_i(m_in)
	{
		cout << "Mother constructor" << endl;
	}
};

class Child : public Mother
{
public:
	int m_d;
public:
	//자식의 생성시 부모의 생성자가 항상 먼저 초기화 되는 형태임. 따라서 Mother(10)처럼, 부모의 생성자를 직접 지정해주면 가능함. 
	Child()
	//	:Mother(10),m_d(1.0)//,m_i(10) : Initializer list에서는 초기화가 불가능함-> Mother class에서 m_i를 초기화 해준 뒤 사용할 수 있기 때문. 
		:m_d(1.0), Mother(1024) //순서를 바꾸나 마나 컴파일러는 Mother(), m_d(1.0) 의 순으로 진행됨. 
	{
		m_i = 1024;
		cout << "Child constructor " << endl;
	}
};

class A
{
public:
	A()
	{
		cout << "A constructor " << endl;
	}
};

class B :public A
{
public:
	B()
	{
		cout << "B constructor " << endl;
	}
};

class C: public B
{
public:
	C()
	{
		cout << "C constructor " << endl;

	}
};
int main()
{
	//Child c1;
	C c;
	return 0;
}