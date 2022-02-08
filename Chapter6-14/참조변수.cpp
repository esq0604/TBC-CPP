#include<iostream>

using namespace std;

void doSomething(int n)
{
	n = 10;
	cout << "in dosomething " << n << endl;
}
//n의 값이 dosomething에 들어가는데 n의 값을 못바꾸게 하고싶을때. const로 막아버리면된다.
void dosomthingref(const int& n)
{
	//n = 10;
	cout << "In dosomething" << n << endl;
	cout << &n << endl;
}

//refernce를 사용하여 array를 넣을땐 엘리먼트의 수가 반드시 들어가야한다. 필요하다면 const를 붙이면된다.
void printElements(int(&arr)[5])
{
	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

int main()
{
	//메모리값을 0으로넣는것도 가능/ 
	//쓸수없는 주소 ?? 가짜전화번호랑 비슷한느낌 
	int value = 5;
	int* ptr = nullptr;
	ptr = &value;


				//참조 -별명,또다른이름처럼 사용할수있다.
	//내부적으로 ref가 value하고 같은 메모리를 사용하는것처럼 작동한다.
	//참조변수는 반드시 초기화가 되어야함, 리터럴이 들어갈수없음.
	int& ref = value;
	cout << ref << endl; 
	ref = 10; //*ptr=10;
	cout << value << " " << ref << endl;

	//주소를 찍어보면 ref는 value와 주소도 같음.
	cout << ptr << endl;
	cout << &ptr << endl; 
	cout << &value << endl;
	cout << &ref << endl;



					//참조와 const
	const int y = 8;
	
	//ref에서 y를 바꿀수도 있기 때문에 이를 막아둔다.
	//const를 붙여주면 물론 쓸수있다.
	const int& ref2 = y;

				//re assign이 가능한가? -가능함.
	int value1 = 5;
	int value2 = 10;
	int& ref1 = value1;
	cout << ref1 << endl;
	ref1 = value2;
	cout << ref1 << endl;


					//함수를 통해 값을 바꿈 .
	int n = 5;
	cout << n << endl;
	doSomething(n); //내부적으로는 값이 복사되는것이기 때문에. 영향을주지않음.
	cout << n << endl;


					//reference를 통해 값을바꿈.
	//포인터로 넘길때는 포인터 변수의 주소는 다르다.
	//변수 자체가 넘어가기 때문에 주소가 같음.
	// 주소 조차도 복사를 할 필요가 없는것이다.
	dosomthingref(n);
	cout << &n << endl;
	cout << n << endl;


					//array를 함수에 넣어줄때도 reference를 사용할수있다.
	const int length = 5;
	int arr[length] = { 1,2,3,4,5 };



					//struct와 reference
	Other ot;
	//ot안에 st안의 v1을 접근하려면 이렇게했어야함. 여러번사용하기 불편함.
	ot.st.v1 = 1.0;

	//reference를 쓰면된다.-속도도 느려지지않는다.
	int& v1 = ot.st.v1;
	v1 = 1;


					//reference와 pointer
	//기능상 동일함. reference도 내부적으론 포인터로 구현되어있음.
	int value2 = 5;
	int* const ptr2 = &value;
	int& ref2 = value2;

	return 0;
}