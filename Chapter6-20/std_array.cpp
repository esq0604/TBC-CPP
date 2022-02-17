#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

//일반변수도 파라미터로 집어넣으면 한번 복사가 된다.
//array도마찬가지, array가 크다면 시간이 많이걸린다 .
//이럴때 포인터를 쓰는방법도있지만 레퍼런스 &를 쓰는방법 도있음.
//변하지 않기를 원한다면 const를 붙이면된다.
void printLength(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;
}

int main()
{

	//array와 std::array이름이 겹침.
	//int array[] = { 1,2,3,4,5 };

	//숫자를 꼭 써줘야함.
	//함수 파라미터로 넘길때 훨씬 편하다.
	//class 사용자 정의데이터형, 으로 한번 더 감싸준 형태다. 
	array<int, 5> my_arr = { 1,21,3,40,5 };



	//cout << my_arr[10] << endl;

	//.at 클래스 내 멤버함수
	// my_arr[10]과의 차이 는 인덱스가 넘어가는지 체크를 한번하고 엑세스를 한다. 
	// at은 범의를 벗어난 인덱스에 접근하지 못하게 하는것이다. 
	//cout << my_arr.at(10) << endl;

	//엘리먼트 몇개인지 
	cout << my_arr.size() << endl;

	printLength(my_arr);


	//여기서도 레퍼런스를 이용한다면 복사되는 과정이 생략이됨. 빨라진다.
	for (auto &element : my_arr)
		cout << element << " ";
	cout << endl;


	std::sort(my_arr.begin(), my_arr.end());

	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;

	//역순정렬 r -reverse
	sort(my_arr.rbegin(), my_arr.rend());
	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;
}