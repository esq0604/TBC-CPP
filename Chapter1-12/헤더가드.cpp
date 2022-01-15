#include <iostream>

//헤더가드가 없다면 동일한 함수가 중복정의 된것이므로 오류가 발생함.
#include "add.h"
#include "doaddwork.h"
using namespace std;



int main()
{
	doSomething();

	return 0;
}