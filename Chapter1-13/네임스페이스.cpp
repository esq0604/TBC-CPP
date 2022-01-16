#include <iostream>
//iostream안의 cout,cin,endl 등등은 std에 정의되어있음. 


//이름이 같은 경우 둘중의 하나의 이름을 바꾸는 방법도 있지만
//이름을 유지하고싶은 경우도 있음 -namespace 를 사용함
namespace MySpace1
{
	//네임스페이스 안에 네임스페이스를 하나 더 넣을 수 있음.
	namespace InnerSpace
	{
		int my_function()
		{
			return 0;
		}
	}
	int doSomething(int a, int b)
	{
		return a + b;
	}
}
namespace MySpace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}
using namespace std;

int main()
{
	//앞에 네임스페이스를 안쓰는 법이 있음.
	using namespace MySpace1;

	doSomething(3, 4);

	//이너스페이스 또안 using namespace를 통해 접근가능 
	//using namespace MySpace::InnerSpace;
	MySpace1::InnerSpace::my_function();
	

	//doSomething이 2개가 됨.
	//cout << doSomething(3,4) << endl; //3*4
	//cout << MySpace1::doSomething(3, 4) << endl; // 3+4

	return 0;
}