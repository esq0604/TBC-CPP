#include<iostream>

using namespace std;

int main()
{
			//case1 : value pointer const 
	//value�� const�� �����͵� const�����Ѵ�.
	const int value = 5;
	//������ ���� �ٲܼ� ������ �ּҴ� �����ü��ִ�.
	const int* ptr = &value;
	//value������ ���� �ٲܼ� ���� assingment�� �Ұ���.
	//*ptr = 6;

	//de-referecing�� ���� ���� �� �ִ�.
	cout << *ptr << endl;


			//case 2 : pointer const
	int value2 = 5;
	const int* ptr2 = &value2;
	
	//value��ü�� const�� �ƴ����� �����Ͱ� ����Ű�� �ִ� 
	// �ּҿ� �ִ� ���� �ٲ��� ���Ѵ�.
	//*ptr = 6;
	
	//�������δ� ���� ���ٲ����� value�����¹ٲܼ�����.
	value2 = 6;

	cout << *ptr << endl;


			//case3: ������ �ΰ����� �ִ� ���
	int value3 = 5;
	//const int*ptr�� ����Ű�� �ִ� �ּҿ� �ִ� ���� �ȹٲٰڴٴ� �ǹ�
	//�ּҰ��� �ٲ��� �ʰڴٴ°����ƴϴ� .
	const int* ptr3 = &value3;

	//�������� ���� ���� �ٲܼ��� ����.
	//*ptr=7;

	int value4 = 6;
	ptr3 = &value4;

			//case4: ������ ��ü�� ����ΰ��
	int value5 = 6;
	int* const ptr4 = &value5;

	*ptr4 = 10;
	cout << *ptr4 << endl;
	
	int value6 = 8;

	//�������� �ּҰ��� �ٲܼ� ����.
	//ptr4 = &value6;

			//case 5: ��������ü, �����Ͱ� ����Ű�� �� �Ѵ� ����ΰ��
	int value7 = 5;
	const int* const ptr=&value7;

	//������ ���� ���� �Ұ���, �ƹ��͵� �����Ҽ�����.
	//*ptr = 10;

	//�̰͵��� ��𿡾��� .
	//�Լ� �Ķ���ͷ� ���� array�� ��������� �����ͷ� ���ϱ�
	//���� �ٲ�������,�ּҰ��� �ٲ������� �Ҷ� ����������.
	return 0;
}