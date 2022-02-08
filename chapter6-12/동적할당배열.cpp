#include<iostream>

using namespace std;

int main()
{
	
	int length;
	cin >> length;

	int* array = new int[length];

	array[0] = 1;
	array[1] = 2;

	for (int i = 0; i < length; ++i)
	{
		cout << (uintptr_t)&array[i] << endl;
		cout << array[i] << endl;
	}

	//new가 있으면 delete도 있어야함
	//return 을 하면 나가니까 괜찮을수도 있지만
	//복잡한 프로그램을 짤때 실수를 하지않는다.
	delete[]array;
	


	//초기화방법
	int* arr = new int[length]();
	for (int i = 0; i < length; ++i)
	{
		cout << (uintptr_t) & arr[i] << endl;
		cout << arr[i] << endl;
	}

	//사이즈가 초기화수 보다 작으면 
	//부여받지 못한 메모리를 사용하려하면 에러가 난다.
	int* arr2 = new int[length] {11,22,33,44,55,66};
	for (int i = 0; i < length; ++i)
	{
		cout << (uintptr_t)&arr2[i] << endl;
		cout << arr2[i] << endl;
	}

	//컴파일타임에 5개라는것이 결정이난다.
	int fixedArray[] = { 1,2,3,4,5 };

	//동적할당에서는 이러한방법은불가능함.
	//컴파일타임에 결정하지 않으려 하는것,
	int* arr3 = new int[] {1, 2, 3, 4, 5};

	//동적할당은 resizing을 직접적으로는 불가능함.
	//더큰메모리를 받아온다음 원래있던메모리를 복사해서 넣고
	//새로들어온것을 붙여넣음. 
	//또 다른방법 os에게 메모리를 달라고요청
	//기존배열을 유지하며 더 받을수있는지 - 안될경우 다시만들어야함.

	delete[]arr3;
	return 0;
}