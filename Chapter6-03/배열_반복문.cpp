#include<iostream>

using namespace std;

int main()
{
	//const int num_students = 5;
	int scores[] = { 84, 92, 76, 81, 56 };

	//array의 size를 구하는 방법 중 이러한방법도있다~
	//함수 파라미터로 넘어가면 주소가 넘어감. - 이러한방법을 통해 배열의 크기를 아는게  불가능하다.
	// 파라미터로 array를 줄땐 첫주소, element의 수도 같이줘야함.
	// 64비트 -8바이트, 32비트(84) -4바이트 
	const int num_students = sizeof(scores) / sizeof(int);

	int max_score = 0;
	int total_score = 0;
	int min_score = 101;
	//int min_score = numeric_limits<int>::max(); int에서 최대값 
	for (int i = 0; i < num_students; ++i)
	{
		total_score += scores[i];
		if (max_score < scores[i])
			max_score = scores[i];

		//삼항연산자로도 가능. 
		//max_score = (max_score < scores[i]) ? scores[i] : max_score;
		
		if (min_score > scores[i])
			min_score = scores[i];
	}

	double avg_score = static_cast<double>(total_score) / num_students;

	cout << max_score << endl;
	cout << min_score << endl;
}