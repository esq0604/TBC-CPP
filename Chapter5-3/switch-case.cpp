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
	// �̷��� ó���� ���������� switch���� ó���ϸ� ����������-
	/*if (color == Colors::BLACK)
		cout << "Black" << endl;
	else if (color == Colors::WHITE)
		cout << "White";
	else if (color == Colors::RED)
		cout << "Red";*/
	//using Colors ���ӽ����̽��� �ƴϱ⶧���� �Ұ���.

	switch (static_cast<int>(color))
	{
	case 0: //Colors::BLACK �� ����.
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
	//	//�ǵ������� break�� �ȳ������� ����.
	//	// �߰����� �극��ũ�� �����Ҽ��� �ְ�, �̷� Ư���Ѱ�쿡�� �ּ��� �����ش�.
	//	//�Է¹��� ���ڿ� ���ؼ��� ���ڸ� ����ϰ�ʹٸ� break�� ������ȴ�.
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
	
	//��� ���̽��� ���� �� ����� �Ǵ� ������ �ִٸ�
	//���� �ۿ��� ���Ǹ��Ѵ�.
	//���������ϰ� �����ϰ� ����Ҷ� ���� �������� ���Ǳ� ������ �����ϰ�
	//���Ǵ� ������ �Ѿ�� os�� �ݳ��ϵ��� ����°�. ���� ����°�,
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
				//break�� ������ �ؿ��ִ°��� ��� �����. �׷��� default���� �������.
				//break;
		}
	}
	
	

	return 0;
}