#include<iostream>

using namespace std;

//�Լ��̸� ������ �ڼ��� 
int multiplyTwoNumbers(int num_a, int num_b)
{
	int sum = num_a * num_b;
	return sum;
}
int main()
{
	//�Ķ���Ͱ� �����̵�
	//�μ��� �Ķ���Ϳ� �� �ʱ�ȭ�� ��.
	cout << multiplyTwoNumbers(1,2) << endl;
	cout << multiplyTwoNumbers(3, 4) << endl;
	cout << multiplyTwoNumbers(8, 13) << endl;

	return 0;
}