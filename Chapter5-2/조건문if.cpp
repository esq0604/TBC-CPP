#include<iostream>
using namespace std;

int min(int x, int y)
{
	if (x > y)
		return y;
	else
		return x;
	//return (x > y) ? y : x;
}

int main()
{
	int x,y;
	cin >> x >> y;

	//if (x > 10)
	//	cout << x << " is greater than 10" << endl;

	//else
	//{
	//	if (x < 10)
	//		cout << x << " not greater than 10" << endl;
	//	else //if(x==10) �ּ��� ���� Ȯ���ϰ� ǥ�����ټ��ִ�.
	//		cout << "x is exactly 10" << endl;
	//}
	
	/*if (x >= 10)
	{
		if (x <= 20)
			cout << "x is between 10 and 20" << endl;
	}
		else
			cout << "..." << endl;*/
	

	/*if (x > 0 && y > 0)
		cout << "both number are positive" << endl;
	else if (x > 0 || y > 0)
		cout << "one of the numbers is positive" << endl;
	else
		cout << "Neither number is positive" << endl;*/
	/*if (x > 10)
		cout << "a" << endl;
	else if (x == -1)
		return 0;
	else if (x < 0)
		cout << "b" << endl;

	cout << "hello" << endl;*/

	//null statement
	if (x > 10);//�� null statement���� ����� �س����� �ٸ������ ���� �����̵ȴ�.
	

	//x�� 0�� ������ �ǰ�, �״�� if���� �� x=0, if(x)
	if (x = 0) //if(x==0)
		cout << x << endl;

	cout << x << endl;

	return 0;
}