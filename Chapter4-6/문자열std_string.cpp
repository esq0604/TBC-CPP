#include<iostream>
#include<string> //std::string�� ����ϱ� ���� ��Ŭ����ؾ���.
#include<limits>
using namespace std;

int main()
{
	//ǥ�÷δ� 13���� �Ǿ������� ���������� 12���̴�. 
	//�����ٴ� ���� ǥ���ϴ� ���ڰ� �ϳ� ���ִ�.
	cout << "Hello, World" << endl;

	//c,cpp���� �⺻������ �������ִ°��� �ѱ���.
	//�ѱ��ڸ� ������ �����ϴ� ������� ���ڿ��� ����Ѵ�.
	//�⺻������ ����ϴ¹���̴�.
	const char my_strs[]= "Hello, World";


	//���α׷��ӵ��� ���϶�� ������ذ�.
	//����� ���� �ڷ����̶�� �����ϸ�ȴ�.
	//�⺻�ڷ������� �� �� �ִµ� �߰����� ��ɵ��� ���ִ� ���´�.
	//�츮�� string�� �⺻�ڷ���ó�� ����Ҽ��ִ� ������ ������ string�ȿ�
	//�� ��ɵ��� �����ؼ� �־���� �����̴�.
	const string my_hell = "Hello, World";
	cout << my_hell << endl;



	//string my_ID=123; 
	// - 123�� �⺻ ������Ÿ��  built-in�� ������Ÿ���̴�
	//string�� std��, ǥ�ض��̺귯���� ����ֱ� ������  built-in�ϰ� �� �ٸ���
	// built-in���� �� �����ܰ��� ��ɵ��� �������ֱ� ������ �ٷ� �ٲ��ټ��� ����.
	//�ٲܼ����ֱ���.
	string my_ID = "123";

	cout << "Your age ? : ";
	int age;
	cin >> age;
	//std::getline(std::cin, age);
	//std::cin.ignore(32767, '\n');
	std::cin.ignore(std::numeric_limits< std::streamsize>::max(), '\n');
	cout << "Your name ? : ";
	string name;
	//cin >> name;
	
	//getline�� ���͸� ĥ������ �Է��� �޴°��̴�.
	std::getline(std::cin, name);



	cout << name << " " << age << endl;

	//���ڿ� �ڿ� ���ڿ� ���ϱ�  append
	//+�����ڰ� string class �ȿ� ���ǰ� �Ǿ��־ �׷�
	//string�� ���� ���α׷��Ӱ� ���α׷����� ���ذ���.
	//����� ������Ÿ�Ե� ��������� �ϴ°�ó�� ����� �����Ҽ����ִ�.
	//���ڿ��� ���� �ǹ��ϴ� null charater�� �ϳ� �����ִ�.
	string a("helo, ");
	string b("world ");
	string hw = a + b;

	hw += "im good";
	cout << hw << endl;

	//string class ���ο� �ִ� �Լ� ��� a.~()
	cout << hw.length() << endl;

	return 0;
}