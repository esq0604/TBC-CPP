#include <iostream>
#include <cmath>
#include<limits>

int main()
{
	using namespace std;

	short	s = 1; // 2bite = 2 * 8bits = 16bits - 2�� 16���� ������ ����ǥ��
	

	//singed�� �ϳ� �� ��ȣǥ���� ���  0��ǥ���ؼ� �ϳ�������.
	//@ǥ���Ҽ��ִ� ������ �Ѿ�� ������ ���� �� ����
	cout << std::pow(2 ,sizeof(short) *8 -1) -1 << endl;
	cout << std::numeric_limits<short>::max() << endl;

	//������ ǥ�������� min, lowest�� ����. 
	cout << std::numeric_limits<short>::min() << endl; 
	cout << std::numeric_limits<short>::lowest() << endl;

	s = 32767;
	s = s + 1; //32768?? (s +=1) 

	cout <<"max + 1\t" << s << endl;  //overflow  

	s = std::numeric_limits<short>::min();
	s = s - 1; //-32769?? 
	cout<< "min - 1\t" << s << endl; //overflow  

	unsigned int i = -1; //overflow 
	cout << i << endl;

	//���������� ������ ������ ����� ���� .
	//�Ǽ����� ����ȯ�� ���� (float)22/4 , 22/(float)4
	cout << 22 / 4 << endl;

	
	return 0;
}