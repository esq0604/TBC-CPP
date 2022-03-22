#include <iostream>
using namespace std;

class Something
{
public:
	//static ��� ������ initialize�� �Ҽ�����.
	//static const��� �ʱ�ȭ�� �ݵ�� �������. 
	//�Ϲ����� const�� ��Ÿ�ӿ� ���� ������ ���� ���� ,constexpr�� ������Ÿ�ӿ� Ȯ���� ������ �Ǿ����. 
	static int s_value;

};

int Something::s_value = 1; //������������ �ʱ�ȭ  , ���Ǵ� .cpp������ �ؾ��Ѵ�.
int main()
{
	//�ν��Ͻ� ���� ������ ��밡����. 
	cout << &Something::s_value << " " << Something::s_value << endl;

	Something st1;
	Something st2;
	st1.s_value = 2;

	cout << &st1.s_value <<" "<< st1.s_value << endl;
	cout << &st2.s_value <<" "<< st2.s_value << endl;

	Something::s_value = 1024;
	cout << &Something::s_value << " " << Something::s_value << endl;
}