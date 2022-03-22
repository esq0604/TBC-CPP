#include<iostream>
using namespace std;

class Something
{
public:
	//static ������� -> ��� ��ü���� ���ٰ��� : �޸𸮸� �����ϱ� ������
	class _init
	{
	public:
		_init()
		{
			s_value = 9876;
		}
	};
private:
	static int s_value;
	int m_value;

	static _init _s_initializer;

public:

	//static �����ڴ� ��������
	Something()
		:m_value(123)//,s_value(1024)
	{}

	static int getValue()
	{

		return s_value;
	}

	int temp()
	{
		//this ->Ư�� �ν��Ͻ��� �ּҸ� �޾� �� �ν��Ͻ��� �����ִ� ������� �ּҸ� �����ٰ� �װ� ����ϰڴٶ� �ǹ�.
		return this->s_value;
	}
};

int Something::s_value = 1024;


Something::_init Something::_s_initializer;

int main()
{
	//static ��������� private ��� �ν��Ͻ��� ��� ��������� ����Ҽ� �ִٴ� ������ �̿����� ����
	//�̷��� static ��������� ���ؼ� �ذ��Ҽ��ִ�. Ư�� �ν��Ͻ��� ������� �����Ŵ.
	cout << Something::getValue() << endl;

	Something s1,s2;
	cout << s1.getValue() << endl;

	//����Լ��� �ּҸ� ��� ������.
	int (Something:: *fptr1)() = &Something::temp;

	//static memberfuntion
	int (*fptr2)() = &Something::getValue;
	


	//non static memberfunction�� ��ü�� this�����͸� ����ؼ� ����Լ��� ���� ������ 
	//��ü�� ������ ����Լ� �����͸� ����Ҽ� ���� .
	//�ᱹ ���ο� ��� this�����Ͱ� �����ִ� ������. 
	cout << (s2.*fptr1)()<<endl;
	
	cout << fptr2() << endl;
	return 0;
}