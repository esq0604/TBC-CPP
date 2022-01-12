#include<iostream>
/*
int main()
{
	//메모리공간의 크기는 정수형, 변수명은 x 
	//x라는 변수가 메모리 할당을 받을때 바로 123으로 복사해 넣음
	//초기화 initialization
	int x=1; //x도 객체임, x는숫자를 담을 수 있는 공간을 메모리에 차지함.
	x = x + 2;
	std::cout << x << std::endl;


	//릴리즈모드는 초기화없이 컴파일할때 0을 넣어줌(기본이 되는 int값)->  프로그램이 커질때 컴파일러가 다른경우 오류가 커질수도 있음.
	//l-value ,y는메모리의 주소를 가지고 있음 
	//r-value ,123 은 x에 잠깐 저장되는 숫자. 123자체에 관한주소는 가져오기 어려울것
	//int y;
	//y = 123; 대입 assignment 
		
	 
	//오른쪽 z 는 가지고 있는 값인 r벨류로써 복사가 된후 +2를 하여 r벨류로 작동함.  
	//z에 대입하여 메모리 공간이 복사됨.
	//z(123)도 초기화의 방법임.
	int z;
	int z = z + 2;
	
	

	return 0;

}
*/

int main()
{
	int x = 1; 
	x = x + 2;
	std::cout << x << std::endl;
	
	int y = x;
	std::cout << y << std::endl;

	//x+y는 l-value?? r-value ??
	//r벨류가 아닐까, 메모리의 주소를 직접적으로 갖지 않는 값이니까?.
	std::cout << x + y << std::endl;
	
	std::cout << x << std::endl;

	int z;
	std::cout << z << std::endl;

	return 0;
}