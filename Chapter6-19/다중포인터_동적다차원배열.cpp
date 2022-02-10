#include<iostream>

using namespace std;

int main()
{
	//이중포인터는 이차원 행렬을 구현할때 많이 쓴다 .

	int* ptr = nullptr;

	//포인터에 대한 포인터 인데 원래 변수는 int이다.
	int** ptrptr = nullptr;

	int value = 5;

	ptr = &value;
	ptrptr = &ptr;

	//value의 주소, value의 들어있는값,  ptr본인의 주소.
	cout << ptr << " " << *ptr << " " << &ptr << " " << endl;

	//ptr의 주소, ptr에 들어있는 값(value의 주소) ,ptrptr의 주소  
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;

	//*(*ptrptr)이라 생각하면 편함. de-referencing을 두번.
	cout << **ptrptr << endl;


	//이중포인터는 이차원 행렬을 구현할때 많이 쓴다 .
	const int row = 3;
	const int col = 5;

	const int s2da[row][col] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};
	/*
	//포인터로 array구현
	int* r1 = new int[col] {1, 2, 3, 4, 5};
	int* r2 = new int[col] {6, 7, 8, 9, 10};
	int* r3 = new int[col] {11, 12, 13, 14, 15};


					//이중포인터로 구현 .
	//r1,r2,r3.. 가 몇개가 나올지 모름. row개수 만큼 들어가는것.
	//위와같은 방법도있지만 int의 pointer의 , array를만든다. 
	//포인터들의 배열을 동적생성함. 
	int** matrix = new int* [row] {r1, r2, r3};
	*/

	//for문으로 생성
	int** matrix = new int* [row];

	for (int r = 0; r < row; ++r)
		matrix[r] = new int[col];
	
	//값을대입
	for (int r = 0; r < row; ++r)
		for (int c = 0; c < col; ++c)
			matrix[r][c] = s2da[r][c];
		cout << endl;


	//print all elements
	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			cout << matrix[r][c] << " ";
		cout << endl;
	}

	//delete -for문으로 돌렸으면 더 좋을텐데.,
	/* delete순서 .
	delete[] r1;
	delete[] r2;
	delete[] r3;
	delete[] matrix;
	*/

	//delete 순서 생각하면서.
	// new int[col] delete을 위해  matrix[r]가 살아있어야함.
	//따라서  matrix[r] = new int[col]; delete 후
	// int** matrix = new int* [row] 을 delete해야한다.
	for (int r = 0; r < row; ++r)
		delete[] matrix[r];

	delete[] matrix;


					//이중포인터를 사용하지 않는방법
	//pointer의 pointer를 쓰는것은 좀 부담스러움/
	 
	//1차원 동적  array를 2차원처럼 사용해야함 .
	int* matrix2 = new int[row * col];
	for (int r = 0; r < row; ++r)
		for (int c = 0; c < col; ++c)
			matrix2[c + col * r] = s2da[r][c];

	//print
	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			cout << matrix2[c + col * r] << " ";
		cout << endl;
	}

	delete[] matrix2;

	return 0;
}