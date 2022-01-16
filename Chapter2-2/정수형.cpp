#include <iostream>
#include <cmath>
#include<limits>

int main()
{
	using namespace std;

	short	s = 1; // 2bite = 2 * 8bits = 16bits - 2의 16제곱 가짓수 숫자표현
	

	//singed는 하나 는 부호표현에 사용  0을표현해서 하나빼야함.
	//@표현할수있는 범위가 넘어가면 문제가 생길 수 있음
	cout << std::pow(2 ,sizeof(short) *8 -1) -1 << endl;
	cout << std::numeric_limits<short>::max() << endl;

	//정수형 표현에서는 min, lowest가 같음. 
	cout << std::numeric_limits<short>::min() << endl; 
	cout << std::numeric_limits<short>::lowest() << endl;

	s = 32767;
	s = s + 1; //32768?? (s +=1) 

	cout <<"max + 1\t" << s << endl;  //overflow  

	s = std::numeric_limits<short>::min();
	s = s - 1; //-32769?? 
	cout<< "min - 1\t" << s << endl; //overflow  

	unsigned int i = -1; //overflow 
	cout << i << endl;

	//정수끼리의 연산은 정수로 결과가 나옴 .
	//실수값은 형변환을 통해 (float)22/4 , 22/(float)4
	cout << 22 / 4 << endl;

	
	return 0;
}