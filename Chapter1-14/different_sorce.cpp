#include<iostream>

using namespace std;

void doSomething()
{
#ifdef LIKE_APPLE //LIKE_APPLE�� ���ǰ� �Ǿ������� ����
	cout << "APPLE" << endl;
#endif


#ifndef LIKE_APPLE 
	cout << "ORAGE" << endl; //�帮�� �Ǿ����� ������ �Ǿ��ֱ� ������.
#endif
}