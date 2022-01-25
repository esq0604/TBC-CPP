#include<iostream>

int main()
{
	using namespace std;

	int x = 1;
	int y = -x; //단항 연산자는 붙여서 쓸것

	//나머지는 정수랑 실수 float와 다름.
	int x2 = 7;
	int y2 = 4;
	//둘다 정수일경우 정수로나옴. /연산자는 이항연산자.
	cout << x2 / y2 << endl;
	//둘중 하나만 실수일경우 결과가 실수로나옴. 
	//좋고,나쁘고가 아닌, 컴파일러가 그렇게 하더라~
	cout << float(x2) / y2 << endl;
	cout << x2 / float(y2) << endl;
	cout << float(x2) / float(y2) << endl;

	//음의정수로 나누눈 부분이 있을수도 있음.
	//cpp11부턴 정수결과 경우 소수점부분을 버림 2.5에서 0.5를버린다.
	cout << -5 / 2 << endl;

	//cpp11 에서는 나머지연산자의 경우 양수인지 음수인지는 왼쪽에있는
	//숫자에 따라 결정된다. 
	cout << -5 % 2 << endl;

	//=는 대입연산자 - x 메모리에 있는 정보 7을 
	//z변수가 가르키고 있는 메모리에 복사해 넣어라는 의미.
	int z = x;

	z += y; //z=z+y;
	


	return 0;
}