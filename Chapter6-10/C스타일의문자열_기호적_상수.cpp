#include<iostream>

using namespace std;


//함수의 리턴타입으로도 기호적상수의 사용이 가능하다.
const char* getName()
{
	return "jackjack";
}
int main()
{
	
	
	//오른쪽은 리터럴, 왼쪽은 포인터 
	// jackjack이 담길 메모리를 어디서 만들것인가에 대한 정보는
	// 아무것도 없다. 포인터는 메모리의 주소를 가르키기만 하는것이기때문에.
	//jack jack 문자열 리터럴을  기호적인 상수처럼 사용할수가 있다. 앞에 const를 붙이면된다.
	//char *name ="jack jack"
	const char* name = "jack jack";
	const char* name2 = "jack jack";
	const char* name3 = "jack jack2";
	const char* name4 = getName();
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;
	cout << (uintptr_t)name3 << endl;




	//문자 포인터의 특성
	//배운걸로는 설명이 불가능 , 
	//cout에서 문자열은 특별히 처리한다라고 생각
	//문자의 포인터가 들어오면문자열이 아닐까 라고 가정을함. 
	//문자의 포인터는 cstyle의 문자열 일 가능성이 높다, 문자의 배열일 가능성이 높다
	//라고 생각하고 \0을 만날때까지 array를 쭉 출력함.
	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "hello world!";
	const char* nam = "jack jack";

	cout << int_arr << endl;
	cout << char_arr << endl;
	cout << nam << endl;


	//문자 포인터 특성2 
	//Q儆儆儆儆儆儆儆儆儆儆儆儆儆?0?Y 결과가 Q는 잘나오지만 이후는 이상한 문자가나옴
	//이전과 같은내용이다 메모리 주소가 cout에 들어가니까 문자열인가보다 생각을 해보고
	//\0 이 나올때까지 계속 출력을함. 
	char c = 'Q';
	cout << &c << endl;


	return 0;
}	
