#include<iostream>

using namespace std;

struct Person
{
	int age;
	double weight;
};

int main()
{
	Person person;

				//구조체에 접근하는 기본적인 방법
	// . == member selection operator 
	person.age = 5;
	person.weight = 30;

				//reference사용 하여 구조체에 접근 
	Person& ref = person;
	ref.age = 15;

				//pointer를 사용하여 구조체에 접근
	//.말고 ->
	Person* ptr = &person;
	ptr->age = 30;
	//de-referencing operator도 같이쓸수있다. (*ptr) ==reference
	// (*ptr).age = 20; 잘 안쓰는 방법이다. 

	//refence변수에 *ptr - de-reference 값을 통해 초기화를 할수있다.
	Person& ref2 = *ptr;
	ref2.age = 45;
	cout << &ref2 << endl;
	cout << &person << endl;

	return 0;
}