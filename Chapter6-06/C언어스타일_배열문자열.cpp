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
	
	//cin >> myString2;
	//띄어쓰기 적용하는법 .getline 빈칸이랑 null charater랑은 다른것.
	cin.getline(myString2, 255);
	

	//while문 이용 문자열 출력 
	int ix = 0;
	while (true)
	{
		if (myString2[ix] == '\0') break;
		cout << myString2[ix] << " " << (int)myString2[ix] << endl;
		++ix;
	}

	//첫글자가 A로 바뀜
	myString2[0] = 'A'; 
	
	//myString2[4] = '\0';

	//cout이 char[]형식으로 된 문자열을 출력할때는 
	//null charater가 나오기전까지 출력함. 
	cout << myString2 << endl;

	




	//전통적인 c스타일 코딩 -공부할땐 배열과 문자열을 이해하기에 공부과정에 중요
	char source[] = "Copy this!";
	char dest[50];

	//메모리침범이 해킹이될수있기에 막아주ㅡㄴ것
	strcpy_s(dest, 50,source);

	cout << source << endl;
	cout << dest << endl;

	//strcat() 문자열뒤에 붙여주는것
	//strcmp() 두문자열을 비교하는것. -같으면 0을 리턴함.
	//cout << strcat(dest, source);
	cout<<strcmp(source, dest);

	//이후 실전에선 	std::string을 많이쓰게된다.

	return 0;
}