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

	//float , �ε��Ҽ������� �� �� ���� �ٸ��� �Ҷ� ���ǻ����� ���̻���
	double d1(100 - 99.99); //0.001
	double d2(10 - 9.99);	//0.001

	//���ϱ� ����. 
	cout << d1 << endl;
	cout << d2 << endl;

	//��°��� �÷��� �ٽ� ��� -���� �ٸ��� Ȯ��
	cout << std::setprecision(16) << endl;
	cout << d1 << endl;
	cout << d2 << endl;
	//�� ���� �ʳ�??
	if (d1 == d2)
		cout << "equal" << endl;
	else
	{
		cout << "Not equal" << endl;
		
		if (d1 > d2)  cout << "d1 > d2" << endl;
		else //if(d1<d2) because d1 != d2 
			cout << "d1 < d2" << endl;
	}

	//������ �ſ� ������ �˼�����.
	cout << std::abs(d1 - d2) << endl; 


	//������ ���س��� ���� ����
	const double epilson = 1e-16;
	if (std::abs(d1 - d2) < epilson)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal" << endl;

	cout << isnan(abs(d1 - d2)) << endl;
	cout << isinf(abs(d1 - d2)) << endl;
	return 0;
}