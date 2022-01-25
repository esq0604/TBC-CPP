#include<iostream>
#include<cmath>
#include<iomanip>
int main()
{
	using namespace std;

	/*int x, y;
	cin >> x >> y;
	cout << "Yout Input values are : " << x << " " << y << endl;

	if (x == y)
	{
		cout << "equal" << endl;
	}
	if (x != y)
	{
		cout << "Not equal" << endl;
	}
	if (x > y)
		cout << "x is greater than y" << endl;
	if (x < y)
		cout << "x is less than y" << endl;
	if (x >= y)
		cout << "x is greater than y or equal to y " << endl;
	if (x <= y)
		cout << "x is less than or equal to y " << endl;*/

	//float , 부동소수점끼리 의 비교 같나 다르나 할때 주의사항이 많이생김
	double d1(100 - 99.99); //0.001
	double d2(10 - 9.99);	//0.001

	//찍어보니까 같음. 
	cout << d1 << endl;
	cout << d2 << endl;

	//출력값을 늘려서 다시 출력 -값이 다름을 확인
	cout << std::setprecision(16) << endl;
	cout << d1 << endl;
	cout << d2 << endl;
	//왜 같지 않나??
	if (d1 == d2)
		cout << "equal" << endl;
	else
	{
		cout << "Not equal" << endl;
		
		if (d1 > d2)  cout << "d1 > d2" << endl;
		else //if(d1<d2) because d1 != d2 
			cout << "d1 < d2" << endl;
	}

	//오차가 매우 적음을 알수있음.
	cout << std::abs(d1 - d2) << endl; 


	//오차를 정해놓고 수를 비교함
	const double epilson = 1e-16;
	if (std::abs(d1 - d2) < epilson)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal" << endl;

	cout << isnan(abs(d1 - d2)) << endl;
	cout << isinf(abs(d1 - d2)) << endl;
	return 0;
}