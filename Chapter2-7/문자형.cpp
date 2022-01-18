#include<iostream>
#include<limits>
int main()
{
	using namespace std;

	//char c1(65); //c1=65, c1{65}; �� ���� 
	//char c2('A'); //���� ' ' , ���ڿ� " " ,std::string 

	//cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	////c-style casting 
	//cout << (char)65 << endl;
	//cout << (int)'A' << endl;


	////char�� 65�� ���� �����, int�� 'A'�� ���θ���ٴ´���.
	////cpp style
	//cout << char(65) << endl;
	//cout << int('A') << endl;

	////��������δ� ���Ͱ����� casting �߿� static casting, dynamic casting �ΰ� �� ����
	////static cast�� �ٸ����α׷��ӵ鿡�� cast �ϴ°��� ���� �ߵ���.
	////��ü���⿡�� dynamic castring�� ���̾���
	////�� 2���� ���������� ��ȯ, �Ʒ��� �⺻Ÿ�Ե鰣�� ��ȯ���־� �����Ϸ����� 
	////��ȯ�� ���� Ȯ���� ��û�ϴ� ������ �� �� �ִ�.
	//cout << static_cast<char>(65) << endl;
	//cout << static_cast<int>('A') << endl;

	//char ch(97);
	//cout << ch << endl;
	//cout << static_cast<int>(ch) << endl;
	//
	////static cast�� �ص� ���� ������ ����� ���� ������ �ʴ´�. 
	//cout << ch << endl;


	

	cout << sizeof(char) << endl;

	//�̴�� ����ϸ� �̻��� ���ڰ� ���´� (int�� ĳ���� �������)
	cout << (int)std::numeric_limits<char>::max() << endl;
	cout << (int)std::numeric_limits<char>::lowest() << endl;

	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;

	//ȭ�鿡 ǥ�ô� �ȵ����� �ǹ̸� ���°� -�̽������� ������
	//\n�� �ϳ��� ���ڷ� �ν��� �ȴ�, -�ƽ�Ű�ڵ带 ����
	//\n�� �ٹٲ�  ,endl�� �ٹٲް� ���ÿ� cout ���ۿ��ִ� ������� ȭ��鿡 �� �����

	cout << int('\n') << endl;
	cout << "This is first line \n second line\n"; 
	cout << "This is first line " << endl;
	cout << "second line";

	//�ٹٲ��� ���� �ʰ� ���ۿ��ִ� ������ �������. 
	cout << "This is first line " << std::flush;
	
	
	wchar_t c;
	char16_t c3; //�����ڵ忡 �ִ� ���� ��밡��  


	//1���ڸ� ������ �ִ� c1���� ����.
	char c1(65);
	////2����, 3���ڸ� �Է��Ѵٸ� ex abc -> ���۸�
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	//a�� ó���� �ǰ� bc�������ִ� ���·� b �� �Էµ�.
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	//���ڰ� 3���ε� 4����������?? -���۰� ��� ������� �ѹ� �� �Է¹ްԵȴ� 
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;





	return 0;

}