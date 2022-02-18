#include<iostream>  
#include<cmath> //sin(), cos()
#include<vector>
using namespace std;

//&�� �����ϸ� ���۷����� �Ѿ���⶧���� �״�γ����ִ�.
//�������� ���޿����� ���Ӱ� ���Ǹ��ϰ� ���縦��.
//���������� ȣ�⿡���� ���� ��ü�� �ѱ�⶧���� ���簡 �Ͼ������.
void addOne(int& y)
{
	cout << y << " " << &y << endl;

	y = y + 1;
}

//���۷����� �ǵ帮�� �Ǹ� �ٲﰪ�� �Լ��� ȣ���Ѱ������� ��������ģ��.
//c,c++������ �Լ��� ���ϰ��� �ϳ��� �ټ�����
//�Լ��� ���ϰ��� ������ ����ϴ� ��찡 ������ call by reference��
//����ؼ� output�� �����°�ó�� ����Ҽ��ִ�.
//degress��� ���� �ȿ��� �ٲ��� ���� -> const�� �����ִ°͵� ���.
//���Ŀ� ���� ������ �ڵ��Ҷ�, ���� �ѹ����ǰ� �ȹٲ�͵���
//const�� �������� �Ǽ��� �����ִ°͵� ����.
void getSinCos(const double &degress, double& sin_out, double& cos_out)
{
	//�Լ��� ���̻��ȴٸ� static�� �ٿ��ָ� pi�� �Ź����ǰ� �Ǵ°��� �ƴ϶�
	//������ �ȴ� .
	static const double pi = 3.141592 ;
	const double radians = degress * pi / 180.0;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}



//reference���� ������ ����. 
//�޴��ʿ��� reference�� �޾ƾ��ϴµ� ���ͷ��̶� �ּҰ� ����.
//1.&�� ���¹��
//2.x�� ���� ���ο��� ��������� ���°�쿡�� const�� �ٿ��ټ�������.
//�Է����� ���� const ����Ÿ��& ������, ���ι޴°��� �Ϲ�����.

void foo(const int& x)
{
	cout << x << endl;
}

//(int*)& �� �ؼ��� �ϴ°��� ����.
//typedef�� �����͸� ���� �־�� �ٸ��Ծ����� �˼��ֱ⵵��.
typedef int* pint;
//void foo2(int*& ptr)
void foo2(pint& ptr)
{
	cout << ptr << " " << &ptr<<endl;
}

void printElement(int (&arr)[4])
{

}
void printElement2(const vector<int>& arr)
{

}
int main()
{
	int x = 5;
	cout << x << " " << &x << endl;

	addOne(x);

	cout << x << " " << &x << endl;


	//�Լ��� ����� �������µ� ���������� ȣ���� ����ϱ⵵ �Ѵ�.
	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);
	cout << sin << " " << cos << endl;


	foo(6);


	//�����Ϳ� ���� reference�� �������� �ִ�.
	int x2 = 5;
	int* ptr = &x2;

	cout << ptr << " " << &ptr << endl;
	foo2(ptr);


	//array�� �Ķ���ͷ� �����ϴ¹�� 
	int arr[]{ 1,2,3,4 };
	printElement(arr);

	//�����ڵ忡���� arr�� �Ķ���ͷ� �����Ҷ��� ����arr���� ����arr�� ������ ����. 
	//vector����� �Ķ���ͷ� ���� 
	vector<int> arr2{ 1,2,3,4 };
	return 0;
}