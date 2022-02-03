#include<iostream>

using namespace std;

void printarr(int arr[],int length)
{
	for (int i = 0; i < length; i++)
		cout << arr[i] << " ";

	cout << endl;
}

int main()
{

	const int length = 5;
	int arr[length] = { 3,5,2,1,4 };

	for (int curidx = 0; curidx < length-1; ++curidx)
	{
		int smlix = curidx;

		for (int seleix = curidx + 1; seleix < length; ++seleix)
		{
			if (arr[smlix] > arr[seleix])
				smlix = seleix;
		}
		
		{
			int temp = arr[smlix];
			arr[smlix] = arr[curidx];
			arr[curidx] = temp;
		}
		
		printarr(arr, length);
	}
	
}