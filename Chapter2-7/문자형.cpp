#include<iostream>

int main()
{
	using namespace std;

	char c1(65); //c1=65, c1{65}; �� ���� 
	char c2('A'); //���� ' ' , ���ڿ� " " ,std::string 

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	//c-style casting 
	cout << (char)65 << endl;
	cout << (int)'A' << endl;


	//char�� 65�� ���� �����, int�� 'A'�� ���θ���ٴ´���.
	//cpp style
	cout << char(65) << endl;
	cout << int('A') << endl;

	//��������δ� ���Ͱ����� casting �߿� static casting, dynamic casting �ΰ� �� ����
	//��ü���⿡�� dynamic castring�� ���̾���
	//�� 2���� ���������� ��ȯ, �Ʒ��� �⺻Ÿ�Ե鰣�� ��ȯ���־� �����Ϸ����� 
	//��ȯ�� ���� Ȯ���� ��û�ϴ� ������ �� �� �ִ�.
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	
	//static cast�� �ص� ���� ������ ����� ���� ������ �ʴ´�.
	cout << ch << endl;
	return 0;
}