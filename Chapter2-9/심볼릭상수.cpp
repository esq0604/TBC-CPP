#include<iostream>
#include "MY_CONSTANTS.h"
using namespace std;

//const int&, const int
void printNumber(const int my_number)
{
	//my number를 대부분바꾸지 않을것임. 바꾼다면 int =my_number 식으로 복사해서바꾸는것,..
	//파라미터를 함수내부에서 바꾼다면 입출력측면을 명확하게 보여주는것이 아님.
	//이러한 경우를 방지하기 위해 파라미터를 대부분 const로 바꿈.
	cout << my_number << endl;
}
int main()
{
	printNumber(123);

	//contst 고정된 숫자를 의미함. 앞에붙여도 가능하고 double const도 가능함.
	//한번 값을 정하면 바꿀 수 없기 때문에 initialization을 꼭 해야함 .
	// 이미 상수가 정해져있음.-컴파일타임 상수 
	//둘다 const가 붙어 문법상 구분을 해줄수는 없음. cpp11에 새로운키워드
	//컴파일타임에 값이 결정됨.
	constexpr double gravity{ 9.8 };

	//gravity = 1.2; const가 있으면 숫자를 바꾸지 못함 
	//특별한 방법을 통해 바꿀 수 있지만 그러면 const의 의미가 사라짐.


	int number;
	cin >> number;
	//special num은 실행을 해서 입력을 받아야 결정이  되는것임. -런타임상수
	const int special_number(number);
	

	//30- 상수대체 메크로는 거의안쓰임 -디버깅이힘듬.
	//define은 적용범위가 너무 넓음. 
	//const int price_per_item =30;으로 해결 -범위, 디버깅 모두 해결댐.
	//price_per_item이 상수로 쓰지만 나중에는 변수로 쓰도록 확장할수도있음.
	//메크로를 쓰지않는 이유가 메크로를 쓰면 일반화가 어려워진다.
	
	const int price_per_item = 30;
	int num_item = 123;
	int price = num_item *price_per_item; 

	//const 는 몰아놓는 경우가 있음. 
	double radius;
	cin >> radius;
	double circumference = 2.0*radius*constants::pi;
	
	return 0;
}