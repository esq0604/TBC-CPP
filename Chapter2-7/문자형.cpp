#include<iostream>
#include<limits>
int main()
{
	using namespace std;

	//char c1(65); //c1=65, c1{65}; 다 가능 
	//char c2('A'); //문자 ' ' , 문자열 " " ,std::string 

	//cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	////c-style casting 
	//cout << (char)65 << endl;
	//cout << (int)'A' << endl;


	////char형 65를 새로 만든다, int형 'A'를 새로만든다는느낌.
	////cpp style
	//cout << char(65) << endl;
	//cout << int('A') << endl;

	////기능적으로는 위와같지만 casting 중엔 static casting, dynamic casting 두개 가 있음
	////static cast는 다른프로그래머들에게 cast 하는것이 눈에 잘들어옴.
	////객체지향에선 dynamic castring이 많이쓰임
	////위 2개는 강제적으로 변환, 아래는 기본타입들간의 변환에있어 컴파일러에게 
	////변환이 될지 확인을 요청하는 느낌이 될 수 있다.
	//cout << static_cast<char>(65) << endl;
	//cout << static_cast<int>('A') << endl;

	//char ch(97);
	//cout << ch << endl;
	//cout << static_cast<int>(ch) << endl;
	//
	////static cast를 해도 원래 변수의 저장된 값은 변하지 않는다. 
	//cout << ch << endl;


	

	cout << sizeof(char) << endl;

	//이대로 출력하면 이상한 문자가 나온다 (int로 캐스팅 해줘야함)
	cout << (int)std::numeric_limits<char>::max() << endl;
	cout << (int)std::numeric_limits<char>::lowest() << endl;

	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;

	//화면에 표시는 안되지만 의미를 갖는것 -이스케이프 시컨스
	//\n이 하나의 문자로 인식이 된다, -아스키코드를 찍어본다
	//\n은 줄바꿈  ,endl은 줄바꿈과 동시에 cout 버퍼에있는 내용들을 화면들에 다 출력함

	cout << int('\n') << endl;
	cout << "This is first line \n second line\n"; 
	cout << "This is first line " << endl;
	cout << "second line";

	//줄바꿈을 하진 않고 버퍼에있는 내용을 다출력함. 
	cout << "This is first line " << std::flush;
	
	
	wchar_t c;
	char16_t c3; //유니코드에 있는 문자 사용가능  


	//1문자만 담을수 있는 c1원이 있음.
	char c1(65);
	////2문자, 3문자를 입력한다면 ex abc -> 버퍼링
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	//a가 처리가 되고 bc가남아있는 상태로 b 가 입력됨.
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	//글자가 3개인데 4번을받으면?? -버퍼가 모두 사라지고 한번 더 입력받게된다 
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;





	return 0;

}