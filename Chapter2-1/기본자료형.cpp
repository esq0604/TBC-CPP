#include<iostream>
#include<bitset>

int main()
{
	using namespace std;
	//bool�� ���������� ���ڷιٲ㼭 ����.
	bool bValue = false;  
	//���������� ���ڷ� �ٲ㼭 ������.  
	char chValue = 'A'; 

	//f�� ���ٸ� �����Ϸ��� double�� �ν��� ���� �޸��� ���̰� �ֱ⶧����
	//������ �� ��Ȯ�� ���ڸ� ǥ�����ִµ� �� �����޸𸮿� �����ϴϱ� �߷����� �κ��� ��������.
	float fValue = 3.141592f; 
	
	//���̽��� �⺻������ ����� ǥ���̵�.  ������ ��ü�� float�� �� .
	double dValue = 3.141592;

	//������Ÿ���� �������Ҷ� ������ �ȴ� .
	auto aValue = 3.141592;
	
	//int j = 3.5; //�����ؼ� �ʱ�ȭ
	//int i(4.5); //direct�ʱ�ȭ
	//int k{ 5.5 };//uniform �ʱ�ȭ 
	char a = 'H';

	//������ ������ ��� - sizeof ����Ʈ�� ����̵ȴ�.
	cout << (bValue ? 1 : 0) << endl;
	cout << chValue << (int)chValue << endl;
	cout << bValue << endl;
	cout << dValue << endl;
	cout << fValue << endl;


	cout << (uintptr_t)static_cast<void*>(&a) << endl;
	cout << (uintptr_t)static_cast<void*>(&i) << endl;

	return 0;
}