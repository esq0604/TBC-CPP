#include<iostream>

int main()
{
	using namespace std;

	char c1(65); //c1=65, c1{65}; 다 가능 
	char c2('A'); //문자 ' ' , 문자열 " " ,std::string 

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	//c-style casting 
	cout << (char)65 << endl;
	cout << (int)'A' << endl;


	//char형 65를 새로 만든다, int형 'A'를 새로만든다는느낌.
	//cpp style
	cout << char(65) << endl;
	cout << int('A') << endl;

	//기능적으로는 위와같지만 casting 중엔 static casting, dynamic casting 두개 가 있음
	//객체지향에선 dynamic castring이 많이쓰임
	//위 2개는 강제적으로 변환, 아래는 기본타입들간의 변환에있어 컴파일러에게 
	//변환이 될지 확인을 요청하는 느낌이 될 수 있다.
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	
	//static cast를 해도 원래 변수의 저장된 값은 변하지 않는다.
	cout << ch << endl;
	return 0;
}