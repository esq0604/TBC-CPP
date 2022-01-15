//헤더가드 
//표준 방법으로는 #ifndef , #define , #endif를 통해서 중복정의을 해소 해주지만 
// #pragma once를 통해 한번에 중복정의에 대한 오류를 해결해줌.
#pragma once
int add(int a, int b)
{
	return a + b;
}