#include<iostream>

int main()
{
	using namespace std;

	//logical Not !x 
	bool x = true;
	bool y = false;
	cout << !x << endl;

	//logical AND
	//cout << x && y << endl; -������ �켱���� ����
	cout << (x && y) << endl;

	bool hit = true;
	int health = 10;
	if (hit == true && health < 20)
	{
		cout << "die" << endl;
	}
	else
		health -= 20;


	//logical OR
	cout << (x || y) << endl;

	int x2 = 5;
	int y2 = 5;

	
	//���������� ������ ������� �����ϰ� ����ϰ� ǥ���ϴ°��� ���� 
	if (x2 != y2)
	{
		cout << "x does not equal y" << endl;
	}
	else
		cout << "x equal y" << endl;


	int v = 1;
	if (v == 0 || v == 1)
		cout << "v is 0 or 1 " << endl;


	//short circuit evaluation �ǿ����θ鿡�� �߿���.
	int x3 = 1;
	int y3 = 2;

	if (x3 == 1 && y3++ == 2)
	{
		//do something
	}
	//x==1�ϰ�� y���� 3  x==2�ϰ�� y���� 2  why??
	//&&�������� ��� ���ʸ��� ����� �Ҷ� false�̸� �������� ��������
	//�ʱ� �����̴� . ������ false�� ������ false�ϱ� �ٷ� return false�ع���
	cout << y3 << endl; 


	//De Morgan's Law
	bool x4 = true;
	bool y4 = false;

	!(x && y);
	!x || !y;

	!(x || y);
	!x && !y;

	//XOR -������ false , �ٸ��� true cpp���� xor operator�� ���� 
	//false false = false
	//false true =true
	//true false =true
	//true ture =false 
	//�� ���ؼ� xor�� �����, x,y�� �Ҹ����̾���
	//integer�� ����ؾ��ϴ� ���� static cast�� ����Ͽ� bool������ �ٲ� ���. 
	cout << std::boolalpha << endl;
	cout << (x4 != y4) << endl;

	//������  and, or�� �����ִ°��
	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	//�켱������ �����ϱ� ���ʺ��� �����ʳ�?
	bool r1 = v1 || v2 && v3;	//true
	bool r2 = (v1 || v2) && v3;//false
	//&&�� ||���� �켱������ ����.-��ȣ�� ġ�°��� ���̺��Ⱑ ����.
	bool r3 = v1 || (v2 && v3);
	cout << r1 << endl;
	cout << r2 << endl;

	cout << ((true && true) || false) << endl;	//true 
	cout << ((false && false) || true )<< endl;	//true
	cout << ((14 > 13 || 2 > 1) && (9 > 1)) << endl;//true
	cout << (!(2314123 > 2 || 123123 > 2387)) << endl;//false


	return 0;
}