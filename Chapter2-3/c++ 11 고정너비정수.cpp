#include<iostream>
//#include<cstdint>  iostream�� ���ԵǾ�����.

int main()
{
	using namespace std;

	std::int16_t i(5); // 16��Ʈ -2����Ʈ -short
	std::int8_t myint = 65; //8��Ʈ -1����Ʈ -char 

	cout << myint << endl;

	std::int_fast8_t fi(5); //int �� 8��Ʈ,1����Ʈ�߿� ���� ���� ������Ÿ��.
	std::int_least64_t fl(5); //��� 8����Ʈ ���� ������Ÿ�� 
	
	return 0;
}