#include<iostream>

using namespace std;

struct MyStruct
{
	int array[5]={9, 7, 5, 3, 1};
};

//void printArray(int array[])
void printArray(int *array)
{
	cout << sizeof(array) << endl; //8 -pointer 
	cout << *array << endl; 

	*array = 100; //de-referencing �� ���� 100���� �ٲ۰�.
}

void doSomething(MyStruct ms)
{
	cout << sizeof(ms.array) << endl;
}

//ms�� �����͸� �־��־ �Ȱ��� ������ �ȴ�
//array��  struct�� class�ȿ� ������� ��� �����ͷ� ������ȯ�� �Ͼ�� �ʴ´�.
void doSomething2(MyStruct *ms)
{
	cout << sizeof((*ms).array) << endl;
}


int main()
{

	int array[5] = { 9,7,5,3,1 };

	////array�� �迭�� �ƴ϶� �����ʹ�.
	////ù��° ����Ʈ�� �ּҸ� ����ִ�.
	//cout << array << endl;
	//cout << &array[0] << endl;

	////de-referencing -�����Ͱ� ����Ű�°��� ����.
	//cout << *array << endl;

	//char name[] = "jackjack";
	//cout << *name << endl;

	////ptr�� int������������ �˷��ִ°�. de-reference�� �ٸ���.
	////ptr��ü�� �ּҴ� �ٸ���. �ּҸ� �����ϰ��ִ� ������ ������.
	//int *ptr = array;
	//cout << &ptr << endl;
	//cout << ptr << endl;
	//cout << *ptr << endl;




	
					//�����Ϳ� fixed array(�����迭) �� �Ϻ��ϰ� �Ȱ����� ??  ������ ���̰� �����ִ�.
	//������ �������ε� ����ڰ� ����array������ ���Ǽ� ���������. ���߿��� �����Ҵ�� �����͸� �� �����. 
	//�����迭�� ��� ���̰������� ������.


	//���� ����� �ٸ��� .20 ,8(4) ������ ���� ��ü�� ����� 8����Ʈ�̴� (32��Ʈ���� 4����Ʈ ) 
	cout << sizeof(array) << endl; //int 5�� , 20
	int* ptr = array;
	cout << sizeof(ptr) << endl; // 8 -pointer 

	//�Ķ���ͷ� �����Ͱ� �Ѿ���� ������
	printArray(array);


	//�Լ��ۿ����� ���� ���� -de-referencing�� �߱⶧����.
	//c������ �Լ��ۿ����� ���� �ٲ�� �ϱ����� �Ķ���͸� �����ͷ� ���̳־���
	//cpp���� �̷��뵵�� reference(����)�� �� ���̾���.
	cout << array[0] <<  " " << *array << endl;




					//������ ���� 
	cout << *ptr << " " << *(ptr + 1) << endl;
	
	
			//����ü �ȿ� array�� �ְ� ����ü�� �Ķ���ͷ� �޴°�.
	MyStruct ms;
	cout << ms.array[0] << endl;
	//array ��ü�� �����ͻ���� ���´�.
	cout << sizeof(ms.array) << endl;
	doSomething(ms);



	doSomething2(&ms);
	return 0;
	
}