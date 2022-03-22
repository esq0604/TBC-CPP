#include<iostream>
using namespace std;

class Something
{
public:
	//static 멤버변수 -> 모든 객체에서 접근가능 : 메모리를 공유하기 때문에
	class _init
	{
	public:
		_init()
		{
			s_value = 9876;
		}
	};
private:
	static int s_value;
	int m_value;

	static _init _s_initializer;

public:

	//static 생성자는 지원안함
	Something()
		:m_value(123)//,s_value(1024)
	{}

	static int getValue()
	{

		return s_value;
	}

	int temp()
	{
		//this ->특정 인스턴스의 주소를 받아 그 인스턴스에 속해있는 멤버들의 주소를 가져다가 그걸 사용하겠다란 의미.
		return this->s_value;
	}
};

int Something::s_value = 1024;


Something::_init Something::_s_initializer;

int main()
{
	//static 멤버변수가 private 경우 인스턴스가 없어도 멤버변수를 사용할수 있다는 이점을 이용하지 못함
	//이럴때 static 멤버변수를 통해서 해결할수있다. 특정 인스턴스와 상관없이 실행시킴.
	cout << Something::getValue() << endl;

	Something s1,s2;
	cout << s1.getValue() << endl;

	//멤버함수의 주소를 담는 포인터.
	int (Something:: *fptr1)() = &Something::temp;

	//static memberfuntion
	int (*fptr2)() = &Something::getValue;
	


	//non static memberfunction은 객체의 this포인터를 사용해서 멤버함수를 쓰기 때문에 
	//객체가 없으면 멤버함수 포인터를 사용할수 없다 .
	//결국 내부에 모든 this포인터가 숨어있는 형태임. 
	cout << (s2.*fptr1)()<<endl;
	
	cout << fptr2() << endl;
	return 0;
}