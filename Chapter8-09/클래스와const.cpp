#include<iostream>
using namespace std;

class Something
{
public:
	//const�� ������ �ִ� �Լ��� �� ���Ƶδ°��� ���ٰ� �Ͻ�. 
	int m_value = 0;
	void setValue(int value) { m_value = value; }
	int& getValue()
	{
		cout << "non -const version" << endl;
		return m_value;
	}
	int getValue2() const //memberfuntion�� constȭ��. �ȿ����� �����ٲ����ʴ´�. 
	{
		return m_value;
	}

	//const memberfunfion�� ���-> ���� ������ ���ϰ� 
	//���� ���۷��� Ÿ���� ����Ҷ� ���� ������ �������� ��ȯ���� const�� �����ִ°�������.
	const int& getValue3() const
	{
		cout << "const version" << endl;
		return m_value;
	}
};

int main()
{
	const Something something;
	Something something2;

	//something.setValue(3); ���ƻ� ������ ����. const�ε� �����ٲٷ���.

	something2.getValue() = 10; //���۷��� Ÿ���̱⶧���� �ٲ��ټ��ִ�.
	cout << something2.getValue() << endl; //���� �ٲ�.

	//m_value�� �ٲٷ������� ������ const������ ������ ���� .
	//�����Ϸ��� �ٲ���� ����°� �ƴ϶� memberfuntion�� const������ ���
	//cout << something.getValue() << endl; -����Լ��� const�� �ƴ϶�. ����
	cout << something2.getValue2() << endl;
	cout << something.getValue3() << endl;


	
	

}