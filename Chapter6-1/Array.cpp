#include<iostream>

using namespace std;

struct Rectangle
{
	int length;
	int width;
};

enum StudentName
{
	JACKJACK,	//=0
	DASH,		//=1
	VIOLET,		//=2
	NUM_STUDENTS, //=3
};
int main()
{
	//��� ��쿡�� �ʹ� Ŀ�� �Ϸķε� �޸𸮸� 
	//�޾ƿ��� ���Ҽ�	����. ������������� �޸𸮸� �ٻ���ϰ� �ִٸ�. ���
	//���߿� ������ ������ �ٷ�� �׷� ��쵵 �߻��Ѵ�.
	

	
	int one_student_score;
	int student_scores[5]; // 5���� int �޸𸮸�ŭ ������.
	int student_score[NUM_STUDENTS]; //enum���� ũ�������� ������.



	cout << sizeof(one_student_score) << endl;
	cout << sizeof(student_scores) << endl;

	one_student_score = 100;

	//enum���ε� ��밡��. ����̸��� enum���� ����������
	//���������� �ʴ´�
	student_scores[JACKJACK] = 100; //1st element
	student_scores[DASH] = 80; //2nd
	student_scores[VIOLET] = 90;//3rd
	student_scores[3] = 50;//4th
	student_scores[4] = 0;//5th
	
	cout << (student_scores[0] + student_scores[1]) / 2.0 << endl;
	
	
	//int�� 2���� ����� 8������ padding������ �׻� �׷����� �ʴ�.
	cout << sizeof(Rectangle) << endl;

	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl;

	rect_arr[0].length = 1;
	rect_arr[0].width = 2;


	//�������� 0���� �ʱ�ȭ��. 
	int my_array[5] = { 1,2, };
	//��Ȯ�ϰ� �������ָ� ������ �Ƚ��൵��.
	int my_arr[] = { 1,2,3,4,5 };
	//uniform initialzationó�� �ʱ�ȭ�Ҽ�����.
	int my_arr2[]{ 1,2,3,4,5 };

	

	//�̷��� �ȴٸ� ������ ���Ѿ� �迭�� ũ�⸦ �� �� �ִ�.
	//�̰� ��Ÿ�ӿ� �����Ǵ°��̴�.
	//�迭�� ũ��� ������Ÿ�ӿ� ����� ������ �Ǿ���Ѵ�.
	// ��ũ�θ� ����ؼ� #define NUM_STUDENTS ,�� ����ϰų� -C��Ÿ��
	//CPP���������� �����Ҵ��� �̿���.
	
	const int num_students = 5; //const - ������Ÿ�� ���� 5�� ���� �����̵�.
	
	//cin >> num_students;

	int students_cores2[num_students];
	return 0;
}