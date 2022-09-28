#include<iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	Cents operator - () const
	{
		return Cents(-m_cents);
	}

	bool operator ! () const
	{
		//프로그램 문맥에 따라 다르게 만들어야함 
		//예제에선 0이면 한푼도 없음 -> not cents가 true
		//그 외 false 
		return (m_cents == 0) ? true : false;
	}
	friend std::ostream& operator << (std::ostream&out,const Cents &cents)
	{
		out << cents.m_cents;
		return out;
	}


};

int main()
{
	Cents cents1(6);
	Cents cnets2(0);

	int a = 3;

	cout << cents1 << endl;
	cout << -cents1 << endl;
	
	cout << !cents1 << " " << !cnets2 << endl;
	return 0;
}