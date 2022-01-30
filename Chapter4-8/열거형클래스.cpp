#include<iostream>

int main()
{
	using namespace std;

	enum class Color
	{
		RED,
		BLUE,
	};
	
	enum class Fruit
	{
		BANANA,
		APPLE,
	};

	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;

	//둘다 내부적으로 0이기 때문에 두개가 같은것 처럼 되버린다.--말이 안됨..
	//이넘 클래스를 사용하면된다.
	//static_cast로 강제변환해서 비교를 할순 있으나 이건 원하는 바가 아니다.
	/*if (color == fruit)
	{
		cout << "Color is fruit ? " << endl;
	}*/

	Color color1 = Color::RED;
	Color color2 = Color::BLUE;
	Color color3 = Color::RED;
	if (color1 == color2)
		cout << "Same color " << endl;

	if (color1 == color3)
		cout << "Same color " << endl;
	return 0;
}