#include<iostream>
#include<cstdlib>

int main()
{
	std::cout << "I love you" << std::endl;

	//return 0;
	
	//return은 반환형을 맞춰야 종료가 가능하지만
	//exit은  코드의 어디에 있던지 정수 하나만 넣어주면 
	//종료를 시킬수가 있다. 무조건 여기서 끝내. 라는 의미가 강함.
	//디버깅할때 exit를 많이쓰게 될것이다.
	//결과가 너무 많이나올때 여기까지만보고 상황을판단하고싶다~ 할때
	// 코드를 분석하기위해 많이 사용된다.
	
	exit(0); //cstdlib라이브러리를 include해야함.
	
			 
			 //... 긴급하게 종료되는 이유를 적거나함.

	std::cout << "I love you ,too " << std::endl;

	return 0;
}