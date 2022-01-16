#include<iostream>

using namespace std;

void doSomething()
{
#ifdef LIKE_APPLE //LIKE_APPLE이 정의가 되어있으면 실행
	cout << "APPLE" << endl;
#endif


#ifndef LIKE_APPLE 
	cout << "ORAGE" << endl; //흐리게 되어있음 선언이 되어있기 때문에.
#endif
}