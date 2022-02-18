#include<iostream>
#include<array>
#include<tuple>
using namespace std;

int getValue(int x)
{
	int value = x * 2;
	return value;
}

int* returnbyAddress(int x)
{
	int value = x * 2;
	return &value;
}


int* allocateMemory(int size)
{
	return new int[size];
}

int& returnbyReference(int x)
{
	int value = x * 2;
	return value;
}

int& get(std::array<int, 100>& myarr, int idx)
{
	return myarr[idx];
}

struct s
{
	int a, b, c, d;
};
s getStruct()
{
	s mys{ 1,2,3,4 };

	return mys;
}

std::tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;
	return std::make_tuple(a, d);
}

int main()
{
	//6이라는 값이 복사해서 들어감.
	//간단하고 안전하지만, 복사 생성 등이 여러번일어나는것
	//속도가 조금 떨어진다. 간단한경우는 괜찮지만
	//많은량의 arr나, 클래스를 사용하면 곤란해짐..
	int value = getValue(3);



	//de -referencing을 통해 값으로 받음.
	//큰문제는 없지만 권장하지 않음 value가 영역을 벗어나면서 사라지는데
	//de-referencing을 하면 안전하진 않기 때문에.
	int value2 = *returnbyAddress(3);
	cout << value2 << endl;

	//주소를 직접받는방법 더 위험하다.
	//변수의 주소는 영역을 넘으면서 사라졌는데 메모리 주소만 알고있다??
	int* value3 = returnbyAddress(3);
	cout << value3 << endl;

	//return by address 사용하기도함.
	//arr를 만들때 new int[10]를 함수로 뽑아내고 싶을때사용
	//메모리를 생성하고, 메모리의 포인터를 함수의 리턴값으로 돌려받는 
	//디자인패턴같은것이 있음. factory pattern 같이 많이 사용되는 패턴에서
	//자주 사용된다.이렇게 간단한 경우는 사용하지 않음.
	//int* array = new int[10];
	int* array = allocateMemory(100);



	//return by reference 
	//레퍼런스를 반환해서 남아있는 상태에서, 레퍼런스가 가르키고 있는 변수의
	//실제값이 value3로 복사해 들어옴.
	int value4 = returnbyReference(5);
	cout << value4 << endl;

	//받는쪽에서도 reference로 받으면 
	//함수내부의 value는 영역이 지나면 사라짐 그런데 그의 레퍼런스를
	//받았다면 위험하다.
	int& value5 = returnbyReference(5);
	cout << value5 << endl;
	cout << value5 << endl;

	//return by reference가 더 편한경우
	//사용자정의데이터타입에 일부로 고치는데 함수가 고치게
	//만들수가있음. 
	//메모리가 명확하게 잡혀있는 상태에서 파라미터로 전달하고 
	//한 element의 reference를  return해줌 . 마치 변수이름인것처럼
	//값을 업데이트함. 이러한 패턴으로 사용하는 경우가 많다.
	//메모리는 실행되기전이나 후나 확실하게 잡혀있는 경우 레퍼런스만 보내줘 변수처럼 편리하게 작업함
	std::array<int, 100> myarr;
	myarr[30] = 10;

	get(myarr, 30) = 1024;
	cout << myarr[30] << endl;



	//여러개의 리턴을 받고싶을때. 정수3개를 리턴을받고싶다!. 
	//struct가 일반적인방법. directx라이브러리를 사용하게된다면
	//내부의 구조체가 많음, 함수호출할때도 구초체의 포인터로넣고
	//받을때도 구조체나 구조체의 포인터로 받는경우가 많음.
	s mys = getStruct();
	mys.a;


	//튜플을 사용하는방법 
	//get으로 받는것ㅇ ㅣ불편함. 
	std::tuple<int, double> my_tp = getTuple();
	cout<<std::get<0>(my_tp)<<endl ; // a
	cout<<std::get<1>(my_tp)<<endl; // d

	//cpp 17부터 사용가능
	//리턴할때 튜플로 보낸것을 a,d에서 각각 변수를 선언하면서 받는것.
	auto [a, d] = getTuple();
	cout << a << endl;
	cout << d << endl;
	return 0;
}