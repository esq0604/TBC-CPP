#include<iostream>

using namespace std;

int main()
{
	//�� -null, 0 -�ƽ�Ű �ڵ�� ���� �� �� ����.
	char myString[] = "string";

	for (int i = 0; i < 7; ++i)
	{
		cout <<(int)myString[i] << endl;
	}
	cout << endl;

	//���ڴ� 6���������� arr�� size�� 7��. null charater����.!
	cout << sizeof(myString) / sizeof(myString[0]) << endl;

	char myString2[255];
	
	cin >> myString2;

	//ù���ڰ� A�� �ٲ�
	myString2[0] = 'A'; 
	
	myString2[4] = '\0';
	cout << myString2 << endl;

	return 0;
}