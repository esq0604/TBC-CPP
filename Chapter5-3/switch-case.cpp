#include<iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE,
};

void printColorName(Colors color)
{
	// 이렇게 처리도 가능하지만 switch문을 처리하면 간단해진다-
	/*if (color == Colors::BLACK)
		cout << "Black" << endl;
	else if (color == Colors::WHITE)
		cout << "White";
	else if (color == Colors::RED)
		cout << "Red";*/
	//using Colors 네임스페이스가 아니기때문에 불가능.

	switch (static_cast<int>(color))
	{
	case 0: //Colors::BLACK 을 줄임.
		cout << "black";
		break;
	case 1:
		cout << "white";
		break;
	case 2:
		cout << "red";
		break;
	case 3:
		cout << "green";
		break;
	case 4:
		cout << "blue";
		break;
	default:
		break;
	}
	cout << endl;
}

int main()
{
	printColorName(Colors::RED);
	int x;
	//cin >> x;
	//{
	//	//의도적으로 break를 안넣을수도 있음.
	//	// 중간에만 브레이크를 설정할수도 있고, 이런 특수한경우에는 주석을 남겨준다.
	//	//입력받은 숫자에 대해서만 문자를 출력하고싶다면 break를 넣으면된다.
	//	switch (x)
	//	{
	//	case 0:
	//		cout << "zero";
	//		break;
	//	case 1:
	//		cout << "one";
	//		break;
	//	case 2:
	//		cout << "two";
	//		break;
	//	}
	//	cout << endl;
	//}
	
	//모든 케이스에 대해 다 사용이 되는 변수가 있다면
	//차라리 밖에다 정의를한다.
	//변수선언하고 정의하고 사용할때 가장 좋은것은 사용되기 직전에 선언하고
	//사용되는 범위를 넘어가면 os에 반납하도록 만드는것. 블럭을 만드는것,
	{
		//int y = 0;

		cin >> x;
		switch (x)
		{
			case 0:
			{
				int y = 5;
				y = y + x;
				cout << y << endl;
				break;
			}
			case 1:
			{
				int y = 5;
				y = y - x;
	
				cout << y << endl;
			}
		
			default:
				cout << "Undefined input" << x << endl;
				//break가 없으면 밑에있는것이 모두 실행됨. 그래서 default에는 안적어도댐.
				//break;
		}
	}
	
	

	return 0;
}