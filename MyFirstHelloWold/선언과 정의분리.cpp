#include<iostream>

using namespace std;

//오른쪽 클릭 -정의로 이동가능함.
// peek definition을 통해 정의를 확인이 가능함 - 다른파일에 있을때도 사용가능. 

int add(int a, int b); //forward declr 전방선언 
int multiply(int a, int b);
int subtract(int a, int b);

//비쥬얼스튜디오를 이용하면 파일을 쪼개서 가능.


int main()
{
	cout << add(1, 2) << endl;

	return 0;
}

//definition 정의
int add(int a, int b)
{
	return a + b;
}

int multiply(int a, int b)
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}


