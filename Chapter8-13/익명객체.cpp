#include<iostream>
using namespace std;

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents) { m_cents = cents; }

	//멤버 value를 바꾸지 않아 const로.
	int getCents() const { return m_cents; }
};

Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}
int main()
{
	//add 함수의 반환형이 Cents기 때문에. 가능하다.
	cout << add(Cents(6) , Cents(8)).getCents() << endl;
	
	cout << int(6) + int(8) << endl;
	return 0;
}