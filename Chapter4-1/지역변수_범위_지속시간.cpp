#include<iostream>

//같은영역안에 같은이름 -이름이 충돌이난다.
//함수의경우 선언과 정의를 분리할수있음.
//선언은 여러곳이 나와도 가능하지만 정의는 한곳만해야함 . 메모리를 차지하는 것은 한곳밖에없다.
//이름이 같은데 파라미터가 다른경우가 아닌. 이름 파라미터 반환형이 같은경우.

//영역이 다르다는것을 확실히 해주기 위해 네임스페이스를 사용할수있음.
namespace work1
{

	int a = 1;
	void doSomething()
	{
		a += 3;
		std::cout << a <<std::endl;
	}
}

namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 5;
		std::cout << a <<std::endl;
	}
}

int main()
{
	using namespace std;

	//메모리공간을 os 로부터 받아옮
	int apple = 5;
	cout << apple << endl;
	

	
	{
		//현대프로그래밍에서는 최소한의 지속시간 duration만 갖도록하려고함.
		//변수가 사용 할만한 곳에서만 최소한의 범위를 갖도록 쪼갬
		//전체 프로그램을 쪼개는것이 객체프로그래밍의 기본적인 철학
		int apple2 = 1;

		cout << apple2 << endl;
	}
	

	cout << apple << endl;

	//::는 영역, 범위 결정연산자라고 부른다.
	//scpoe resolution operator
	//결정한다보다 충돌시 결정해준다 ,해결해준다느낌인듯 
	work1::a;
	work1::doSomething();

	work2::a;
	work2::doSomething();
	
	
	return 0;
}


//중괄호가 끝나면 메모리가 반납되어 더이상볼수없다.
// apple = 3; 
