// Chapter1-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	//������ -operator
	//����-unary ex- -2,-x ...
	//���� -binary ex 1+2 ...
	//����-ternay 
	int x = 2; //x is a variable -����(�޸��ּҸ�����) 2 is literal(����) ��ȣ =assignment

	int y = (x > 0) ? 1 : 2;//���� ? ���϶� ���� : �����϶� ���� ;
	cout << 1 + 2 << endl;  //x,2�� �ǿ����� Operand

	cout << y << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
