#include<iostream>
#include<iomanip> //������� maip�� �����Ѵ�.
#include<limits>
#include<cmath> //std::isnan��� .

int main()
{
	using namespace std;

	//f�� �Ⱥ��̸� ���ͷ��� �����ε� c/cpp���� float�� �ٲ��� �޸𸮰� 2�谡 ���̳��⶧���� ������ �ٸ���.
	float f(3.141592f); //3.14�� 31.4* 0.1�� ǥ������.
	double d(3.141592);
	long double ld(3.141592);

	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;  //long double�� ����� ����. 
	cout << sizeof(ld) << endl << endl;


	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl << endl;

	//min�� ����� min�� ǥ���Ҽ� �ִ� ���� ������ �� ���밪�� �ǹ��� lowest�� ����� .
	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl<<endl;

	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl << endl;

	//double , long double�� ���̰� ������ �����ش�. �ý��۸��� �ٸ� �� ����.
	
	//3.14 =31.4*0.1 ǥ����� �˾Ƶ־��Ѵ� .
	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;//31.4* 10^-1 
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl<<endl;

	// ��¼��ڸ� �÷���. iomanip
	cout << std::setprecision(16) << endl;
	//��ӳ����������� ���ڴ� �������Ⱥ���.iomanip
	cout << 1.0 / 3.0 << endl<<endl;
	
	 // 10 significant digits ��ȿ���� 10��.
	float z(123456789.0f);
	cout << std::setprecision(9);
	//������� 8�̾���. ���������� 2������ ����ϱ⶧���� ���е��� ���������ִ�.
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
	cout << d4 << endl; //������ ������ �Ǵ� ���� ������ 
	 

	double zero = 0.0;
	double posint = 5.0 / zero;// ���� ����
	double neginf = -5.0 / zero; // ���� ����
	double nan = zero / zero; //not a number 


	//isinf -���Ѵ�� isnan ���ڰ� �ƴϳ�
	cout << posint << " "<< std::isinf(posint)<< endl;
	cout << neginf <<" "<<std::isnan(neginf)<< endl;

	// nan(ind) ind�� �����Ҽ����� indeterminate��.
	cout << nan << " "<<std::isnan(nan)<< endl;
	cout << 1.0 << " " << std::isnan(1.0) << endl;
	return 0;
}