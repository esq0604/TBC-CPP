#include<iostream>

int main()
{
	using namespace std;

	//3.14는 상수 - 바꿀수없음 리터럴상수 
	//float 형 변수라면 f를 붙여주는 것이 좋고 
	//아니라면 3.14 인 double형이 float형으로 캐스팅 되는것이다.  
	float pi = 3.14f;
	
	//뒤에 u가 붙는다면 unsinged라는 뜻임 .
	//숫자 뒤에 붙이면 잘 안보이기 때문에 명확하게 표현해주는것이 더 좋음.
	//int i = -1234u;
	int i = (unsigned int)1234;
	unsigned int n = 5u;
	long n2 = 5L;
	
	//Decimal : 0,1,2,3,4,5,6,7,8,9,10
	//Octal : 0,1,2,3,4,5,6,7,10,11,12,13,14,15,16 ..//0~7 8가지
	//Hexa : 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F  


	//앞에 0을 붙이면 8진수로 표현된 12가 대입된다. =10
	int x = 012; 
	
	//0x 는 16진수표기법임.
	int x2 = 0xF;

	//0011 1010 1111 1111 2진수가 있다함 
	//3A7F 2진수보단 16진수가 더 읽기가 편함.

	//2진수 바로입력이 가능 - -0b
	int x3 = 0b1010;
	//'로 끊어주면 컴파일러는 ' 을 무시해줌 -사람이 읽기 편해짐 .
	int x4 = 0b1011'1111'1010;

	int num_items = 123;
	
	//10이라는숫자의 의미를 주석으로 적어줄순있지만 
	//이름을 정해주는 것이 좋음 .
	//리터럴로 넣어 버리면 장기적으로 안좋아짐
	//심볼릭 상수로 다루면된다 .
	const int price_per_item = 10; 
	int price = num_items * price_per_item; // 10 is ~~ 별로 안좋음 
	return 0; 
}