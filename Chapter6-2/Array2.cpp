#include<iostream>

using namespace std;

//students_scores�� ������ �迭�� �ƴ϶� ������(�ּҰ��� �����ϴº���)�̴�.
//�迭 ������ ���� �����ϴ� ���� �ƴ� 
//�迭�� ù��° �ּҰ��� �����ϴ°��̴�.
void doSomething(int students_scores[])
{
	//ù��° �ּҰ��� �����ϴ� ������ �����̱� ������ 
	//�� ��ü�� �ּҰ��� �����ϴ� �ٸ� ������. ���� 
	//�ٸ� ������ �ּҰ��� ���´�. 
	//ù��° �ּҸ� �����ϴ� ����(������)��, ù��° ���Ҹ� �����ϴ� �ּ�. 
	//�ΰ��� �����°�.
	cout << (int)&students_scores << endl;
	cout << (int)students_scores << endl;
	//students_scores �� ����Ű�� �ִ� �ּ��� ù��° �ּҰ� 
	//�����ͺ����� ����Ǿ� �ִ� ���� �����.
	cout << (int)&students_scores[0] << endl;
	cout << &students_scores[0] << endl;


	//������ ������ ����Ű�� ���� �ε�������.
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	//array�� �Ѿ�°��� �ƴ� �����ͷ� �Ѿ�Դ�.
	//4�� �Ȱ��� 4���� integer�� size�� �ƴ� �������� size��.
	//����� 86 -32��Ʈ , 32��Ʈ���� �����ͺ����� 4����Ʈ
	// 64����Ʈ���� �������ϸ� �����ͺ����� 8����Ʈ��.
	cout<<"size in dosomething" << sizeof(students_scores) << endl;
}

int main()
{
	const int num_studnets = 20;

	int students_scores[num_studnets] = { 1,2,3,4,5 };

	//16���� ���� ������ 10���� int�� ĳ����.
	// �迭�̸��� �ּҴ� ù��°�� �ּҸ� ������. 
	// �迭�� �ĺ�����ü�� �ּҰ� �ȴ�. &�����ڰ� ����ȴ�.
	//4����Ʈ�� ���̰� ���°��� �����ش�. -���̾��ִ�.
	cout << (int)students_scores << endl;
	cout << &students_scores << endl;
	cout << (int)&students_scores[0] << endl;
	cout << (int)&students_scores[1] << endl;
	cout << (int)&students_scores[2] << endl;
	cout << (int)&students_scores[3] << endl<<endl;

	cout<<"Size in main" << sizeof(students_scores) << endl;

	//�ĺ��� ��ü�� �ּұ� ������ ù��°������ �ּҰ��� �Ű������� ��.
	doSomething(students_scores);


}