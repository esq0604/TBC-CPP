#include<iostream>
#include<algorithm> //알고리즘 라이브러리에 max가 있음. 
using namespace std;


//매크로 주로 대문자로 작성함. 코드에서 MY_NUMBER을 만나면 9로대체함.
//문자도 가능함. define은 교체,
//매크로는 하드코딩한것과 같은 작용을 함.
//max는 std에 있긴해서 이렇게 쓸필요는없음. 
//매크로의 범위는 이 파일안에서만 적용된다.
#define MAX(a,b) (((a)>(b)) ? (a):(b))

#define LIKE_APPLE

void doSomething();


int main()
{
//ifdef는 전처리기임. 빌드를 하기전에 정해지는것.
	//전처리기는 이프로그램이 윈도우즈인지, 리눅스인지 알기전에 등등 실행됨.
	//opengl을 쓸지, directx 를쓸지 그래픽카드는 무엇인지 등등 
	//매크로는 대체해주는 것이라 했는데 전처리기에서는 교체없이 실행된다.
#ifdef LIKE_APPLE //LIKE_APPLE이 정의가 되어있으면 실행
	cout << "APPLE" << endl;
#endif


#ifndef LIKE_APPLE 
	cout << "ORAGE" << endl; //흐리게 되어있음 선언이 되어있기 때문에.
#endif // !LIKE_APPLE 

	//define 의 효력범위를 알 수 있음.
	doSomething();

	cout << MAX(1,4) << endl;
	cout << MAX(1 + 3, 2) << endl;

	cout << std::max(1 + 3, 2) << endl;
	return 0;
}