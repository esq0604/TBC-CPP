#include<iostream>

using namespace std;
//base�� private ��ҿ� �ٲܹ��

class Base
{
protected:
	int m_value;

public:
	Base(int value=0)
		:m_value(value)
	{
	
	}


};

class Derived : public Base
{
public:
	Derived()
	{

	}
	//m_value�� �ڽ�Ŭ�������� ����� -> protected�� .
	//�׷� setvalue�� ���� �� �ڽĿ��� �������� ? -> Base::m_value�� �ǵ帱 ��Ȳ�̸� Base�� �����ϴ°� ���� .
	//Derived�� ����� ������ , m_value�� ���� ����� ��찡 �ִٸ� �ε����ϰ� Base������ ����� �����ؾ��� .
	//1)private -> getvalue�� ����->����Ŭ������ �Լ��� ��ġ�⿡ �����ս��� ������������, ���̻���Ұ�� �ڵ��ϱ� ���ŷο� 
	//2)protected �� �ٲ� �ڽ�Ŭ������ �������� . 
	//��Ȳ�� ���߾� ����ϴ°���.. �Ƿ���� ����ȴ�!.
	void setvalue(int a) 
	{
		Base::m_value = a;
		//do some work with the variables defined in Dervied 
	}
};