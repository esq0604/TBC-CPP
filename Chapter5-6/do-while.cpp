#include<iostream>

using namespace std;

int main()
{
	int selection;//must be declared outside do / while loop

	//����ڰ� �Է��� ���ڰ� 0���� 5�̻��ΰ�� �ٽ��Է����޴�
	//�̷��Ѱ�� �ѹ��� ������ �Է��� �޾ƾ��Ѵ�.
	do {
		//int selection - while���� selection�� �����Ҽ�����. 
		cout << "1 add" << endl;
		cout << "2 sub" << endl;
		cout << "3 mult" << endl;
		cout << "4 div" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);

	cout << "You selected" << selection << endl;



	return 0;

}