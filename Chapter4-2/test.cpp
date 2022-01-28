#include<iostream>
#include"MyConstants.h"
extern int a=123;
void doSomthing()
{
	using namespace std;
	cout << "Hellow" << endl;

	cout << "In test.cpp" << Constants::pi <<" " << &Constants::pi <<  endl;
}