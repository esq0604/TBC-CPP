#include<iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_colums = 5;

	//이차원 배열인것처럼, 행렬처럼 사용할수있게됨
	//이미지처리, 딥러닝을 사용할때 아주 많이사용된다.
	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_colums; ++col)
			cout << "[" << row << "]" << "[" << col << "]" << '\t';
		cout << endl;
	}

	cout << endl;

	//row_major <->colum major
	//copy initialization
	//num_rows는 생략 가능, coulums는 생략이 불가능 .
	//
	int array[][num_colums] 
	{
		{1,2,}, //row0
		{6,7,8,9,10},//row1
		{11,12,13,14,15}//row2
	};

	//int array[][num_colums] = { 0 }; -전부 0으로도 초기화 가능.
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