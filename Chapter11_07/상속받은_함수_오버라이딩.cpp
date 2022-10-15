//�θ�Ŭ������ �ڽ�Ŭ�������� ������̰� ���� ������ ����.
//��ġ�ºκ��� �ణ�� �ٸ� �� ����(�Լ��� �̸��� �����ϰ�ʹٸ�) -> �������̵����� �ذ�
#include<iostream>
using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		:m_i(value)
	{}

	void print()
	{
		cout << "I'm base" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Base& b)
	{
		cout << "This is base output " << endl;
		return out;
	}
};

class Derived :public Base
{
private:
	double m_d;

public:
	Derived(int value)
		:Base(value)
	{}

	void print()
	{
		Base::print();

		cout << "I'm derived" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Derived& b)
	{
		//Base::operator << ?? operator �����ε��� �������??
		cout << static_cast<Base>(b); //�ռ���� �޸� ������ (Dervied�� Base�� �޸� �����ŭ �̹� ����������) 
		cout << "This is Derived output " << endl;
		return out;
	}
};

int main()
{
	Base base(5);
	cout << base;

	Derived derived(7);
	cout << derived;
}