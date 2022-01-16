#include <iostream>
//iostream���� cout,cin,endl ����� std�� ���ǵǾ�����. 


//�̸��� ���� ��� ������ �ϳ��� �̸��� �ٲٴ� ����� ������
//�̸��� �����ϰ���� ��쵵 ���� -namespace �� �����
namespace MySpace1
{
	//���ӽ����̽� �ȿ� ���ӽ����̽��� �ϳ� �� ���� �� ����.
	namespace InnerSpace
	{
		int my_function()
		{
			return 0;
		}
	}
	int doSomething(int a, int b)
	{
		return a + b;
	}
}
namespace MySpace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}
using namespace std;

int main()
{
	//�տ� ���ӽ����̽��� �Ⱦ��� ���� ����.
	using namespace MySpace1;

	doSomething(3, 4);

	//�̳ʽ����̽� �Ǿ� using namespace�� ���� ���ٰ��� 
	//using namespace MySpace::InnerSpace;
	MySpace1::InnerSpace::my_function();
	

	//doSomething�� 2���� ��.
	//cout << doSomething(3,4) << endl; //3*4
	//cout << MySpace1::doSomething(3, 4) << endl; // 3+4

	return 0;
}