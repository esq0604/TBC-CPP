#include<iostream>
#include<cmath> //sqrt()

//�������ΰ��� �ݺ����� goto�̴�. goto�� �ݺ����� ��������.
//�ѹ��� ���α׷����� goto���� �ẻ�������Ͻ�.
int main()
{
	using namespace std;
	double x;
tryAgain ://label -	å����ó��, �ڱⰡ �̸��� ���ϸ�ȴ�.
	cout << "Enter a non negative number" << endl;
	cin >> x;

	if (x < 0.0)
		goto tryAgain; //tryAgain���� �ǵ��ư� 


	cout << sqrt(x) << endl;


//	goto skip; ������ ����Ϸ��� �������ϰ� �� ���� �ʱ�ȭ�ϰ�, ������ؾ��ϴµ�
	//�ܰ���� �ǳʶٴ� ������ �ȴٶ�� ����.
	
	int x = 5;

skip:
	x += 3;

	return 0;

}