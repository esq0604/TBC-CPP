#include<iostream>
#include"MyConstants.h"

//#include"test.cpp" testcpp를 직접 인클루드시도할수있지만 가급적사용하지않음.

using namespace std;

//int value = 123;
//static duration variable 정적변수 
//디버깅이나 테스트할때많이쓰인다함 함수가 몇번쓰이나 확인하고싶을때도

//전역변수는 어디서든 값ㅇ ㅣ바뀔수있기에 위험함.
// 다른 cpp파일에서도 바꾸게 된다면 관리가 안된다.
// 함수설계시 파라미터로 설계한다.  변수 이름을global 로 표현해줘
// 이름을 통해 확실하게 구분해준다. 
// 객체지향을 통해 최대한 줄여줘야함. 
//int a = 1;

//void doSomething()
//{
//	//변수 a가 os로부터 받은 메모리가 static이라는뜻이다.
//	//차라리 전역변수를 사용?? -결과는같다.
//	//a라는 변수를 재사용하기 때문에 a=1이라는 대입을 반복하지 않는다.
//	//처음에 static 변수를 선언할때는 초기화가 반드시 있어야한다.
//	//static a; 이렇게는 쓸 수 없다는것.
//
//	static int a = 1;
//
//	++a;
//
//	cout << a << endl;
//}

//forward declaration-어딘가에 존재하니까 링킹할때 같다 붙여라~
//다른cpp파일링킹함.
//이때 생략된 키워드가 있는것이다. -extern
//변수도 이처럼 가능함 

extern void doSomthing();

//컴파일시 문제는 없지만 링킹할때는
//링킹할때는 찾아봐도 몸체가 없어메모리를 갖고있지않아 링킹에러가 뜬다 .
extern int a;

int main()
{
	
	//cout << value << endl;

	//int value = 1;
	//
	////global scope operator 이용 
	//cout << ::value << endl;
	////local value 
	//cout << value << endl;

	cout << a << endl;

	doSomthing();

	//test.cpp와 Constants::pi의 주소가 다르다
	//갯수가 많아짐녀 점점 메모리가 낭비됨.
	cout<<"In main.cpp" << Constants::pi<<" "<< &Constants::pi << endl;

	return 0;
}