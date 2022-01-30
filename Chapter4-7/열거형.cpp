#include<iostream>
#include<typeinfo>
#include<string>
//�÷��� ����Ұ�찡 ����. �������÷��� 0,1��� ��ȣ�� �����ϸ� ��ٷο�
//enum�� foward declation���� ��������� ���� inclue�ϴ°��� ������ϴ�.

enum Color//user-defined data types 
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	//BLUE
};//�����ݷ� �ʼ�

//���� �޶��̴� �������� ���� ����ó�� �۵��Ѵ�. BLUE, �ִ��� �ߺ������ؼ� �ۼ��Ұ�.
//enum class�� ���� �ذ��� �����ϱ���. 
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

	//�ʱ�ȭ
	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);

	//uniform initialzation�� �� ���̰��ִ�.
	//��ü���⿡�� �������ش���.
	Color apple{ COLOR_RED };

	Color my_color = COLOR_BLACK;
	cout << my_color << " " << COLOR_BLACK << endl;

	/*if (COLOR_BLUE == COLOR_GREEN)
	{
		cout << "Equal" << endl;
	}*/
	
	int color_od = COLOR_RED;
	cout << color_od << endl;

	//int�� �ִ°��� �Ұ�����. enum��ü��  ����� ǥ���� �ϱ����Ѱ��̱⿡ 
	//Color my_color = 3;
	
	//����ȯ�� ������ .
	Color my_color2 = static_cast<Color>(3);

	//cin���� ���� ���� ���ؼ� ��ȸ�ϴ¹��
	int in_number;
	//cin>>my_color2
	cin >> in_number;

	
	if (in_number == COLOR_BLACK) my_color2 = COLOR_BLACK;

	if(in_number == static_cast<Color>(0))
		my_color2= static_cast<Color>(0);

	//string���� �Է����޴¹� 
	string str_input;
	std::getline(cin, str_input);

	//�������� ���� color_black, �� ���α׷��Ӱ� ����̱⶧���� ��Ÿ��
	//�����ֱ⶧����.
	if (str_input == "COLOR_BLACK")
		my_color2 = static_cast<Color>(0);
}