#include<iostream>

using namespace std;

int main()
{
	double value = 7;
	double* ptr = &value;



	//unsigned int pointer type  -�ּҸ� 10������
	//�����ʹ� �ּ�, �ּҴ� ������Ÿ�԰� ������� �����ȣ �������ε� 
	//�� ������Ÿ���� �տ� �����ٱ�. > de-referencing�� �Ҷ� � Ÿ������ ��������, ������ ����� +1�� �����Ʈ���� �˱����ؼ�
	//�����͵� ������Ÿ���� �ʿ��ϴ� .
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr - 1) << endl;
	cout << uintptr_t(ptr + 1) << endl;
	cout << uintptr_t(ptr + 2) << endl;

	
	long long arr[] = { 9,7,5,3,1 };
	long long* ptr2 = arr;

	for (int i = 0; i < 5; ++i)
	{
		//cout << arr[i] << " " << (uintptr_t) & arr[i] << endl;
		cout << *(ptr2 + i) << " "<<(uintptr_t)(ptr2+i) << endl;
	}


	char name[] = "jack jack";

	const int n_name = sizeof(name) / sizeof(char);
	
	char* ptr3 = name;
	char** ptr4=&ptr3;
	cout << n_name << endl;
	cout << sizeof(*ptr4) << endl;

	
	while (true)
	{
		
		cout << (*ptr3++);
		if (*ptr3 == '\0')
			break;
	}

	return 0;
}