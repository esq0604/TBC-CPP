#include<iostream>
#include<string> //std::string을 사용하기 위해 인클루드해야함.
#include<limits>
using namespace std;

int main()
{
	//표시로는 13개로 되어있지만 직접새보면 12개이다. 
	//끝난다는 것을 표현하는 문자가 하나 더있다.
	cout << "Hello, World" << endl;

	//c,cpp에서 기본적으로 제공해주는것은 한글자.
	//한글자를 여러개 나열하는 방식으로 문자열을 사용한다.
	//기본적으로 사용하는방식이다.
	const char my_strs[]= "Hello, World";


	//프로그래머들이 편하라고 만들어준것.
	//사용자 정의 자료형이라고 생각하면된다.
	//기본자료형으로 쓸 수 있는데 추가적인 기능들이 들어가있는 상태다.
	//우리가 string을 기본자료형처럼 사용할수있는 이유는 누군가 string안에
	//그 기능들을 구현해서 넣어놨기 때문이다.
	const string my_hell = "Hello, World";
	cout << my_hell << endl;



	//string my_ID=123; 
	// - 123은 기본 데이터타입  built-in인 데이터타입이다
	//string은 std에, 표준라이브러리에 들어있긴 하지만  built-in하곤 좀 다르다
	// built-in보단 더 다음단계의 기능들을 가지고있기 때문에 바로 바꿔줄수는 없다.
	//바꿀수는있긴함.
	string my_ID = "123";

	cout << "Your age ? : ";
	int age;
	cin >> age;
	//std::getline(std::cin, age);
	//std::cin.ignore(32767, '\n');
	std::cin.ignore(std::numeric_limits< std::streamsize>::max(), '\n');
	cout << "Your name ? : ";
	string name;
	//cin >> name;
	
	//getline은 엔터를 칠때까지 입력을 받는것이다.
	std::getline(std::cin, name);



	cout << name << " " << age << endl;

	//문자열 뒤에 문자열 더하기  append
	//+연산자가 string class 안에 정의가 되어있어서 그럼
	//string을 만든 프로그래머가 프로그래밍을 해준것임.
	//사용자 데이터타입도 산술연산을 하는것처럼 기능을 구현할수가있다.
	//문자열의 끝을 의미하는 null charater가 하나 숨어있다.
	string a("helo, ");
	string b("world ");
	string hw = a + b;

	hw += "im good";
	cout << hw << endl;

	//string class 내부에 있는 함수 사용 a.~()
	cout << hw.length() << endl;

	return 0;
}