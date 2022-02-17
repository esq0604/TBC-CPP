#include<iostream>

using namespace std;

//내부적으로 int y가 선언이 되고, y변수의 메모리에
//5라는 값이 복사가 되어 초기화가 된다. 
void doSomething(int y)
{
	cout << "In func " << y << " " << &y << endl;
}

int main()
{
	//호출을 하게 되면 매개변수로 값이 복사되어 전달함.
	doSomething(5);

	int x = 6;

	cout << "In main" << x << " " << &x << endl; 

	//실제로 전달되는것은 x라는 변수에 들어있는 6이라는
	//value만 인자로써 파라미터에 전달이 되는것이다.
	doSomething(x);
	doSomething(x + 1);

	return 0;
}