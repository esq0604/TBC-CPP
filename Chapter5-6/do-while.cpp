#include<iostream>

using namespace std;

int main()
{
	int selection;//must be declared outside do / while loop

	//사용자가 입력한 숫자가 0이하 5이상인경우 다시입력을받는
	//이러한경우 한번은 무조건 입력을 받아야한다.
	do {
		//int selection - while에서 selection에 접근할수없음. 
		cout << "1 add" << endl;
		cout << "2 sub" << endl;
		cout << "3 mult" << endl;
		cout << "4 div" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);

	cout << "You selected" << selection << endl;



	return 0;

}