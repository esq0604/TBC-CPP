#include<iostream>
#include"MyConstants.h"

//#include"test.cpp" testcpp�� ���� ��Ŭ���õ��Ҽ������� �����������������.

using namespace std;

//int value = 123;
//static duration variable �������� 
//������̳� �׽�Ʈ�Ҷ����̾��δ��� �Լ��� ������̳� Ȯ���ϰ��������

//���������� ��𼭵� ���� �ӹٲ���ֱ⿡ ������.
// �ٸ� cpp���Ͽ����� �ٲٰ� �ȴٸ� ������ �ȵȴ�.
// �Լ������ �Ķ���ͷ� �����Ѵ�.  ���� �̸���global �� ǥ������
// �̸��� ���� Ȯ���ϰ� �������ش�. 
// ��ü������ ���� �ִ��� �ٿ������. 
//int a = 1;

//void doSomething()
//{
//	//���� a�� os�κ��� ���� �޸𸮰� static�̶�¶��̴�.
//	//���� ���������� ���?? -����°���.
//	//a��� ������ �����ϱ� ������ a=1�̶�� ������ �ݺ����� �ʴ´�.
//	//ó���� static ������ �����Ҷ��� �ʱ�ȭ�� �ݵ�� �־���Ѵ�.
//	//static a; �̷��Դ� �� �� ���ٴ°�.
//
//	static int a = 1;
//
//	++a;
//
//	cout << a << endl;
//}

//forward declaration-��򰡿� �����ϴϱ� ��ŷ�Ҷ� ���� �ٿ���~
//�ٸ�cpp���ϸ�ŷ��.
//�̶� ������ Ű���尡 �ִ°��̴�. -extern
//������ ��ó�� ������ 

extern void doSomthing();

//�����Ͻ� ������ ������ ��ŷ�Ҷ���
//��ŷ�Ҷ��� ã�ƺ��� ��ü�� ����޸𸮸� ���������ʾ� ��ŷ������ ��� .
extern int a;

int main()
{
	
	//cout << value << endl;

	//int value = 1;
	//
	////global scope operator �̿� 
	//cout << ::value << endl;
	////local value 
	//cout << value << endl;

	cout << a << endl;

	doSomthing();

	//test.cpp�� Constants::pi�� �ּҰ� �ٸ���
	//������ �������� ���� �޸𸮰� �����.
	cout<<"In main.cpp" << Constants::pi<<" "<< &Constants::pi << endl;

	return 0;
}