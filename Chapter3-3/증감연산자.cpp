#include<iostream>

int add(int a, int b)
{

	return a + b;
}

int main()
{
	using namespace std;

	int x = 6, y = 6;
	cout << x << " " << y << endl;

	//++x x++ 의미가 다름을 알아야함. 
	// 더한다음 스트림으로 보낸것. 
	cout << x++ << " " << y-- << endl;
	
	//스트림으로 보낸후 값을 더하는것.
	cout << ++x << " " << --y << endl;


	int x2 = 1;
	int y2 = 2;
	//3이 나와야 하는게 아닌가?? 4가나옴. -컴파일러에 따라 다를수가 있다함.
	//정의가 잘안된다고 한다 . do not use 
	//x2가 서로 영향을 줘서 문제가 생긴다.
	int v = add(x2, ++x2); //서로 
	
	//아에 변수가 다른경우는 잘나옴.
	//서로 영향을 주지 않아 문제가 없다.
	int v2 = add(x2, ++y2);
	
	cout << v << endl;
	cout << v2 << endl;


	int x3 = 1;
	//x3 = x3++; undefined 

	return 0;
}