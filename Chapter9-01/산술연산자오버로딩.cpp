#include<iostream>
using namespace std;

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents=0) { m_cents = cents; }
	int getCents() const
	{
		return m_cents;
	}
	int& getCents() { return m_cents; }

	
	/*friend Cents operator +(const Cents& c1, const Cents& c2)
	{
		return c1.getCents() + c2.getCents();
	}*/
	//����ε� �����ϴ�.
	Cents operator +(const Cents& c2)
	{
		return Cents(this->getCents() + c2.m_cents);
	}
	
};

int main()
{
	Cents cents1(6);
	Cents cents2(8);
	//�͸�ü ���.
	//���������� (cent1+cent2)+Cents(6)���� ��������. 
	cout<<(cents1+cents2+Cents(6)+Cents(10)).getCents();

	return 0;
}