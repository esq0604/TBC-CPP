#include<iostream>
//#include<cstdint>  iostream에 포함되어있음.

int main()
{
	using namespace std;

	std::int16_t i(5); // 16비트 -2바이트 -short
	std::int8_t myint = 65; //8비트 -1바이트 -char 

	cout << myint << endl;

	std::int_fast8_t fi(5); //int 중 8비트,1바이트중에 가장 빠른 데이터타입.
	std::int_least64_t fl(5); //적어도 8바이트 갖는 데이터타입 
	
	return 0;
}