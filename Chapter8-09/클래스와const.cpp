#include<iostream>
using namespace std;

class Something
{
public:
	//const로 막을수 있는 함수는 다 막아두는것이 좋다고 하심. 
	int m_value = 0;
	void setValue(int value) { m_value = value; }
	int& getValue()
	{
		cout << "non -const version" << endl;
		return m_value;
	}
	int getValue2() const //memberfuntion을 const화함. 안에서는 값을바꾸지않는다. 
	{
		return m_value;
	}

	//const memberfunfion을 사용-> 값의 수정을 못하게 
	//따라서 레퍼런스 타입을 사용할때 값의 수정을 막기위해 반환형도 const로 막아주는것이좋다.
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

	//something.setValue(3); 문맥상 맞지도 않음. const인데 값을바꾸려함.

	something2.getValue() = 10; //레퍼런스 타입이기때문에 바꿔줄수있다.
	cout << something2.getValue() << endl; //값이 바뀜.

	//m_value를 바꾸려하지도 않은데 const때문에 문제가 생김 .
	//컴파일러는 바뀌었냐 물어보는게 아니라 memberfuntion이 const인지를 물어봄
	//cout << something.getValue() << endl; -멤버함수가 const가 아니라. 오류
	cout << something2.getValue2() << endl;
	cout << something.getValue3() << endl;


	
	

}