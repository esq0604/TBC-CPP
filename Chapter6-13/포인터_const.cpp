#include<iostream>

using namespace std;

int main()
{
			//case1 : value pointer const 
	//value가 const면 포인터도 const여야한다.
	const int value = 5;
	//변수의 값은 바꿀수 없지만 주소는 가져올수있다.
	const int* ptr = &value;
	//value변수의 값은 바꿀수 없다 assingment는 불가능.
	//*ptr = 6;

	//de-referecing을 통해 읽을 수 있다.
	cout << *ptr << endl;


			//case 2 : pointer const
	int value2 = 5;
	const int* ptr2 = &value2;
	
	//value자체는 const는 아니지만 포인터가 가르키고 있는 
	// 주소에 있는 값을 바꾸진 못한다.
	//*ptr = 6;
	
	//역참조로는 값을 못바꾸지만 value에서는바꿀수있음.
	value2 = 6;

	cout << *ptr << endl;


			//case3: 변수가 두가지가 있는 경우
	int value3 = 5;
	//const int*ptr은 가르키고 있는 주소에 있는 값을 안바꾸겠다는 의미
	//주소값을 바꾸지 않겠다는것은아니다 .
	const int* ptr3 = &value3;

	//역참조를 통해 값을 바꿀수는 없다.
	//*ptr=7;

	int value4 = 6;
	ptr3 = &value4;

			//case4: 포인터 자체가 상수인경우
	int value5 = 6;
	int* const ptr4 = &value5;

	*ptr4 = 10;
	cout << *ptr4 << endl;
	
	int value6 = 8;

	//포인터의 주소값을 바꿀수 없음.
	//ptr4 = &value6;

			//case 5: 포인터자체, 포인터가 가르키는 값 둘다 상수인경우
	int value7 = 5;
	const int* const ptr=&value7;

	//역참조 통해 대입 불가능, 아무것도 대입할수없음.
	//*ptr = 10;

	//이것들을 어디에쓰나 .
	//함수 파라미터로 들어갈때 array를 집어넣을때 포인터로 들어가니까
	//값을 바꾸지말고,주소값을 바꾸지말라 할때 넣을수있음.
	return 0;
}