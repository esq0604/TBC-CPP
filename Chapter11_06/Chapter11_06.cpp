#include<iostream>

using namespace std;
//base의 private 요소에 바꿀방법

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
	//m_value를 자식클래스에서 사용할 -> protected로 .
	//그럼 setvalue를 굳이 왜 자식에서 구현하지 ? -> Base::m_value만 건드릴 상황이면 Base에 구현하는게 맞음 .
	//Derived에 선언된 변수랑 , m_value와 같이 사용할 경우가 있다면 부득이하게 Base변수의 멤버에 접근해야함 .
	//1)private -> getvalue로 접근->상위클래스의 함수를 거치기에 퍼포먼스가 떨어질수있음, 많이사용할경우 코딩하기 번거로움 
	//2)protected 로 바꿔 자식클래스가 직접접근 . 
	//상황에 맞추어 사용하는것이.. 실력향상에 도움된다!.
	void setvalue(int a) 
	{
		Base::m_value = a;
		//do some work with the variables defined in Dervied 
	}
};