#include<iostream>


//우연히 이름이 같음 . 나중에 큰프로그램을 만듦면 이해가됨.
namespace a
{
	int my_var(10);
	int count(123123);
}

namespace b
{
	int my_var(20);
}

int main()
{
	//std::를 줄여쓰기 위해 using을 썻었음.
	//using이외 cout만 가져오는 법도있음.
	using namespace std;

	//namespace를 넣게된다면 std::cout은 namespcae가 아님을 알려주는 오류가생김
	//using namespace std::cout
	//using std::cout;
	//using std::endl;
	cout << "Hello" << endl;
	

	//using namespace a;
	//using namespace b;

	////a,b 둘다 my_var가 있어 모호함.
	////cout<<my_var<<endl;
	////영역지정지정자를 통해 해결 할수도있음.
	//cout << a::my_var << endl;
	//cout << b::my_var << endl;



	//using namespace b;
	{
		using namespace a;
		//b의 범위와 a의 범위 둘다 적용됨으로 모호함이 나타난다.

		cout << my_var << endl;

		//a의 안에 count를 썻지만 std안에도 count가 있기때문에 모호해진다.
		//함수를쪼개던지, 영억지정을 해주던지 해야함.
		cout << a::count << endl;
	}
	{
		//둘다 스코프를 지정해줘서 해결해줌
		using namespace b;
		cout << my_var << endl;
	}

	//using namespace를 특정 헤더에서 전역범위에다 넣어버리면
	//그 헤더를 인클루드한 cpp파일은 영향을 주게됨.
	//많은 모호성이 발생할수도있음.
	//따라서 헤더에 using namespace를 전역에 사용하는 것은 좋지않다.
	//가급적이면 cpp파일에 넣는것이 좋다.
}