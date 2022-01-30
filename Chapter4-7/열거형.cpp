#include<iostream>
#include<typeinfo>
#include<string>
//컬러를 사용할경우가 많음. 각각의컬러를 0,1등등 번호로 설정하면 까다로움
//enum은 foward declation보단 헤더파일을 만들어서 inclue하는것이 더깔끔하다.

enum Color//user-defined data types 
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	//BLUE
};//세미콜론 필수

//서로 달라보이는 열거형의 값도 전역처럼 작동한다. BLUE, 최대한 중복을피해서 작성할것.
//enum class를 통해 해결이 가능하긴함. 
enum Feeling
{
	HAPPY,
	JOY,
	TIRED,
	BLUE,
};


int main()
{
	using namespace std;

	//초기화
	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);

	//uniform initialzation은 좀 차이가있다.
	//객체지향에서 설명해준다함.
	Color apple{ COLOR_RED };

	Color my_color = COLOR_BLACK;
	cout << my_color << " " << COLOR_BLACK << endl;

	/*if (COLOR_BLUE == COLOR_GREEN)
	{
		cout << "Equal" << endl;
	}*/
	
	int color_od = COLOR_RED;
	cout << color_od << endl;

	//int를 넣는것은 불가능함. enum자체가  수대신 표현을 하기위한것이기에 
	//Color my_color = 3;
	
	//형변환은 가능함 .
	Color my_color2 = static_cast<Color>(3);

	//cin으로 직접 받지 못해서 우회하는방법
	int in_number;
	//cin>>my_color2
	cin >> in_number;

	
	if (in_number == COLOR_BLACK) my_color2 = COLOR_BLACK;

	if(in_number == static_cast<Color>(0))
		my_color2= static_cast<Color>(0);

	//string으로 입력을받는법 
	string str_input;
	std::getline(cin, str_input);

	//권장하지 않음 color_black, 등 프로그래머가 사람이기때문에 오타가
	//날수있기때문에.
	if (str_input == "COLOR_BLACK")
		my_color2 = static_cast<Color>(0);
}