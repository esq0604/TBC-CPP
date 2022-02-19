#include<iostream>
#include<string>
using namespace std;

//들어오는 매개변수는 다른데 함수의 기능이 같으면
//함수 오버로딩을 사용하면 좋다 
//함수가 다르다 같다는 이름만 같다고 판단하는것이 아니라.
//매개변수가 다르면 이름이 같아도 다른함수 처럼 정의를함.
//매개변수 타입이 가장 잘 맞는 , 주어진 인자와 매개변수가 걸맞는
//함수를 찾아서 실행해준다.
//cpp에선 리턴타입만 다른것만으로는 오버로딩이 불가능하다 .
int add(int x, int y)
{
	return x + y;
}
int add(double x, double y)
{
	return x + y;
}

//하나는 int, 하나는 double로 만들고싶다면
//retrun 값 가지고는 구분을 할수없음.
//1.이름을 바꾸는방법 - 함수오버로딩이 아님.
//2.매개변수를 바꾸는방법. -입력값이 들어가는데
//리턴값을 받아야하나?? 참조를 사용하면됨.
//int getRandomValue(int x);
//double getRandomValue(double x);
void getRandom(int& x)
{

}
void getRandom(double& x)
{

}

//typedef를 사용해도 같은 타입임.
//컴파일러입장에서는 같은함수가 있는꼴 .
typedef int my_int; 
//void print(int x) {}
//void print(my_int x){}


//매치가 정확히  안될때.
void print(const char* value){}
void print(int value) {}

void print2(unsigned int value){}
void pirnt2(float value){}
int main()
{
	//어느 add를 사용할지는 컴파일할때 결정이 되어야한다. 
	add(1, 2);
	add(3.0, 4.0);

	//단점.
	//봤을때 x가 return 으로써 값을 받아오는건지,입력인지 구분이 잘안댐.
	int x;
	getRandom(x);

	//무언가 넣어줘야 오버로딩을 할수있다, 구분을할수있다.
	//리턴타입만 으로는 오버로딩이 불가능하다.
	//int x= getRandomInt(x);
	//int x =getRandomInt(int());


	//잘 맞는게 없어 억지로 있는것들중 가까운것에 맞추는데
	// 잘안맞는경우 
	//포인터일경우 문제 const를 통해 해결.
	print(0);
	print("a");


	//너무 잘 맞아 혼란에 빠진경우 모호성을 제거해줘야함.
	// (usinged int)'a' , 0u, 3.141592f
	print2(0); //0 - unsinged ,float인지 애매 의도대로 캐스팅을 해줘야함.
	print2('a'); //a가 딱맞는건 없지만 a를 usinged, float둘다 바꿀수있어 애매함. u를 붙여주면 unsinged
	print2(3.141592); //double이면 float일줄 알았지만 애매하다. 뒤에 f를 붙여주면 float
	return 0;
}