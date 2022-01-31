#include<iostream>
#include<cmath> //sqrt()

//어셈블리어로가면 반복문도 goto이다. goto가 반복문의 원조격임.
//한번도 프로그램에서 goto문을 써본적없다하심.
int main()
{
	using namespace std;
	double x;
tryAgain ://label -	책갈피처럼, 자기가 이름을 정하면된다.
	cout << "Enter a non negative number" << endl;
	cin >> x;

	if (x < 0.0)
		goto tryAgain; //tryAgain으로 되돌아감 


	cout << sqrt(x) << endl;


//	goto skip; 변수를 사용하려면 선언을하고 그 값을 초기화하고, 사용을해야하는데
	//단계들을 건너뛰니 문제가 된다라는 오류.
	
	int x = 5;

skip:
	x += 3;

	return 0;

}