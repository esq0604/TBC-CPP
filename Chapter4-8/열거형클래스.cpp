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

	//�Ѵ� ���������� 0�̱� ������ �ΰ��� ������ ó�� �ǹ�����.--���� �ȵ�..
	//�̳� Ŭ������ ����ϸ�ȴ�.
	//static_cast�� ������ȯ�ؼ� �񱳸� �Ҽ� ������ �̰� ���ϴ� �ٰ� �ƴϴ�.
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