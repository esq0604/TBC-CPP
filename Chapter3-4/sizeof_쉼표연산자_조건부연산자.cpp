#include<iostream>

int main()
{
	using namespace std;

	float a;

	//4바이트 .
	//sizeof는 함수가 아니라 연산자임 -표준에서 정의됨
	//내부에서 컴파일러가 구현할지는 다음의 문제
	//변수명일 경우에는 괄호가 없어도 작동을 함.
	//데이터 타입일 경우에는 괄호가 있어야함. 
	sizeof(float);
	sizeof a;

	//comma operator
	int x = 3;
	int y = 10;

	//앞에것을 계산하고 뒤도 계산 후 뒤를 값에 대입.
	//int z = (++x,++y); 나중에 포문에서 사용할수도 있다,
	//comma operator의 풀어쓴 형태 
	++x;
	++y;
	int z = y;

	cout << x << " " << y << " " << z << endl;

	//여기서 ,는 오퍼레이터가 아닌 구분기호임.
	int a2 = 1, b2 = 10; 
	int z2;

	//,가 우선순위가 대입보다 낮아서 
	// 대입을 먼저 실행함.  따라서 z2=a2가 됬고 ,b2는 버려짐.
	// 괄호를 써주는 것이 확싫하다.
	z2 = a2, b2;
	cout << z2 << endl;

	//결과값이 12이다. a2++ 실행후 a2+b2++실행할때, b2++은 이후 실행됨으로, 이때 a2=a2+1이 되었음.
	int z3 = (a2++, a2 + b2++);
	cout << z3 << endl;


	//conditional operator(arithmetic if) 삼항연산자가있다. 조건부연산자중 삼항연산자가 있다고 생각하면됨.  
	//조건에 따라서 ~~해라 
	//복잡한경우는 안쓰는게 좋음 . 읽기,디버깅이 불편해진다.
	bool onSale = true;

	//int price; -price가 const로 쓰고싶은 경우 삼항연산자가 유용하게 쓰임
	const int price = (onSale == true) ? 10 : 100;
	/*if (onSale)
		price = 10;
	else
		price = 100;
	이프문을 굳이 쓰고 싶다면 함수를 하나 쪼개서 사용해야함	
	getPrice(bool onSale)
	{
		if(onSale)
			return 10;
		else
			return 100;
	}
	const price = getPrice(onSale);
	*/
	cout << price << endl;



	int x2 = 5;

	//연산자 우선순위때문에 괄호를 씌워줘야함. 
	//같은타입끼리 사용하는것이 컨디셔널오퍼레이터를 사용하는데 좋음. 
	// 다른타입일 경우 권장하지않는ㄷ다.
	// <<연산자 순위가 삼항연산자 순위보다 높기 때문에. 괄호를 감싸주지 않으면
	// 삼항연산자 이전에 결과가 출력된다.
	cout << (x2 % 2 == 0);
	cout << ((x2 % 2 == 0) ? "even" : "odd");

	return 0;
}