#include<iostream>
#include<typeinfo>
using namespace std;


struct Something
{
	int a, b, c, d;
};

int main()
{
	int x = 5;
	cout << x << endl;

	//어떤메모리주소에 담고있는지 확인
	cout << &x << endl; //& :address -of operator  16진수로 출력
	cout << (int)&x << endl;//10진수로 출력 



				//de-reference operator (*)
	//reference -간접적으로 가르키는,참고하는 의미
	// 포인터는 reference의 일부임.
	//cpp에서는 pointer가 있고, reference가 따로있다.
	//de-reference 는 포인터가 "저쪽에 가면 이 데이터가 있어요" 라고
	//간접적으로 가르키기만 하는것에 대해 
	//그럼 거기에 진짜 뭐가있는지 내가 들여다볼께 라는 의미를 갖으며
	//직접적으로 접근하겠다는 의미이다.
	cout << *&x << endl; //메모리 주소를 갖고오고, 그메모리주소에 가서 값을확인. 


	//포인터 선언 - 포인터도 데이터타입임
	//*을 왼쪽에 붙인다면  typedef를 통해 포인터 타입을 하나 정의할수있긴함
	// 하지만 변수명앞에 * 붙이는것이 일반적.
	//포인터가 타입을 알고있어야 하는 이유는 de-referecing할때 float로 가져올지, int로 가져올지를
	//결정해주는 증거이다.
	//typedef int* print;
	int* ptr_x = &x, *ptr_y = &x;
	//print ptr_x = &x, ptr_y = &x;
	
	cout << ptr_x << endl;
	cout << *ptr_x << endl;

				//주소를 넣어 포인터변수에 넣을수는없는가.
	// 쓰기 어렵기도하고, 허용을 해주지않는다.
	// 아에불가능하진 않음. 방법이 존재하긴한다~
	//int *ptr_x =00000021A8D3F954

				//typeinfo 사용해서 타입확인해봄
	cout << typeid(ptr_x).name() << endl;


				//포인터 자체의 사이즌 고정이다
	//포인팅하는 데이터 사이즈는 다르다. int 4, double 8
	//array 를 포인터로 다룰때 한칸이 4,8,12,인지 알아야 할수있는 연산이 있다.
	//포인터는 기본적으로는 주소값이고, 모든타입에 대해서 사이즈가 같다.
	x = 5;
	double d = 123.0;
	double *ptr_d;


	//강의에선 debug 32비트를 이용하기때문에 포인터 사이즈가 4바이트 로나옴.
	//64비트에서는 8바이트로 주소가 더 길다 .
	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;

	//struct 포인터 int가 4개니까 4 * 4 16 
	//something struct 자체는 16이지만 포인터는 여전히 8바이트다.
	Something ss;
	Something* ptr_s;
	cout << sizeof(Something) << endl;
	cout << sizeof(ptr_s) << endl;


				//문제가 될만한 부분
	int* ptr_x2;
	double *ptr_d2;

	//주소값을 갖지않고(쓰레기값) 그 메모리에 가서 뭘 꺼내오라하면
	//오류가 난다 .
	cout << *ptr_x << endl;
	return 0;
}