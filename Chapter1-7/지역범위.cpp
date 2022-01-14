// Chapter1-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
/*
int main()
{
	//x 메모리에 대한 식별자 
	int x = 0;//x(0) x가 메모리에 잡히고 0이란 값으로 초기화, 메모리에 자기 존재를 갖게됨 =>x가 인스턴스를 갖게됨.
	//int x = 1; // 위와 아래의 메모리가 다르다면 이름,식별자가 달라야한다
	
	cout << x << " " << &x << endl;  //&x 메모리의 주소를 알게해줌 .


	{
		int x = 0; //x지만 다른 메모리에 대한 식별자임 
	
		cout << x << " " << &x << endl;
	}
	{
		int x = 2;
	
		cout << x << " " << &x << endl;
	}

	cout << x << " " << &x << endl;
	 
	return 0;
}
// x가 메모리에서  사라짐.
*/

void doSomething(int x)//값에 의한 전달을 받았으므로 주소값이 다르게 나옴
{		
	x = 123;
	cout << x << " " << &x << endl;
}

int main()
{
	int x = 0;

	cout << x << " " << &x << endl;
	doSomething(x); //doSomething(&x)와, 매개변수형식이 *, 포인터라면 같은 주소가 나올 수 있을것이다.
	cout << x << " " << &x << endl;

	return 0;

}
