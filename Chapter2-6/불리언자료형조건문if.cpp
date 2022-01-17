#include<iostream>

//함수를 만들때 동사 형용사, 동사 명사 형식으로 많이만듬.
bool isEqual(int a, int b)
{
	bool result = (a == b);

	return result;
}

int main()
{
	using namespace std;

	//bool b1 = true; //0,1 copy initialization
	//bool b2(false); //direct initialization
	//bool b3{ true }; //uniform initialization
	//b3 = false;

	////true, false로 출력 
	//cout << std::boolalpha;
	//cout << b3 << endl;
	//
	////숫자로 출력 -기본값 
	//cout << std::noboolalpha;
	//cout << b1 << endl;

	////not operator
	//cout << !true << endl; 
	//cout << !b2 << endl;

	////&& operator
	//cout << (true && true) << endl;
	//return 0;

	////|| operator
	//cout << (true && false) << endl;

	////조건에 따라 실행이 될지 안될지 결정된다.
	////두줄이상 중괄호.
	//if (false)
	//{
	//	cout << "This is true" << endl;
	//	cout << "This is second line" << endl;
	//}
	//else
	//	cout << "This is false" << endl;


	//cout << isEqual(1, 1) << endl;
	//cout << isEqual(0, 3) << endl;


	////if문은 0이면 false , 나머지는 true
	//if (4)
	//{
	//	cout << "True" << endl;
	//}
	//else
	//	cout << "False" << endl<<endl;

	//bool b;

	////숫자를 넣어야함. true,false도 문자기때문에.
	//cout << std::boolalpha;
	//cin >> b;
	//cout << "Your input : " << b << endl;


	//정수를입력받고 홀수,짝수인지 확인
	int num;
	cin >> num;
	if (num % 2 == 0)
		cout << "짝" << endl;
	else
		cout << "홀" << endl;
	return 0;
}