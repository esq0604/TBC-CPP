#include<iostream>

using namespace std;

void foo( int* ptr)
{
	cout << *ptr << " " << ptr <<" "<<&ptr<<endl;

	//const가 있으면 de-referencing한 값을 바꿀수없음. 
	//const가 없다면. 포인터를 사용해서 함수의 출력인것처럼 사용할수도있따.
	*ptr = 10;
}

//c-style 코딩
void foo(const int *const ptr ,const int* arr, int length)
{
	for (int i = 0; i < length; i++)
		cout << arr[i] << endl;
	
	//const를 통해 [0]도 de-referencing인걸 알수있음. 
	//arr[0] = 1.0;

	int x = 1;
	//const를 붙여도 주소자체를 바꿀수가있음
	// 	ptr = &x;
	//const int * const ptr처럼 ptr 앞에 붙이면 된다.
	// const가 2개있는 구조도 있다 정도로 알면될듯.
	//ptr = &x;
}

int main()
{
	int value = 5;
	cout << value << " " << &value << endl;

	int *ptr = &value;

	//포인터 변수도 변수이기 때문에. 포인터변수의 주소는 다르게 나온다.
	//형태로 봤을땐 값에의한 전달임. 주소라는 값을 값에의한 전달로 행한것이다.
	cout << &ptr << endl;
	foo(ptr);
	foo(&value);


	return 0;
}