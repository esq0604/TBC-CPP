#include<iostream>
#include<iomanip> //입출력을 maip가 조절한다.
#include<limits>
#include<cmath> //std::isnan사용 .

int main()
{
	using namespace std;

	//f를 안붙이면 리터럴은 더블인데 c/cpp에선 float로 바꿔줌 메모리가 2배가 차이나기때문에 완전히 다르다.
	float f(3.141592f); //3.14는 31.4* 0.1로 표현가능.
	double d(3.141592);
	long double ld(3.141592);

	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;  //long double과 사이즈가 같음. 
	cout << sizeof(ld) << endl << endl;


	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl << endl;

	//min이 양수임 min은 표현할수 있는 가장 작은수 중 절대값을 의미함 lowest를 보면댐 .
	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl<<endl;

	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl << endl;

	//double , long double의 차이가 없음을 보여준다. 시스템마다 다를 수 있음.
	
	//3.14 =31.4*0.1 표기법을 알아둬야한다 .
	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;//31.4* 10^-1 
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl<<endl;

	// 출력숫자를 늘려줌. iomanip
	cout << std::setprecision(16) << endl;
	//계속나눠야하지만 숫자는 끝까지안보임.iomanip
	cout << 1.0 / 3.0 << endl<<endl;
	
	 // 10 significant digits 유효숫자 10개.
	float z(123456789.0f);
	cout << std::setprecision(9);
	//결과값에 8이없음. 내부적으론 2진수로 출력하기때문에 정밀도가 떨어질수있다.
	cout << z << endl<<endl; 
	
	double d2(0.1);
	cout << d2 << endl;
	//cout << std::setprecision(17);
	cout << d2 << endl<<endl;

	double d3(1.0);
	double d4(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	cout << d3 << endl;
	cout << d4 << endl;
	cout << setprecision(17);
	cout << d3 << endl;
	cout << d4 << endl; //오차가 누적이 되는 것을 보여줌 
	 

	double zero = 0.0;
	double posint = 5.0 / zero;// 양의 무한
	double neginf = -5.0 / zero; // 음의 무한
	double nan = zero / zero; //not a number 


	//isinf -무한대냐 isnan 숫자가 아니냐
	cout << posint << " "<< std::isinf(posint)<< endl;
	cout << neginf <<" "<<std::isnan(neginf)<< endl;

	// nan(ind) ind는 결정할수없다 indeterminate임.
	cout << nan << " "<<std::isnan(nan)<< endl;
	cout << 1.0 << " " << std::isnan(1.0) << endl;
	return 0;
}