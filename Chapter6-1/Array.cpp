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
	//어떠한 경우에는 너무 커서 일렬로된 메모리를 
	//받아오지 못할수	있음. 여기저기흩어진 메모리를 다사용하고 있다면. 등등
	//나중에 빅데이터 같은걸 다루면 그럴 경우도 발생한다.
	

	
	int one_student_score;
	int student_scores[5]; // 5개의 int 메모리만큼 가져옴.
	int student_score[NUM_STUDENTS]; //enum으로 크기지정도 가능함.



	cout << sizeof(one_student_score) << endl;
	cout << sizeof(student_scores) << endl;

	one_student_score = 100;

	//enum으로도 사용가능. 사람이름을 enum으로 가능하지만
	//권장하지는 않는다
	student_scores[JACKJACK] = 100; //1st element
	student_scores[DASH] = 80; //2nd
	student_scores[VIOLET] = 90;//3rd
	student_scores[3] = 50;//4th
	student_scores[4] = 0;//5th
	
	cout << (student_scores[0] + student_scores[1]) / 2.0 << endl;
	
	
	//int가 2개라 사이즈가 8이지만 padding때문에 항상 그렇지는 않다.
	cout << sizeof(Rectangle) << endl;

	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl;

	rect_arr[0].length = 1;
	rect_arr[0].width = 2;


	//나머지는 0으로 초기화됨. 
	int my_array[5] = { 1,2, };
	//명확하게 지정해주면 개수를 안써줘도됨.
	int my_arr[] = { 1,2,3,4,5 };
	//uniform initialzation처럼 초기화할수있음.
	int my_arr2[]{ 1,2,3,4,5 };

	

	//이렇게 된다면 실행을 시켜야 배열의 크기를 알 수 있다.
	//이건 런타임에 결정되는것이다.
	//배열의 크기는 컴파일타임에 사이즈가 결정이 되어야한다.
	// 매크로를 사용해서 #define NUM_STUDENTS ,을 사용하거나 -C스타일
	//CPP관점에서는 동적할당을 이용함.
	
	const int num_students = 5; //const - 컴파일타임 전에 5가 들어감이 결정이됨.
	
	//cin >> num_students;

	int students_cores2[num_students];
	return 0;
}