#include<iostream>

using namespace std;


//�Լ��� ����Ÿ�����ε� ��ȣ������� ����� �����ϴ�.
const char* getName()
{
	return "jackjack";
}
int main()
{
	
	
	//�������� ���ͷ�, ������ ������ 
	// jackjack�� ��� �޸𸮸� ��� ������ΰ��� ���� ������
	// �ƹ��͵� ����. �����ʹ� �޸��� �ּҸ� ����Ű�⸸ �ϴ°��̱⶧����.
	//jack jack ���ڿ� ���ͷ���  ��ȣ���� ���ó�� ����Ҽ��� �ִ�. �տ� const�� ���̸�ȴ�.
	//char *name ="jack jack"
	const char* name = "jack jack";
	const char* name2 = "jack jack";
	const char* name3 = "jack jack2";
	const char* name4 = getName();
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;
	cout << (uintptr_t)name3 << endl;




	//���� �������� Ư��
	//���ɷδ� ������ �Ұ��� , 
	//cout���� ���ڿ��� Ư���� ó���Ѵٶ�� ����
	//������ �����Ͱ� �����鹮�ڿ��� �ƴұ� ��� ��������. 
	//������ �����ʹ� cstyle�� ���ڿ� �� ���ɼ��� ����, ������ �迭�� ���ɼ��� ����
	//��� �����ϰ� \0�� ���������� array�� �� �����.
	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "hello world!";
	const char* nam = "jack jack";

	cout << int_arr << endl;
	cout << char_arr << endl;
	cout << nam << endl;


	//���� ������ Ư��2 
	//Q��������������������������?0?Y ����� Q�� �߳������� ���Ĵ� �̻��� ���ڰ�����
	//������ ���������̴� �޸� �ּҰ� cout�� ���ϱ� ���ڿ��ΰ����� ������ �غ���
	//\0 �� ���ö����� ��� �������. 
	char c = 'Q';
	cout << &c << endl;


	return 0;
}	
