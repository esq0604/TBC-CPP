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

	//new�� ������ delete�� �־����
	//return �� �ϸ� �����ϱ� ���������� ������
	//������ ���α׷��� ©�� �Ǽ��� �����ʴ´�.
	delete[]array;
	


	//�ʱ�ȭ���
	int* arr = new int[length]();
	for (int i = 0; i < length; ++i)
	{
		cout << (uintptr_t) & arr[i] << endl;
		cout << arr[i] << endl;
	}

	//����� �ʱ�ȭ�� ���� ������ 
	//�ο����� ���� �޸𸮸� ����Ϸ��ϸ� ������ ����.
	int* arr2 = new int[length] {11,22,33,44,55,66};
	for (int i = 0; i < length; ++i)
	{
		cout << (uintptr_t)&arr2[i] << endl;
		cout << arr2[i] << endl;
	}

	//������Ÿ�ӿ� 5����°��� �����̳���.
	int fixedArray[] = { 1,2,3,4,5 };

	//�����Ҵ翡���� �̷��ѹ�����Ұ�����.
	//������Ÿ�ӿ� �������� ������ �ϴ°�,
	int* arr3 = new int[] {1, 2, 3, 4, 5};

	//�����Ҵ��� resizing�� ���������δ� �Ұ�����.
	//��ū�޸𸮸� �޾ƿ´��� �����ִ��޸𸮸� �����ؼ� �ְ�
	//���ε��°��� �ٿ�����. 
	//�� �ٸ���� os���� �޸𸮸� �޶���û
	//�����迭�� �����ϸ� �� �������ִ��� - �ȵɰ�� �ٽø�������.

	delete[]arr3;
	return 0;
}