#include<iostream>

using namespace std;

//사용자 측면에서 프로그래밍을 하는~ 예상치못한 입력에 대응하는방법 ..

//cin에서는 사용자의 입력을 버퍼에 담아두고 보내주는 방식을 이용함
//사용자가 하나만 입력을 할거라고 기대한곳에 2개를 넣어버리면 2번째는 버퍼에있음.
//이럴때는 버퍼를 비워주면된다.
int getInt()
{
	while (true)
	{
		cout << "Enter an integer number : ";
		int x;
		cin >> x;

		//실패를했는지. 했으면 true 리턴
		if (std::cin.fail())
		{
			//내부 상태 플래그를 초기화 
			//cin은 현재 입력이 성공적인지 실패인지 같은 상태를 비트플래그로 저장함
			//clear()는 현재 입력 실패상태인지 성공상태인지 나타내는 '상태'를 초기화 할때 사용함 .
			std::cin.clear();
			//32767은 적당히 큰수. 앞에 적어놈 ,버퍼를 비운다 ..
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