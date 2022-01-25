#include<iostream>
#include<bitset>

int main()
{
	using namespace std;

	//cout,cin에서는 부등호두개는 다른의미로 사용함 operator overloading
	//cout,cin에서 사용하는 << >>은 bitwise operator가 아니다. 
	// << left shift
	// >> right shift 
	// ~-not, &, |,^-xor 

	//비트레벨에서 signed 정수를 음수로 저장할때는 
	//부호표시에 사용, 보수를 사용 이러한이유로 복잡해져 unsigned를 사용함
	unsigned int a = 3;
	
	//a의 내부적으로 2진수로 바뀌어 어떻게 저장이되는지
	// 4비트만보겠다 4-템플릿
	cout << std::bitset<4>(a) << endl;  


	//Left shift operator 
	//b는 a를 왼쪽으로 한칸씩 옮긴것.
	// 시프트를 하나를 왼쪽으로 옮기는것 *2의 제곱수
	//만큼 10진수의 수가 증가함 .
	//pow를써서 일반적으로 하는것이 아니고
	//unsigned integer가 있을때 2의 제곱수를 곱하고싶은 경우에는 곱하는것보다
	//shift operator 쓰는것이 훨씬 빠르다.(계산량이 많은경우)
	unsigned int b = a << 1;
	cout << std::bitset<8>(b) <<" "<<b<< endl;
	cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
	cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
	cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;
	
	
	//Right shift operator 
	//2의 제곱수로 나눈값이다.
	//1024 /8을 하면 컴퓨터가 내부적으로 8이 아니라 다른숫자로도 나눌수있는 방식으로 계산을한다
	//비트와이저 오퍼레이터를쓰면 내부에 저장된방식으로 오른쪽으로 밀기때문에 속도가 훨씬빠르다.
	//단 일반적인 나누기에는 사용할수가 없다.
	unsigned int a2 = 1024;
	cout << std::bitset<16>(a2) << " " << (a2) << endl;
	
	cout << std::bitset<16>(a2 >> 1) << " " << (a2 >> 1) << endl;
	cout << std::bitset<16>(a2 >> 2) << " " << (a2 >> 2) << endl;
	cout << std::bitset<16>(a2 >> 3) << " " << (a2 >> 3) << endl;
	cout << std::bitset<16>(a2 >> 4) << " " << (a2 >> 4) << endl;
	
	//bitwise not
	unsigned int a3 = 1024;
	cout << std::bitset<16>(~a3) << " " << (~a2) << endl;
	
	//2진수 표현
	unsigned int a4 = 0b1100;
	unsigned int b4 = 0b0110;

	cout << a4 << " " << b4 << endl;
	cout << std::bitset<4>(a4 & b4) << endl; //bitwise AND
	cout << std::bitset<4>(a4 | b4) << endl;//bitwise OR
	cout << std::bitset<4>(a4 ^ b4) << endl;//bitwise XOR

	a &= b;//대입연산자와 결합된 형태로도 사용할수있다.

	return 0;
}