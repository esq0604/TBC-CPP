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
		//���α׷� ���ƿ� ���� �ٸ��� �������� 
		//�������� 0�̸� ��Ǭ�� ���� -> not cents�� true
		//�� �� false 
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