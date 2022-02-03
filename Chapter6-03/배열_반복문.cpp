#include<iostream>

using namespace std;

int main()
{
	//const int num_students = 5;
	int scores[] = { 84, 92, 76, 81, 56 };

	//array�� size�� ���ϴ� ��� �� �̷��ѹ�����ִ�~
	//�Լ� �Ķ���ͷ� �Ѿ�� �ּҰ� �Ѿ. - �̷��ѹ���� ���� �迭�� ũ�⸦ �ƴ°�  �Ұ����ϴ�.
	// �Ķ���ͷ� array�� �ٶ� ù�ּ�, element�� ���� ���������.
	// 64��Ʈ -8����Ʈ, 32��Ʈ(84) -4����Ʈ 
	const int num_students = sizeof(scores) / sizeof(int);

	int max_score = 0;
	int total_score = 0;
	int min_score = 101;
	//int min_score = numeric_limits<int>::max(); int���� �ִ밪 
	for (int i = 0; i < num_students; ++i)
	{
		total_score += scores[i];
		if (max_score < scores[i])
			max_score = scores[i];

		//���׿����ڷε� ����. 
		//max_score = (max_score < scores[i]) ? scores[i] : max_score;
		
		if (min_score > scores[i])
			min_score = scores[i];
	}

	double avg_score = static_cast<double>(total_score) / num_students;

	cout << max_score << endl;
	cout << min_score << endl;
}