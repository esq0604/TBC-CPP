#include<iostream>


//�쿬�� �̸��� ���� . ���߿� ū���α׷��� ����� ���ذ���.
namespace a
{
	int my_var(10);
	int count(123123);
}

namespace b
{
	int my_var(20);
}

int main()
{
	//std::�� �ٿ����� ���� using�� ������.
	//using�̿� cout�� �������� ��������.
	using namespace std;

	//namespace�� �ְԵȴٸ� std::cout�� namespcae�� �ƴ��� �˷��ִ� ����������
	//using namespace std::cout
	//using std::cout;
	//using std::endl;
	cout << "Hello" << endl;
	

	//using namespace a;
	//using namespace b;

	////a,b �Ѵ� my_var�� �־� ��ȣ��.
	////cout<<my_var<<endl;
	////�������������ڸ� ���� �ذ� �Ҽ�������.
	//cout << a::my_var << endl;
	//cout << b::my_var << endl;



	//using namespace b;
	{
		using namespace a;
		//b�� ������ a�� ���� �Ѵ� ��������� ��ȣ���� ��Ÿ����.

		cout << my_var << endl;

		//a�� �ȿ� count�� ������ std�ȿ��� count�� �ֱ⶧���� ��ȣ������.
		//�Լ����ɰ�����, ���������� ���ִ��� �ؾ���.
		cout << a::count << endl;
	}
	{
		//�Ѵ� �������� �������༭ �ذ�����
		using namespace b;
		cout << my_var << endl;
	}

	//using namespace�� Ư�� ������� ������������ �־������
	//�� ����� ��Ŭ����� cpp������ ������ �ְԵ�.
	//���� ��ȣ���� �߻��Ҽ�������.
	//���� ����� using namespace�� ������ ����ϴ� ���� �����ʴ�.
	//�������̸� cpp���Ͽ� �ִ°��� ����.
}