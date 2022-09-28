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
	//incalpsulelation�� �����ϸ� �����Ұ� 
private:
	double m_d;

public:

	//�ڽ��� �����ڸ� ����� ������ �θ��� ����, ������ ������ �Բ� ����ϱ� ���� �� �ַε�.
	//Constructor�� �����ϴ� ������ �޸𸮰� �����ϱ����� �Ҵ��� ���ִ°� -> �ű�� �����ؼ� �־��ִ°��� constructor�� ���������� �ƴ�.
	Child(const int& i_in, const double& d_in) : Mother(i_in), m_d(d_in)
		//: Mother::setValue(i_in), initialliation list 
	{
		/*Mother::setValue(i_in);
		m_d = d_in;*/
	}
	//��Ӽ��� �����ϱ� ���ؼ� -> double ,int �� �����ϴ� ����� ���� 
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

	Child child(1024,128); //�޸� �޾ƿ� 
	child.Mother::setValue(1024); //�����ؼ� ���� -> initialization�̶� �θ��� ��ƴ� 
	//child.setValue(112);
	cout << child.Mother::getValue() << endl;
	cout << child.getValue() << endl;
	return 0;
}