#include<iostream>

using namespace std;

//함수이름 가급적 자세히 
int multiplyTwoNumbers(int num_a, int num_b)
{
	int sum = num_a * num_b;
	return sum;
}
int main()
{
	//파라미터가 생성이됨
	//인수가 파라미터에 들어가 초기화가 됨.
	cout << multiplyTwoNumbers(1,2) << endl;
	cout << multiplyTwoNumbers(3, 4) << endl;
	cout << multiplyTwoNumbers(8, 13) << endl;

	return 0;
}