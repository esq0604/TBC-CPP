#include<iostream>
#include<string>
//enum을 구조체 안에 정의해보기.
using namespace std;

struct Employee //2+(2)+4+8=14  //padding -2가 추가된것. 
{
	//사이즈를 순서대로 맞춰준느게 최적화, 가속화에 중요함.
	short	id;	//2bytes
	int		age;//4bytes
	double	wage;//8bytes

};

struct Person
{
	//각각을 멤버라고 함.
	//사용자가 정의를하지 않으면 디폴트값이 들어간다.
	double height=3.0;
	float weight=200.0;
	int age=100;
	string name="iasda";

	//출력을 위한 함수를 구조체 안에 넣어 멤버에 바로 접근하도록함.
	void print()
	{
		
		cout << height << " " << weight << " " << age << " " << name;
		cout << endl;
	}
};


//구조체 안에 구조체 정의 가능
struct Family
{
	Person me, mom, dad;
	/*Person me;
	Person mom;
	Person dad;*/
};

//함수가 구조체를 리턴해줄수도 있다.
Person getMe()
{
	Person me{ 2.0,100.0,20,"jack jack" };

	return me;
}

void printPerson(Person ps)
{
	//. operator는 member selectoroperator라고도함. 멤버선택연산자.
	// 함수를 구조체 안에 넣으면 데이터를 이용해서 바로 출력을 하면안될까.
	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
	cout << endl;
}

int main()
{
	//여러 사람을 저장한다하면 height2 ,3 4 ~~~
	//배열을 사용해도 여러가지를 다루는것은 똑같다.
	//요소들 중에 열거형을 사용할수도있다.
	/*double height;
	float weight;
	int age;
	string name;*/


	//초기화를 uniform initailization을 통해서 하면 편해짐.
	Person me{2.0,100.0,20,"jack jack"};
	//printPerson(me);
	me.print();

	//초기화가 번거로워진다
	/*me.age = 10;
	me.name = "JACK JACK";
	me.height = 1.5;
	me.weight = 50;*/
	

	//대입도 가능하다. 단순한 경우에만 해준다. 
	// 멤버안에 또다른 사용자정의변수가 있을수도 있는데 그경우에
	// 오퍼레이터가 의도하지 않은 방식으로 작동할수도 있다.
	//Person m2 =me;
	Person me2(me);
	me2.print();

	
	Person me_from_func = getMe();
	me_from_func.print();


	Employee emp1;

	//sizeof를 구조체에도 가능.
	cout << sizeof(Employee) << endl;
	return 0;
}