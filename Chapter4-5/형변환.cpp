#include<iostream>
#include<typeinfo>
#include<iomanip>

int main()
{
	using namespace std;

	//���ͷ��� �������Ÿ������ ���
	
	int a = 123;
	cout << typeid(a).name() << endl;


	//�Ͻ�������ȯ -�����Ϸ��� �˾Ƽ� 
	//�����Ϸ��� ����ȯ�� ���ٶ� ��Ʈ�������� �����͸� �����ϴ°� �ƴ϶�
	//��ȭ�� �����ִ°���.
	int a2 = 123.0; //�����Ϸ��� ������ 


	//����� ����ȯ 
	//�޸𸮻���� �۰Ի���ϴ� ������Ÿ���� ū������� ������ 
	//�޸����忡���� �� �������� �޸𸮸� ����ϴϱ� ���غ����̾���.
	//���е��� ���������� ����
	//numeric promotion
	float a3 = 1.0f;
	double d = a3;

	//numeric conversion
	//�޸� ����� ū������ ����������, Ÿ���� �ٲ��.
	int i = 30000;
	char c= i;

	//int�� 30000�̶� char type�� ǥ���� �� �ִ� ���� ū���� 127�� �����پ˾Ҵµ�
	//48�� ����  ����ġ���� ��쿡�� ������ ����� ���� 
	//����� �޶�����������. �����ؾ��Ѵ�.
	cout << static_cast<int>(c) << endl;

	double d2 = 3.123456789;
	float f = d2;


	//���� �ּ��� ���ؼ� ������ ������ ���е��� �����ؼ� �Ϻ��ϰԴ� �Ұ�����.
	cout << d2 << endl;
	cout << std::setprecision(12) << f << endl;

	float f2 = 3.14;
	int i2 = f;
	cout << i2 << endl;


	//numeric conversion
	//u-unsigned 5u -unsigned����. 
	//������� 4294967291 �̻��ϰԳ��� u�����ٸ� �߳��´�.. 
	//usigned���� ����Ѱ� int�� ����ȯ ���� �ʱ⶧���̴�.
	cout << 5u - 10<<endl;
	cout << 5 - 10u<<endl;
	cout << 5u - 10u << endl;

	//������� ����� ������ ���� ��������.
	//unsigned���� ����Ѱ� unsigned�� ������.
	//����ȯ�� �켱������ �ִ�. 
	//int , usigned int ,unsigned long, long long ,unsigend long long 
	//float , double, long double ���̴�.
	//int ���� unsigend int�� �켱������ ���� ������ int�� �ٲ��� �ʴ°��̴�.
	//���������� �����Ϸ��� �׷��� �۵��ϴ°���. 


	//�̻��·� �θ� �Ͻ��� ����ȯ���� i�� ����
	//����ϰ�, ��������� , c-style casting
	//int Ÿ���� �ν��Ͻ��� ���� ���� �֤�����
	int i3 = (int)4.0;

	//��ɻ� ���̴� ���ٰ�� .
	int i4 = static_cast<int>(4.0);
	return 0;
}