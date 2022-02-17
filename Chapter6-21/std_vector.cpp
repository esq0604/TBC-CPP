#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//std::array<int,5> array
	//동적할당을 하기때문에 안적어도 그만이다.
	//여러가지 초기화 방법들 
	vector<int> array;

	vector<int> array2 = { 1,2,3,4,5 };

	cout << array2.size() << endl;

	vector<int> array3 = { 1,2,3, };
	cout << array3.size() << endl;

	//uniform initialization
	vector<int> array4 { 1,2,3, };
	cout << array4.size() << endl;


	//사이즈를 필요할때마다 바꾼다. 
	vector<int> arr = { 1,2,3,4,5 };
	for (auto& itr : arr)
		cout << itr << " ";
	cout << endl;

	//array에 썻던것과 동일하게 사용가능. 
	//정적배열과 동적배열의 문제차이니까? 
	cout << arr[1] << endl;
	cout << arr.at(1) << endl;
	cout << arr.size() << endl;
	//벡터의장점은 메모리를 알아서 지워준다.
	//new연산자를 사용해 동적배열을 만들면 밑에 delete이 있어야함.
	//vector는 다쓰고나면 블럭밖으로 나가거나 리턴해 나가거나 할때
	//자동으로 사라지며 메모리가 leek대지않음, 누수가 일어나지않는다.
	//자기의 길이를 알아서 기억해 파라미터로 보내면 길이를 스스로 알고있다.

	//resize도 가능하다.
	arr.resize(10);
	for (auto& itr : arr)
		cout << itr << " ";
	cout << endl;


}