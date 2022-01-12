#include<iostream> //cout , cin ,endl, ...
#include <cstdio> //printf

int main()
{
	using namespace std;
	
	//cout 는 std라는 namespace안에 정의되어있고 이를 사용하기 위해 ::을 넣어줌.
	int x = 1024;
	cout << "I love this lecture!\n"; //<< std::endl;
	cout << "x is" << x << std::endl;
	//\t 는 탭을 말함,\n은 뉴라인을 의미하고 endl인과 유사한기능을 하지만 아에 같은 기능은 아니다.
	cout << "abc" << "\t" << "def" << std::endl;
	cout << "ab" << "\t" << "cdef" << std::endl;

	cout << "\a";

	//입력을 받는다 - 입력받아서 저장할 데이터도 필요험 
	int y;
	cin >> y;
	cout << "your input is " << y << endl;
	return 0;

	//cout, cin - stream의 일부분임.
}