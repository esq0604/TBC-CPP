#include <iostream>
using namespace std;

class Something
{
public:
	//static 멤버 변수는 initialize를 할수없음.
	//static const라면 초기화를 반드시 해줘야함. 
	//일반적인 const는 런타임에 값이 결정될 수도 있음 ,constexpr은 컴파일타임에 확실히 결정이 되어야함. 
	static int s_value;

};

int Something::s_value = 1; //전역범위에서 초기화  , 정의는 .cpp에서만 해야한다.
int main()
{
	//인스턴스 생성 전에도 사용가능함. 
	cout << &Something::s_value << " " << Something::s_value << endl;

	Something st1;
	Something st2;
	st1.s_value = 2;

	cout << &st1.s_value <<" "<< st1.s_value << endl;
	cout << &st2.s_value <<" "<< st2.s_value << endl;

	Something::s_value = 1024;
	cout << &Something::s_value << " " << Something::s_value << endl;
}