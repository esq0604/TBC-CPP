#include<iostream>

int add(int a, int b)
{

	return a + b;
}

int main()
{
	using namespace std;

	int x = 6, y = 6;
	cout << x << " " << y << endl;

	//++x x++ �ǹ̰� �ٸ��� �˾ƾ���. 
	// ���Ѵ��� ��Ʈ������ ������. 
	cout << x++ << " " << y-- << endl;
	
	//��Ʈ������ ������ ���� ���ϴ°�.
	cout << ++x << " " << --y << endl;


	int x2 = 1;
	int y2 = 2;
	//3�� ���;� �ϴ°� �ƴѰ�?? 4������. -�����Ϸ��� ���� �ٸ����� �ִ���.
	//���ǰ� �߾ȵȴٰ� �Ѵ� . do not use 
	//x2�� ���� ������ �༭ ������ �����.
	int v = add(x2, ++x2); //���� 
	
	//�ƿ� ������ �ٸ����� �߳���.
	//���� ������ ���� �ʾ� ������ ����.
	int v2 = add(x2, ++y2);
	
	cout << v << endl;
	cout << v2 << endl;


	int x3 = 1;
	//x3 = x3++; undefined 

	return 0;
}