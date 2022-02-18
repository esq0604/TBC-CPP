#include<iostream>  
#include<cmath> //sin(), cos()
#include<vector>
using namespace std;

//&로 전달하면 레퍼런스가 넘어오기때문에 그대로남아있다.
//값에의한 전달에서는 새롭게 정의를하고 복사를함.
//참조에의한 호출에서는 변수 자체를 넘기기때문에 복사가 일어나지않음.
void addOne(int& y)
{
	cout << y << " " << &y << endl;

	y = y + 1;
}

//레퍼런스를 건드리게 되면 바뀐값이 함수를 호출한곳에서도 영향을미친다.
//c,c++에서는 함수가 리턴값이 하나만 줄수있음
//함수가 리턴값을 여러개 줘야하는 경우가 있을때 call by reference를
//사용해서 output이 나오는것처럼 사용할수있다.
//degress라는 값은 안에서 바뀌지 않음 -> const로 막아주는것도 방법.
//계산식에 들어가는 수식을 코딩할때, 값이 한번계산되고 안바뀔것들은
//const로 박제시켜 실수를 막아주는것도 좋다.
void getSinCos(const double &degress, double& sin_out, double& cos_out)
{
	//함수가 많이사용된다면 static을 붙여주면 pi가 매번정의가 되는것이 아니라
	//재사용이 된다 .
	static const double pi = 3.141592 ;
	const double radians = degress * pi / 180.0;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}



//reference에도 단점이 있음. 
//받는쪽에서 reference로 받아야하는데 리터럴이라 주소가 없다.
//1.&를 때는방법
//2.x의 값이 내부에서 변경될일이 없는경우에는 const를 붙여줄수도있음.
//입력으로 들어갈건 const 변수타입& 변수명, 으로받는것이 일반적임.

void foo(const int& x)
{
	cout << x << endl;
}

//(int*)& 로 해석을 하는것이 편함.
//typedef로 포인터를 만들어서 넣어보면 다를게없음을 알수있기도함.
typedef int* pint;
//void foo2(int*& ptr)
void foo2(pint& ptr)
{
	cout << ptr << " " << &ptr<<endl;
}

void printElement(int (&arr)[4])
{

}
void printElement2(const vector<int>& arr)
{

}
int main()
{
	int x = 5;
	cout << x << " " << &x << endl;

	addOne(x);

	cout << x << " " << &x << endl;


	//함수의 출력을 가져오는데 참조에의한 호출을 사용하기도 한다.
	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);
	cout << sin << " " << cos << endl;


	foo(6);


	//포인터에 대한 reference도 보낼수가 있다.
	int x2 = 5;
	int* ptr = &x2;

	cout << ptr << " " << &ptr << endl;
	foo2(ptr);


	//array를 파라미터로 전달하는방법 
	int arr[]{ 1,2,3,4 };
	printElement(arr);

	//실제코드에서는 arr를 파라미터로 전달할때는 정적arr보단 동적arr를 쓸일이 많음. 
	//vector사용해 파라미터로 전달 
	vector<int> arr2{ 1,2,3,4 };
	return 0;
}