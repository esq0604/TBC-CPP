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
	//�ڽ��� ������ �θ��� �����ڰ� �׻� ���� �ʱ�ȭ �Ǵ� ������. ���� Mother(10)ó��, �θ��� �����ڸ� ���� �������ָ� ������. 
	Child()
	//	:Mother(10),m_d(1.0)//,m_i(10) : Initializer list������ �ʱ�ȭ�� �Ұ�����-> Mother class���� m_i�� �ʱ�ȭ ���� �� ����� �� �ֱ� ����. 
		:m_d(1.0), Mother(1024) //������ �ٲٳ� ���� �����Ϸ��� Mother(), m_d(1.0) �� ������ �����. 
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