//#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	// 문장 띄우기 전에 오퍼레이터를 남겨놨다면  대부분 프로그래머들은 
	//줄바꿈을 했다고 눈치채고 다음줄로 넘어감. 줄바꿈 할때는 오퍼레이터를 남겨두고 하는것이 좋음.
	cout << " hellow,world " << "abcdef " <<
		"hellow name" << endl;

	//하드코딩 경우 탭키를 통해 줄을 맞춰줄 수 있음
	int my_v		= 1;
	int x			= 4;
	int num_apples	= 123;

	//주석의 경우 옆에다 쓰는 것보단 위에다 적어주는 것이 더 눈에 잘들어옴 .
	//this is important
	int x = 1 + 2; 

	//this is important , too
	int y = 3 + 4; 
}


int add(int x, int y) 
{
	return x + y; //indenting 빈칸 띄워놓는것. 스페이스 4번 =탭 1번
}