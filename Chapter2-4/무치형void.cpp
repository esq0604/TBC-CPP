#include<iostream>


//파라미터가 없다 . 
void my_function()
{

}

int main()
{
	//void는 메모리를 차지하지 않기때문에 선언을 할수없다.
	//void my_void;
	int i = 123;
	float f = 123.456f;

	void* my_void;
	

	//어떠한 데이터타입은 메모리를 많이 차지하기 때문에
	// 각각의 데이터타입의 첫 주소의 규격은 똑같다 .
	// 데이터타입이 다르고 데이터타입의 사이즈가 다르더라도
	// 주소를 표현하는 데이터량은 동일하다 
	// 두 주소의 데이터타입은 동일하기 때문에 void*로 casting이 가능함(형변환)
	// 이후 다시 int,float의 주소타입으로 형변환이 가능해진다.
	// 이후 포인터를 배울때 자주 사용될수 있음 .
	//정수형 변수의 주소
	my_void = (void*)&i;

	//실수형 변수의 주소
	my_void = (void*)&f;

	
	return 0;
}