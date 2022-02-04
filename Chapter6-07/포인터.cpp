#include<iostream>
#include<typeinfo>
using namespace std;


struct Something
{
	int a, b, c, d;
};

int main()
{
	int x = 5;
	cout << x << endl;

	//��޸��ּҿ� ����ִ��� Ȯ��
	cout << &x << endl; //& :address -of operator  16������ ���
	cout << (int)&x << endl;//10������ ��� 



				//de-reference operator (*)
	//reference -���������� ����Ű��,�����ϴ� �ǹ�
	// �����ʹ� reference�� �Ϻ���.
	//cpp������ pointer�� �ְ�, reference�� �����ִ�.
	//de-reference �� �����Ͱ� "���ʿ� ���� �� �����Ͱ� �־��" ���
	//���������� ����Ű�⸸ �ϴ°Ϳ� ���� 
	//�׷� �ű⿡ ��¥ �����ִ��� ���� �鿩�ٺ��� ��� �ǹ̸� ������
	//���������� �����ϰڴٴ� �ǹ��̴�.
	cout << *&x << endl; //�޸� �ּҸ� �������, �׸޸��ּҿ� ���� ����Ȯ��. 


	//������ ���� - �����͵� ������Ÿ����
	//*�� ���ʿ� ���δٸ�  typedef�� ���� ������ Ÿ���� �ϳ� �����Ҽ��ֱ���
	// ������ ������տ� * ���̴°��� �Ϲ���.
	//�����Ͱ� Ÿ���� �˰��־�� �ϴ� ������ de-referecing�Ҷ� float�� ��������, int�� ����������
	//�������ִ� �����̴�.
	//typedef int* print;
	int* ptr_x = &x, *ptr_y = &x;
	//print ptr_x = &x, ptr_y = &x;
	
	cout << ptr_x << endl;
	cout << *ptr_x << endl;

				//�ּҸ� �־� �����ͺ����� �������¾��°�.
	// ���� ��Ʊ⵵�ϰ�, ����� �������ʴ´�.
	// �ƿ��Ұ������� ����. ����� �����ϱ��Ѵ�~
	//int *ptr_x =00000021A8D3F954

				//typeinfo ����ؼ� Ÿ��Ȯ���غ�
	cout << typeid(ptr_x).name() << endl;


				//������ ��ü�� ������ �����̴�
	//�������ϴ� ������ ������� �ٸ���. int 4, double 8
	//array �� �����ͷ� �ٷ궧 ��ĭ�� 4,8,12,���� �˾ƾ� �Ҽ��ִ� ������ �ִ�.
	//�����ʹ� �⺻�����δ� �ּҰ��̰�, ���Ÿ�Կ� ���ؼ� ����� ����.
	x = 5;
	double d = 123.0;
	double *ptr_d;


	//���ǿ��� debug 32��Ʈ�� �̿��ϱ⶧���� ������ ����� 4����Ʈ �γ���.
	//64��Ʈ������ 8����Ʈ�� �ּҰ� �� ��� .
	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;

	//struct ������ int�� 4���ϱ� 4 * 4 16 
	//something struct ��ü�� 16������ �����ʹ� ������ 8����Ʈ��.
	Something ss;
	Something* ptr_s;
	cout << sizeof(Something) << endl;
	cout << sizeof(ptr_s) << endl;


				//������ �ɸ��� �κ�
	int* ptr_x2;
	double *ptr_d2;

	//�ּҰ��� �����ʰ�(�����Ⱚ) �� �޸𸮿� ���� �� ���������ϸ�
	//������ ���� .
	cout << *ptr_x << endl;
	return 0;
}