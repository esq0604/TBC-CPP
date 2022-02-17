#include<iostream>

using namespace std;

int foo(int x, int y);


//출력이 매개변수에 따라 달라짐. -parameter
//매개변수란 함수가 어떠한 기능을 하는지 바꿔줄수있음.
//변수가 선언되는것과 비슷한 형태를 함.
//함수가 끝남과 동시에 메모리로 반납이된다.
int foo(int x, int y)
{
	return x, y;
}

int main()
{
	int x = 1, y = 2;
	foo(x, y+2); 
	foo(7, 8);//7 ,8: arguments (actual parameters)  
}