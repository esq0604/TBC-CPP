#include<iostream>

//�Լ��� ���鶧 ���� �����, ���� ��� �������� ���̸���.
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

	////true, false�� ��� 
	//cout << std::boolalpha;
	//cout << b3 << endl;
	//
	////���ڷ� ��� -�⺻�� 
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

	////���ǿ� ���� ������ ���� �ȵ��� �����ȴ�.
	////�����̻� �߰�ȣ.
	//if (false)
	//{
	//	cout << "This is true" << endl;
	//	cout << "This is second line" << endl;
	//}
	//else
	//	cout << "This is false" << endl;


	//cout << isEqual(1, 1) << endl;
	//cout << isEqual(0, 3) << endl;


	////if���� 0�̸� false , �������� true
	//if (4)
	//{
	//	cout << "True" << endl;
	//}
	//else
	//	cout << "False" << endl<<endl;

	//bool b;

	////���ڸ� �־����. true,false�� ���ڱ⶧����.
	//cout << std::boolalpha;
	//cin >> b;
	//cout << "Your input : " << b << endl;


	//�������Է¹ް� Ȧ��,¦������ Ȯ��
	int num;
	cin >> num;
	if (num % 2 == 0)
		cout << "¦" << endl;
	else
		cout << "Ȧ" << endl;
	return 0;
}