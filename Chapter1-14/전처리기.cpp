#include<iostream>
#include<algorithm> //�˰��� ���̺귯���� max�� ����. 
using namespace std;


//��ũ�� �ַ� �빮�ڷ� �ۼ���. �ڵ忡�� MY_NUMBER�� ������ 9�δ�ü��.
//���ڵ� ������. define�� ��ü,
//��ũ�δ� �ϵ��ڵ��ѰͰ� ���� �ۿ��� ��.
//max�� std�� �ֱ��ؼ� �̷��� ���ʿ�¾���. 
//��ũ���� ������ �� ���Ͼȿ����� ����ȴ�.
#define MAX(a,b) (((a)>(b)) ? (a):(b))

#define LIKE_APPLE

void doSomething();


int main()
{
//ifdef�� ��ó������. ���带 �ϱ����� �������°�.
	//��ó����� �����α׷��� ������������, ���������� �˱����� ��� �����.
	//opengl�� ����, directx ������ �׷���ī��� �������� ��� 
	//��ũ�δ� ��ü���ִ� ���̶� �ߴµ� ��ó���⿡���� ��ü���� ����ȴ�.
#ifdef LIKE_APPLE //LIKE_APPLE�� ���ǰ� �Ǿ������� ����
	cout << "APPLE" << endl;
#endif


#ifndef LIKE_APPLE 
	cout << "ORAGE" << endl; //�帮�� �Ǿ����� ������ �Ǿ��ֱ� ������.
#endif // !LIKE_APPLE 

	//define �� ȿ�¹����� �� �� ����.
	doSomething();

	cout << MAX(1,4) << endl;
	cout << MAX(1 + 3, 2) << endl;

	cout << std::max(1 + 3, 2) << endl;
	return 0;
}