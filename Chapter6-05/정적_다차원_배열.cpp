#include<iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_colums = 5;

	//������ �迭�ΰ�ó��, ���ó�� ����Ҽ��ְԵ�
	//�̹���ó��, �������� ����Ҷ� ���� ���̻��ȴ�.
	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_colums; ++col)
			cout << "[" << row << "]" << "[" << col << "]" << '\t';
		cout << endl;
	}

	cout << endl;

	//row_major <->colum major
	//copy initialization
	//num_rows�� ���� ����, coulums�� ������ �Ұ��� .
	//
	int array[][num_colums] 
	{
		{1,2,}, //row0
		{6,7,8,9,10},//row1
		{11,12,13,14,15}//row2
	};

	//int array[][num_colums] = { 0 }; -���� 0���ε� �ʱ�ȭ ����.
	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_colums; ++col)
			//cout << "[" << row << "]" << "[" << col << "]" << '\t';
			cout << array[row][col] << '\t';
			//cout << (int)&array[row][col] << '\t';
		cout << endl;
	}
	
	
	int array3[5][4][3];
	return 0;
}