#include<iostream>
#include<typeinfo>
#include<iomanip>

int main()
{
	using namespace std;

	//리터럴이 어떤데이터타입인지 출력
	
	int a = 123;
	cout << typeid(a).name() << endl;


	//암시적형변환 -컴파일러가 알아서 
	//컴파일러가 형변환을 해줄때 비트단위에서 데이터를 복붙하는게 아니라
	//변화를 시켜주는것임.
	int a2 = 123.0; //컴파일러가 강제로 


	//명시적 형변환 
	//메모리사이즈를 작게사용하는 데이터타입을 큰사이즈로 보낼때 
	//메모리입장에서는 더 넓은곳의 메모리를 사용하니까 손해볼것이없음.
	//정밀도가 떨어질일이 없다
	//numeric promotion
	float a3 = 1.0f;
	double d = a3;

	//numeric conversion
	//메모리 사이즈가 큰곳에서 작은곳으로, 타입이 바뀔시.
	int i = 30000;
	char c= i;

	//int는 30000이라 char type이 표현할 수 있는 가장 큰수인 127이 나올줄알았는데
	//48이 나옴  예기치못한 경우에서 문제가 생기는 경우는 
	//결과가 달라질수도있음. 주의해야한다.
	cout << static_cast<int>(c) << endl;

	double d2 = 3.123456789;
	float f = d2;


	//나름 최선을 다해서 저장을 하지만 정밀도가 부족해서 완벽하게는 불가능함.
	cout << d2 << endl;
	cout << std::setprecision(12) << f << endl;

	float f2 = 3.14;
	int i2 = f;
	cout << i2 << endl;


	//numeric conversion
	//u-unsigned 5u -unsigned맞음. 
	//결과값이 4294967291 이상하게나옴 u를뺀다면 잘나온다.. 
	//usigned끼리 계산한걸 int로 형변환 하지 않기때문이다.
	cout << 5u - 10<<endl;
	cout << 5 - 10u<<endl;
	cout << 5u - 10u << endl;

	//결과값이 제대로 저장이 되진 않을것임.
	//unsigned끼리 계산한걸 unsigned에 넣을것.
	//형변환도 우선순위가 있다. 
	//int , usigned int ,unsigned long, long long ,unsigend long long 
	//float , double, long double 순이다.
	//int 보다 unsigend int가 우선순위가 높기 때문에 int로 바꾸지 않는것이다.
	//내부적으로 컴파일러가 그렇게 작동하는것임. 


	//이상태로 두면 암시적 형변환으로 i에 저장
	//깔끔하게, 명시적으로 , c-style casting
	//int 타입의 인스턴스를 새로 만들어서 넣ㄴ느다
	int i3 = (int)4.0;

	//기능상 차이는 없다고암 .
	int i4 = static_cast<int>(4.0);
	return 0;
}