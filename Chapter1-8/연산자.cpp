// Chapter1-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	//연산자 -operator
	//단항-unary ex- -2,-x ...
	//이항 -binary ex 1+2 ...
	//삼항-ternay 
	int x = 2; //x is a variable -변수(메모리주소를갖음) 2 is literal(숫자) 등호 =assignment

	int y = (x > 0) ? 1 : 2;//조건 ? 참일때 실행 : 거짓일때 실행 ;
	cout << 1 + 2 << endl;  //x,2는 피연산자 Operand

	cout << y << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
