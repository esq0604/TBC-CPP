#include<iostream>

using namespace std;

//����� ���鿡�� ���α׷����� �ϴ�~ ����ġ���� �Է¿� �����ϴ¹�� ..

//cin������ ������� �Է��� ���ۿ� ��Ƶΰ� �����ִ� ����� �̿���
//����ڰ� �ϳ��� �Է��� �ҰŶ�� ����Ѱ��� 2���� �־������ 2��°�� ���ۿ�����.
//�̷����� ���۸� ����ָ�ȴ�.
int getInt()
{
	while (true)
	{
		cout << "Enter an integer number : ";
		int x;
		cin >> x;

		//���и��ߴ���. ������ true ����
		if (std::cin.fail())
		{
			//���� ���� �÷��׸� �ʱ�ȭ 
			//cin�� ���� �Է��� ���������� �������� ���� ���¸� ��Ʈ�÷��׷� ������
			//clear()�� ���� �Է� ���л������� ������������ ��Ÿ���� '����'�� �ʱ�ȭ �Ҷ� ����� .
			std::cin.clear();
			//32767�� ������ ū��. �տ� ����� ,���۸� ���� ..
			std::cin.ignore(32767, '\n');
			cout << "Invalid number, please try again " << endl;
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return x;
		}
		
	}
}
char getOperator()
{
	while (true)
	{
		cout << "Enter an operator(+,-) : "; //TOOD:more operator *,/ etc.
		char op;
		cin >> op;

		std::cin.ignore(32767, '\n');
		if (op == '+' || op == '-')
			return op;
		else
			cout << "Invalid operator , please try again" << endl;
	}
}

void printResult(int x, char op, int y)
{
	switch (op)
	{
	case '+':
		cout << x + y << endl;
		break;
	case '-':
			cout << x - y << endl;
			break;
	default:
			cout << "Invalid operator" << endl;
	}
}
int main()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);

}