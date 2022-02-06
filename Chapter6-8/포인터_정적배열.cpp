#include<iostream>

using namespace std;

struct MyStruct
{
	int array[5]={9, 7, 5, 3, 1};
};

//void printArray(int array[])
void printArray(int *array)
{
	cout << sizeof(array) << endl; //8 -pointer 
	cout << *array << endl; 

	*array = 100; //de-referencing 한 값을 100으로 바꾼것.
}

void doSomething(MyStruct ms)
{
	cout << sizeof(ms.array) << endl;
}

//ms의 포인터를 넣어주어도 똑같이 유지가 된다
//array가  struct나 class안에 들어있을 경우 포인터로 강제변환이 일어나지 않는다.
void doSomething2(MyStruct *ms)
{
	cout << sizeof((*ms).array) << endl;
}


int main()
{

	int array[5] = { 9,7,5,3,1 };

	////array는 배열이 아니라 포인터다.
	////첫번째 바이트의 주소를 담고있다.
	//cout << array << endl;
	//cout << &array[0] << endl;

	////de-referencing -포인터가 가르키는곳을 접근.
	//cout << *array << endl;

	//char name[] = "jackjack";
	//cout << *name << endl;

	////ptr이 int의포인터임을 알려주는것. de-reference와 다르다.
	////ptr자체의 주소는 다르다. 주소를 포함하고있는 변수기 때문에.
	//int *ptr = array;
	//cout << &ptr << endl;
	//cout << ptr << endl;
	//cout << *ptr << endl;




	
					//포인터와 fixed array(정적배열) 이 완벽하게 똑같은가 ??  문법상 차이가 조금있다.
	//원래는 포인터인데 사용자가 정적array를쓸때 편의성 기능이있음. 나중에는 동적할당된 포인터를 더 사용함. 
	//정적배열이 어떻게 차이가나는지 보여줌.


	//둘의 사이즈가 다르다 .20 ,8(4) 포인터 변수 자체의 사이즈가 8바이트이다 (32비트에선 4바이트 ) 
	cout << sizeof(array) << endl; //int 5개 , 20
	int* ptr = array;
	cout << sizeof(ptr) << endl; // 8 -pointer 

	//파라미터로 포인터가 넘어갈때의 문제점
	printArray(array);


	//함수밖에서도 값이 변함 -de-referencing을 했기때문에.
	//c에서는 함수밖에서도 값이 바뀌게 하기위해 파라미터를 포인터로 많이넣어줌
	//cpp에서 이런용도는 reference(참조)를 더 많이쓴다.
	cout << array[0] <<  " " << *array << endl;




					//포인터 연산 
	cout << *ptr << " " << *(ptr + 1) << endl;
	
	
			//구조체 안에 array를 넣고 구조체를 파라미터로 받는것.
	MyStruct ms;
	cout << ms.array[0] << endl;
	//array 자체의 데이터사이즈가 나온다.
	cout << sizeof(ms.array) << endl;
	doSomething(ms);



	doSomething2(&ms);
	return 0;
	
}