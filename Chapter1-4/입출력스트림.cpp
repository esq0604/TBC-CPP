#include<iostream> //cout , cin ,endl, ...
#include <cstdio> //printf

int main()
{
	using namespace std;
	
	//cout �� std��� namespace�ȿ� ���ǵǾ��ְ� �̸� ����ϱ� ���� ::�� �־���.
	int x = 1024;
	cout << "I love this lecture!\n"; //<< std::endl;
	cout << "x is" << x << std::endl;
	//\t �� ���� ����,\n�� �������� �ǹ��ϰ� endl�ΰ� �����ѱ���� ������ �ƿ� ���� ����� �ƴϴ�.
	cout << "abc" << "\t" << "def" << std::endl;
	cout << "ab" << "\t" << "cdef" << std::endl;

	cout << "\a";

	//�Է��� �޴´� - �Է¹޾Ƽ� ������ �����͵� �ʿ��� 
	int y;
	cin >> y;
	cout << "your input is " << y << endl;
	return 0;

	//cout, cin - stream�� �Ϻκ���.
}