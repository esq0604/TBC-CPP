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
	
	//cin >> myString2;
	//���� �����ϴ¹� .getline ��ĭ�̶� null charater���� �ٸ���.
	cin.getline(myString2, 255);
	

	//while�� �̿� ���ڿ� ��� 
	int ix = 0;
	while (true)
	{
		if (myString2[ix] == '\0') break;
		cout << myString2[ix] << " " << (int)myString2[ix] << endl;
		++ix;
	}

	//ù���ڰ� A�� �ٲ�
	myString2[0] = 'A'; 
	
	//myString2[4] = '\0';

	//cout�� char[]�������� �� ���ڿ��� ����Ҷ��� 
	//null charater�� ������������ �����. 
	cout << myString2 << endl;

	




	//�������� c��Ÿ�� �ڵ� -�����Ҷ� �迭�� ���ڿ��� �����ϱ⿡ ���ΰ����� �߿�
	char source[] = "Copy this!";
	char dest[50];

	//�޸�ħ���� ��ŷ�̵ɼ��ֱ⿡ �����֤Ѥ���
	strcpy_s(dest, 50,source);

	cout << source << endl;
	cout << dest << endl;

	//strcat() ���ڿ��ڿ� �ٿ��ִ°�
	//strcmp() �ι��ڿ��� ���ϴ°�. -������ 0�� ������.
	//cout << strcat(dest, source);
	cout<<strcmp(source, dest);

	//���� �������� 	std::string�� ���̾��Եȴ�.

	return 0;
}