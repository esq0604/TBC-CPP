//부모클래스와 자식클래스간의 기능차이가 많지 않을수 있음.
//겹치는부분이 약간씩 다를 수 있음(함수의 이름은 유지하고싶다면) -> 오버라이딩으로 해결
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
		//Base::operator << ?? operator 오버로딩시 어떻게할지??
		cout << static_cast<Base>(b); //앞서배운 메모리 사이즈 (Dervied는 Base의 메모리 사이즈만큼 이미 가지고있음) 
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