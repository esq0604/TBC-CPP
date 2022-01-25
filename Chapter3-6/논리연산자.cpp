#include<iostream>

int main()
{
	using namespace std;

	//logical Not !x 
	bool x = true;
	bool y = false;
	cout << !x << endl;

	//logical AND
	//cout << x && y << endl; -연산자 우선순위 오류
	cout << (x && y) << endl;

	bool hit = true;
	int health = 10;
	if (hit == true && health < 20)
	{
		cout << "die" << endl;
	}
	else
		health -= 20;


	//logical OR
	cout << (x || y) << endl;

	int x2 = 5;
	int y2 = 5;

	
	//논리연산자의 개입이 있을경우 간단하고 명료하게 표현하는것이 좋다 
	if (x2 != y2)
	{
		cout << "x does not equal y" << endl;
	}
	else
		cout << "x equal y" << endl;


	int v = 1;
	if (v == 0 || v == 1)
		cout << "v is 0 or 1 " << endl;


	//short circuit evaluation 실용적인면에서 중요함.
	int x3 = 1;
	int y3 = 2;

	if (x3 == 1 && y3++ == 2)
	{
		//do something
	}
	//x==1일경우 y값이 3  x==2일경우 y값이 2  why??
	//&&연산자의 경우 왼쪽먼저 계산을 할때 false이면 오른쪽을 수행하지
	//않기 때문이다 . 한쪽이 false면 어차피 false니까 바로 return false해버림
	cout << y3 << endl; 


	//De Morgan's Law
	bool x4 = true;
	bool y4 = false;

	!(x && y);
	!x || !y;

	!(x || y);
	!x && !y;

	//XOR -같으면 false , 다르면 true cpp에서 xor operator는 없음 
	//false false = false
	//false true =true
	//true false =true
	//true ture =false 
	//를 통해서 xor을 사용함, x,y가 불리언이야함
	//integer를 사용해야하는 경우면 static cast를 사용하여 bool값으로 바꿔 사용. 
	cout << std::boolalpha << endl;
	cout << (x4 != y4) << endl;

	//로지컬  and, or가 섞여있는경우
	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	//우선순위가 같으니까 왼쪽부터 하지않나?
	bool r1 = v1 || v2 && v3;	//true
	bool r2 = (v1 || v2) && v3;//false
	//&&가 ||보다 우선순위가 높다.-괄호를 치는것이 남이보기가 좋다.
	bool r3 = v1 || (v2 && v3);
	cout << r1 << endl;
	cout << r2 << endl;

	cout << ((true && true) || false) << endl;	//true 
	cout << ((false && false) || true )<< endl;	//true
	cout << ((14 > 13 || 2 > 1) && (9 > 1)) << endl;//true
	cout << (!(2314123 > 2 || 123123 > 2387)) << endl;//false


	return 0;
}