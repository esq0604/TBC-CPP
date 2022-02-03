#include<iostream>

using namespace std;

int main()
{
	//끝 -null, 0 -아스키 코드로 찍어보면 알 수 있음.
	char myString[] = "string";

	for (int i = 0; i < 7; ++i)
	{
		cout <<(int)myString[i] << endl;
	}
	cout << endl;

	//글자는 6글자이지만 arr의 size는 7개. null charater포함.!
	cout << sizeof(myString) / sizeof(myString[0]) << endl;

	char myString2[255];
	
	cin >> myString2;

	//첫글자가 A로 바뀜
	myString2[0] = 'A'; 
	
	myString2[4] = '\0';
	cout << myString2 << endl;

	return 0;
}