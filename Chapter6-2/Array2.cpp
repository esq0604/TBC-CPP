#include<iostream>

using namespace std;

//students_scores는 문법상 배열이 아니라 포인터(주소값을 저장하는변수)이다.
//배열 원소의 값을 복사하는 것이 아닌 
//배열의 첫번째 주소값만 복사하는것이다.
void doSomething(int students_scores[])
{
	//첫번째 주소값을 저장하는 포인터 변수이기 때문에 
	//그 자체는 주소값을 저장하는 다른 변수다. 따라서 
	//다른 변수의 주소값을 갖는다. 
	//첫번째 주소를 저장하는 변수(포인터)와, 첫번째 원소를 저장하는 주소. 
	//두개로 나뉘는것.
	cout << (int)&students_scores << endl;
	cout << (int)students_scores << endl;
	//students_scores 가 가르키고 있는 주소의 첫번째 주소값 
	//포인터변수에 저장되어 있는 값을 출력함.
	cout << (int)&students_scores[0] << endl;
	cout << &students_scores[0] << endl;


	//포인터 변수가 가르키는 곳의 인덱스값들.
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	//array로 넘어온것이 아닌 포인터로 넘어왔다.
	//4가 똑같은 4지만 integer의 size가 아닌 포인터의 size임.
	//디버그 86 -32비트 , 32비트에선 포인터변수가 4바이트
	// 64바이트에서 컴파일하면 포인터변수가 8바이트다.
	cout<<"size in dosomething" << sizeof(students_scores) << endl;
}

int main()
{
	const int num_studnets = 20;

	int students_scores[num_studnets] = { 1,2,3,4,5 };

	//16진수 보기 불편해 10진수 int로 캐스팅.
	// 배열이름의 주소는 첫번째의 주소를 보여줌. 
	// 배열은 식별자자체가 주소가 된다. &연산자가 없어도된다.
	//4바이트씩 차이가 나는것을 보여준다. -연이어있다.
	cout << (int)students_scores << endl;
	cout << &students_scores << endl;
	cout << (int)&students_scores[0] << endl;
	cout << (int)&students_scores[1] << endl;
	cout << (int)&students_scores[2] << endl;
	cout << (int)&students_scores[3] << endl<<endl;

	cout<<"Size in main" << sizeof(students_scores) << endl;

	//식별자 자체가 주소기 때문에 첫번째원소의 주소값을 매개변수로 줌.
	doSomething(students_scores);


}