#include<iostream>

using namespace std;


void doSomething(const int& x)
{
	cout << x << endl;
}

int main()
{
				// 변수에 const 
	//값을바꾸지못하므로 참조변수에도 const를 해줘야함.
	const int x = 5;
	const int& ref_x = x;

				//참조변수에 const
	int y = 5;
	const int& ref_y = y;

				//참조변수를 참조하는변수에 const
	const int& ref_2 = ref_x;

				//참조변수 선언은 메모리주소가 있어야가능함.
	//int ref& _x2 = 3; 리터럴을 그냥넣을순없음 
	
				//const reference는 가능. -주소도 나온다.
	//그럼 일반변수와의 차이는 무었??
	//함수파라미터로 사용시 매우 용이하다 
	const int& ref = 3 + 4;
	cout << ref << endl;
	cout << &ref << endl;

	int a = 1;
	doSomething(a);

	//바로 리터럴을 매개변수로 넣어줄수있음.
	doSomething(1);
	doSomething(a + 3);
	doSomething(3 * 4);
}