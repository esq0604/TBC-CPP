#include<iostream>

//���������ȿ� �����̸� -�̸��� �浹�̳���.
//�Լ��ǰ�� ����� ���Ǹ� �и��Ҽ�����.
//������ �������� ���͵� ���������� ���Ǵ� �Ѱ����ؾ��� . �޸𸮸� �����ϴ� ���� �Ѱ��ۿ�����.
//�̸��� ������ �Ķ���Ͱ� �ٸ���찡 �ƴ�. �̸� �Ķ���� ��ȯ���� �������.

//������ �ٸ��ٴ°��� Ȯ���� ���ֱ� ���� ���ӽ����̽��� ����Ҽ�����.
namespace work1
{

	int a = 1;
	void doSomething()
	{
		a += 3;
		std::cout << a <<std::endl;
	}
}

namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 5;
		std::cout << a <<std::endl;
	}
}

int main()
{
	using namespace std;

	//�޸𸮰����� os �κ��� �޾ƿ�
	int apple = 5;
	cout << apple << endl;
	

	
	{
		//�������α׷��ֿ����� �ּ����� ���ӽð� duration�� �������Ϸ�����.
		//������ ��� �Ҹ��� �������� �ּ����� ������ ������ �ɰ�
		//��ü ���α׷��� �ɰ��°��� ��ü���α׷����� �⺻���� ö��
		int apple2 = 1;

		cout << apple2 << endl;
	}
	

	cout << apple << endl;

	//::�� ����, ���� ���������ڶ�� �θ���.
	//scpoe resolution operator
	//�����Ѵٺ��� �浹�� �������ش� ,�ذ����شٴ����ε� 
	work1::a;
	work1::doSomething();

	work2::a;
	work2::doSomething();
	
	
	return 0;
}


//�߰�ȣ�� ������ �޸𸮰� �ݳ��Ǿ� ���̻󺼼�����.
// apple = 3; 
