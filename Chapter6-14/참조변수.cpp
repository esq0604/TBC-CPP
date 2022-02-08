#include<iostream>

using namespace std;

void doSomething(int n)
{
	n = 10;
	cout << "in dosomething " << n << endl;
}
//n�� ���� dosomething�� ���µ� n�� ���� ���ٲٰ� �ϰ������. const�� ���ƹ�����ȴ�.
void dosomthingref(const int& n)
{
	//n = 10;
	cout << "In dosomething" << n << endl;
	cout << &n << endl;
}

//refernce�� ����Ͽ� array�� ������ ������Ʈ�� ���� �ݵ�� �����Ѵ�. �ʿ��ϴٸ� const�� ���̸�ȴ�.
void printElements(int(&arr)[5])
{
	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

int main()
{
	//�޸𸮰��� 0���γִ°͵� ����/ 
	//�������� �ּ� ?? ��¥��ȭ��ȣ�� ����Ѵ��� 
	int value = 5;
	int* ptr = nullptr;
	ptr = &value;


				//���� -����,�Ǵٸ��̸�ó�� ����Ҽ��ִ�.
	//���������� ref�� value�ϰ� ���� �޸𸮸� ����ϴ°�ó�� �۵��Ѵ�.
	//���������� �ݵ�� �ʱ�ȭ�� �Ǿ����, ���ͷ��� ��������.
	int& ref = value;
	cout << ref << endl; 
	ref = 10; //*ptr=10;
	cout << value << " " << ref << endl;

	//�ּҸ� ���� ref�� value�� �ּҵ� ����.
	cout << ptr << endl;
	cout << &ptr << endl; 
	cout << &value << endl;
	cout << &ref << endl;



					//������ const
	const int y = 8;
	
	//ref���� y�� �ٲܼ��� �ֱ� ������ �̸� ���Ƶд�.
	//const�� �ٿ��ָ� ���� �����ִ�.
	const int& ref2 = y;

				//re assign�� �����Ѱ�? -������.
	int value1 = 5;
	int value2 = 10;
	int& ref1 = value1;
	cout << ref1 << endl;
	ref1 = value2;
	cout << ref1 << endl;


					//�Լ��� ���� ���� �ٲ� .
	int n = 5;
	cout << n << endl;
	doSomething(n); //���������δ� ���� ����Ǵ°��̱� ������. ��������������.
	cout << n << endl;


					//reference�� ���� �����ٲ�.
	//�����ͷ� �ѱ涧�� ������ ������ �ּҴ� �ٸ���.
	//���� ��ü�� �Ѿ�� ������ �ּҰ� ����.
	// �ּ� ������ ���縦 �� �ʿ䰡 ���°��̴�.
	dosomthingref(n);
	cout << &n << endl;
	cout << n << endl;


					//array�� �Լ��� �־��ٶ��� reference�� ����Ҽ��ִ�.
	const int length = 5;
	int arr[length] = { 1,2,3,4,5 };



					//struct�� reference
	Other ot;
	//ot�ȿ� st���� v1�� �����Ϸ��� �̷����߾����. ����������ϱ� ������.
	ot.st.v1 = 1.0;

	//reference�� ����ȴ�.-�ӵ��� ���������ʴ´�.
	int& v1 = ot.st.v1;
	v1 = 1;


					//reference�� pointer
	//��ɻ� ������. reference�� ���������� �����ͷ� �����Ǿ�����.
	int value2 = 5;
	int* const ptr2 = &value;
	int& ref2 = value2;

	return 0;
}