#include<iostream>
#include<bitset>

int main()
{
	using namespace std;

	//cout,cin������ �ε�ȣ�ΰ��� �ٸ��ǹ̷� ����� operator overloading
	//cout,cin���� ����ϴ� << >>�� bitwise operator�� �ƴϴ�. 
	// << left shift
	// >> right shift 
	// ~-not, &, |,^-xor 

	//��Ʈ�������� signed ������ ������ �����Ҷ��� 
	//��ȣǥ�ÿ� ���, ������ ��� �̷��������� �������� unsigned�� �����
	unsigned int a = 3;
	
	//a�� ���������� 2������ �ٲ�� ��� �����̵Ǵ���
	// 4��Ʈ�����ڴ� 4-���ø�
	cout << std::bitset<4>(a) << endl;  


	//Left shift operator 
	//b�� a�� �������� ��ĭ�� �ű��.
	// ����Ʈ�� �ϳ��� �������� �ű�°� *2�� ������
	//��ŭ 10������ ���� ������ .
	//pow���Ἥ �Ϲ������� �ϴ°��� �ƴϰ�
	//unsigned integer�� ������ 2�� �������� ���ϰ���� ��쿡�� ���ϴ°ͺ���
	//shift operator ���°��� �ξ� ������.(��귮�� �������)
	unsigned int b = a << 1;
	cout << std::bitset<8>(b) <<" "<<b<< endl;
	cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
	cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
	cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;
	
	
	//Right shift operator 
	//2�� �������� �������̴�.
	//1024 /8�� �ϸ� ��ǻ�Ͱ� ���������� 8�� �ƴ϶� �ٸ����ڷε� �������ִ� ������� ������Ѵ�
	//��Ʈ������ ���۷����͸����� ���ο� ����ȹ������ ���������� �б⶧���� �ӵ��� �ξ�������.
	//�� �Ϲ����� �����⿡�� ����Ҽ��� ����.
	unsigned int a2 = 1024;
	cout << std::bitset<16>(a2) << " " << (a2) << endl;
	
	cout << std::bitset<16>(a2 >> 1) << " " << (a2 >> 1) << endl;
	cout << std::bitset<16>(a2 >> 2) << " " << (a2 >> 2) << endl;
	cout << std::bitset<16>(a2 >> 3) << " " << (a2 >> 3) << endl;
	cout << std::bitset<16>(a2 >> 4) << " " << (a2 >> 4) << endl;
	
	//bitwise not
	unsigned int a3 = 1024;
	cout << std::bitset<16>(~a3) << " " << (~a2) << endl;
	
	//2���� ǥ��
	unsigned int a4 = 0b1100;
	unsigned int b4 = 0b0110;

	cout << a4 << " " << b4 << endl;
	cout << std::bitset<4>(a4 & b4) << endl; //bitwise AND
	cout << std::bitset<4>(a4 | b4) << endl;//bitwise OR
	cout << std::bitset<4>(a4 ^ b4) << endl;//bitwise XOR

	a &= b;//���Կ����ڿ� ���յ� ���·ε� ����Ҽ��ִ�.

	return 0;
}