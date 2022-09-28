#include<iostream>

using namespace std;

class Mother
{
private:
	int m_i;

public:
	Mother(const int& i_in) : m_i(i_in)
	{
		cout << "Mother constructor" << endl;
	}


	void setValue(const int& i_in)
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}
};

class Child : public Mother //derived class 
{
	//incalpsulelation을 유지하며 구현할것 
private:
	double m_d;

public:

	//자식의 생성자를 만드는 목적은 부모의 변수, 본인의 변수를 함께 사용하기 위함 이 주로됨.
	//Constructor가 존재하는 이유는 메모리가 존재하기전에 할당을 해주는것 -> 거기다 복사해서 넣어주는것이 constructor의 존재이유는 아님.
	Child(const int& i_in, const double& d_in) : Mother(i_in), m_d(d_in)
		//: Mother::setValue(i_in), initialliation list 
	{
		/*Mother::setValue(i_in);
		m_d = d_in;*/
	}
	//상속성을 유지하기 위해선 -> double ,int 를 구분하는 방법이 있음 
	void setValue(const int& i_in, const double& d_in)
	{
		Mother::setValue(i_in);
		m_d = d_in;
	}
	void setValue(const double& d_in)
	{
		m_d = d_in;
	}

	double getValue()
	{
		return m_d;
	}
};

 
int main()
{
	Mother mother(1024);
	//mother.setValue(1024);

	cout << mother.getValue() << endl;

	Child child(1024,128); //메모리 받아옴 
	child.Mother::setValue(1024); //복사해서 넣음 -> initialization이라 부르긴 어렵다 
	//child.setValue(112);
	cout << child.Mother::getValue() << endl;
	cout << child.getValue() << endl;
	return 0;
}