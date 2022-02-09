#include<iostream>

using namespace std; 

//void pointer , generic pointer

enum Type
{
	INT,
	FLOAT,
	CHAR
};

int main()
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	
	void* ptr = nullptr;

	//보이드 포인터로 넣는순간 얘가 int,float,char인지 알 방법이없음.
	ptr = &i;
	ptr = &f;
	//ptr = &c;


					////보이드포인터는 포인터연산이 불가능함.
	//데이터타입에 해당하는 포인터를 사용하면 포인터 연산을 사용할수있다.
	int* ptr_i = &i;
	cout << ptr_i << endl;
	cout << ptr_i + 1 << endl;

	
	//+1을 할시 몇바이트를 더해야하는지 알수가 없기 때문에.
	//cout << ptr + 1 << endl;

	Type type = FLOAT;
	cout << &f << " " << ptr << endl;
	//de-referencing이 불가능함.
	//메모리에 이진수로 나열된건 알지만, 그것이 무슨데이터타입을 표현하기 위해
	//들어간지 모른다 . 
	// 형변환을 한다면 값을 알수있다.
	//cout << *ptr << endl;
	if(type==FLOAT)
	cout << *static_cast<float*>(ptr) << endl;

	else if(type=INT)
		cout << *static_cast<int*>(ptr) << endl;

	return 0;
}