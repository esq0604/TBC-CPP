#include <iostream> //표준라이브러리 , 위치가 다른곳에있음.
#include "add.h"
using namespace std;

//코드가 길어지면 한파일에 여러함수가 있을때 보기가 힘들어짐 
// 비슷한 기능을 하는 함수들을 묶어서 하나의 파일에 넣거나 
//객체지향에서 클래스파일에 사용함. 

//방법1 함수를 선언해줌 

int main()
{
	cout << add(1, 2) << endl;

	return 0;
}