#include<iostream>
#include "MY_CONSTANTS.h"
using namespace std;

//const int&, const int
void printNumber(const int my_number)
{
	//my number�� ��κйٲ��� ��������. �ٲ۴ٸ� int =my_number ������ �����ؼ��ٲٴ°�,..
	//�Ķ���͸� �Լ����ο��� �ٲ۴ٸ� ����������� ��Ȯ�ϰ� �����ִ°��� �ƴ�.
	//�̷��� ��츦 �����ϱ� ���� �Ķ���͸� ��κ� const�� �ٲ�.
	cout << my_number << endl;
}
int main()
{
	printNumber(123);

	//contst ������ ���ڸ� �ǹ���. �տ��ٿ��� �����ϰ� double const�� ������.
	//�ѹ� ���� ���ϸ� �ٲ� �� ���� ������ initialization�� �� �ؾ��� .
	// �̹� ����� ����������.-������Ÿ�� ��� 
	//�Ѵ� const�� �پ� ������ ������ ���ټ��� ����. cpp11�� ���ο�Ű����
	//������Ÿ�ӿ� ���� ������.
	constexpr double gravity{ 9.8 };

	//gravity = 1.2; const�� ������ ���ڸ� �ٲ��� ���� 
	//Ư���� ����� ���� �ٲ� �� ������ �׷��� const�� �ǹ̰� �����.


	int number;
	cin >> number;
	//special num�� ������ �ؼ� �Է��� �޾ƾ� ������  �Ǵ°���. -��Ÿ�ӻ��
	const int special_number(number);
	

	//30- �����ü ��ũ�δ� ���ǾȾ��� -�����������.
	//define�� ��������� �ʹ� ����. 
	//const int price_per_item =30;���� �ذ� -����, ����� ��� �ذ��.
	//price_per_item�� ����� ������ ���߿��� ������ ������ Ȯ���Ҽ�������.
	//��ũ�θ� �����ʴ� ������ ��ũ�θ� ���� �Ϲ�ȭ�� ���������.
	
	const int price_per_item = 30;
	int num_item = 123;
	int price = num_item *price_per_item; 

	//const �� ���Ƴ��� ��찡 ����. 
	double radius;
	cin >> radius;
	double circumference = 2.0*radius*constants::pi;
	
	return 0;
}