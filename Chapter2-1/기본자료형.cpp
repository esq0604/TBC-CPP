#include<iostream>
#include<bitset>

int main()
{
	using namespace std;
	//bool도 내부적으로 숫자로바꿔서 저장.
	bool bValue = false;  
	//내부적으로 숫자로 바꿔서 저장함.  
	char chValue = 'A'; 

	//f가 없다면 컴파일러가 double로 인식함 둘의 메모리의 차이가 있기때문에
	//더블이 더 정확한 숫자를 표현해주는데 더 작은메모리에 저장하니까 잘려나간 부분이 있을것임.
	float fValue = 3.141592f; 
	
	//파이썬은 기본적으로 더블로 표현이됨.  딥러닝 자체는 float로 돔 .
	double dValue = 3.141592;

	//데이터타입이 컴파일할때 결정이 된다 .
	auto aValue = 3.141592;
	
	//int j = 3.5; //복사해서 초기화
	//int i(4.5); //direct초기화
	//int k{ 5.5 };//uniform 초기화 
	char a = 'H';

	//변수의 사이즈 출력 - sizeof 바이트로 출력이된다.
	cout << (bValue ? 1 : 0) << endl;
	cout << chValue << (int)chValue << endl;
	cout << bValue << endl;
	cout << dValue << endl;
	cout << fValue << endl;


	cout << (uintptr_t)static_cast<void*>(&a) << endl;
	cout << (uintptr_t)static_cast<void*>(&i) << endl;

	return 0;
}