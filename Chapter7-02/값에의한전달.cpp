#include<iostream>

using namespace std;

//���������� int y�� ������ �ǰ�, y������ �޸𸮿�
//5��� ���� ���簡 �Ǿ� �ʱ�ȭ�� �ȴ�. 
void doSomething(int y)
{
	cout << "In func " << y << " " << &y << endl;
}

int main()
{
	//ȣ���� �ϰ� �Ǹ� �Ű������� ���� ����Ǿ� ������.
	doSomething(5);

	int x = 6;

	cout << "In main" << x << " " << &x << endl; 

	//������ ���޵Ǵ°��� x��� ������ ����ִ� 6�̶��
	//value�� ���ڷν� �Ķ���Ϳ� ������ �Ǵ°��̴�.
	doSomething(x);
	doSomething(x + 1);

	return 0;
}