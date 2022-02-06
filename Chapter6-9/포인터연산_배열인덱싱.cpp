#include<iostream>

using namespace std;

int main()
{
	double value = 7;
	double* ptr = &value;



	//unsigned int pointer type  -주소를 10진수로
	//포인터는 주소, 주소는 데이터타입과 관계없이 우편번호 같은것인데 
	//왜 데이터타입을 앞에 적어줄까. > de-referencing을 할때 어떤 타입으로 가져올지, 포인터 연산시 +1이 몇바이트인지 알기위해서
	//포인터도 데이터타입이 필요하다 .
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr - 1) << endl;
	cout << uintptr_t(ptr + 1) << endl;
	cout << uintptr_t(ptr + 2) << endl;

	
	long long arr[] = { 9,7,5,3,1 };
	long long* ptr2 = arr;

	for (int i = 0; i < 5; ++i)
	{
		//cout << arr[i] << " " << (uintptr_t) & arr[i] << endl;
		cout << *(ptr2 + i) << " "<<(uintptr_t)(ptr2+i) << endl;
	}


	char name[] = "jack jack";

	const int n_name = sizeof(name) / sizeof(char);
	
	char* ptr3 = name;
	char** ptr4=&ptr3;
	cout << n_name << endl;
	cout << sizeof(*ptr4) << endl;

	
	while (true)
	{
		
		cout << (*ptr3++);
		if (*ptr3 == '\0')
			break;
	}

	return 0;
}