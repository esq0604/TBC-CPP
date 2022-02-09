#include<iostream>

using namespace std;

struct Person
{
	int age;
	double weight;
};

int main()
{
	Person person;

				//����ü�� �����ϴ� �⺻���� ���
	// . == member selection operator 
	person.age = 5;
	person.weight = 30;

				//reference��� �Ͽ� ����ü�� ���� 
	Person& ref = person;
	ref.age = 15;

				//pointer�� ����Ͽ� ����ü�� ����
	//.���� ->
	Person* ptr = &person;
	ptr->age = 30;
	//de-referencing operator�� ���̾����ִ�. (*ptr) ==reference
	// (*ptr).age = 20; �� �Ⱦ��� ����̴�. 

	//refence������ *ptr - de-reference ���� ���� �ʱ�ȭ�� �Ҽ��ִ�.
	Person& ref2 = *ptr;
	ref2.age = 45;
	cout << &ref2 << endl;
	cout << &person << endl;

	return 0;
}