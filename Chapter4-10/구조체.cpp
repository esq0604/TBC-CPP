#include<iostream>
#include<string>
//enum�� ����ü �ȿ� �����غ���.
using namespace std;

struct Employee //2+(2)+4+8=14  //padding -2�� �߰��Ȱ�. 
{
	//����� ������� �����ش��� ����ȭ, ����ȭ�� �߿���.
	short	id;	//2bytes
	int		age;//4bytes
	double	wage;//8bytes

};

struct Person
{
	//������ ������ ��.
	//����ڰ� ���Ǹ����� ������ ����Ʈ���� ����.
	double height=3.0;
	float weight=200.0;
	int age=100;
	string name="iasda";

	//����� ���� �Լ��� ����ü �ȿ� �־� ����� �ٷ� �����ϵ�����.
	void print()
	{
		
		cout << height << " " << weight << " " << age << " " << name;
		cout << endl;
	}
};


//����ü �ȿ� ����ü ���� ����
struct Family
{
	Person me, mom, dad;
	/*Person me;
	Person mom;
	Person dad;*/
};

//�Լ��� ����ü�� �������ټ��� �ִ�.
Person getMe()
{
	Person me{ 2.0,100.0,20,"jack jack" };

	return me;
}

void printPerson(Person ps)
{
	//. operator�� member selectoroperator�����. ������ÿ�����.
	// �Լ��� ����ü �ȿ� ������ �����͸� �̿��ؼ� �ٷ� ����� �ϸ�ȵɱ�.
	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
	cout << endl;
}

int main()
{
	//���� ����� �����Ѵ��ϸ� height2 ,3 4 ~~~
	//�迭�� ����ص� ���������� �ٷ�°��� �Ȱ���.
	//��ҵ� �߿� �������� ����Ҽ����ִ�.
	/*double height;
	float weight;
	int age;
	string name;*/


	//�ʱ�ȭ�� uniform initailization�� ���ؼ� �ϸ� ������.
	Person me{2.0,100.0,20,"jack jack"};
	//printPerson(me);
	me.print();

	//�ʱ�ȭ�� ���ŷο�����
	/*me.age = 10;
	me.name = "JACK JACK";
	me.height = 1.5;
	me.weight = 50;*/
	

	//���Ե� �����ϴ�. �ܼ��� ��쿡�� ���ش�. 
	// ����ȿ� �Ǵٸ� ��������Ǻ����� �������� �ִµ� �װ�쿡
	// ���۷����Ͱ� �ǵ����� ���� ������� �۵��Ҽ��� �ִ�.
	//Person m2 =me;
	Person me2(me);
	me2.print();

	
	Person me_from_func = getMe();
	me_from_func.print();


	Employee emp1;

	//sizeof�� ����ü���� ����.
	cout << sizeof(Employee) << endl;
	return 0;
}