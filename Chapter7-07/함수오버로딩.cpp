#include<iostream>
#include<string>
using namespace std;

//������ �Ű������� �ٸ��� �Լ��� ����� ������
//�Լ� �����ε��� ����ϸ� ���� 
//�Լ��� �ٸ��� ���ٴ� �̸��� ���ٰ� �Ǵ��ϴ°��� �ƴ϶�.
//�Ű������� �ٸ��� �̸��� ���Ƶ� �ٸ��Լ� ó�� ���Ǹ���.
//�Ű����� Ÿ���� ���� �� �´� , �־��� ���ڿ� �Ű������� �ɸ´�
//�Լ��� ã�Ƽ� �������ش�.
//cpp���� ����Ÿ�Ը� �ٸ��͸����δ� �����ε��� �Ұ����ϴ� .
int add(int x, int y)
{
	return x + y;
}
int add(double x, double y)
{
	return x + y;
}

//�ϳ��� int, �ϳ��� double�� �����ʹٸ�
//retrun �� ������� ������ �Ҽ�����.
//1.�̸��� �ٲٴ¹�� - �Լ������ε��� �ƴ�.
//2.�Ű������� �ٲٴ¹��. -�Է°��� ���µ�
//���ϰ��� �޾ƾ��ϳ�?? ������ ����ϸ��.
//int getRandomValue(int x);
//double getRandomValue(double x);
void getRandom(int& x)
{

}
void getRandom(double& x)
{

}

//typedef�� ����ص� ���� Ÿ����.
//�����Ϸ����忡���� �����Լ��� �ִ²� .
typedef int my_int; 
//void print(int x) {}
//void print(my_int x){}


//��ġ�� ��Ȯ��  �ȵɶ�.
void print(const char* value){}
void print(int value) {}

void print2(unsigned int value){}
void pirnt2(float value){}
int main()
{
	//��� add�� ��������� �������Ҷ� ������ �Ǿ���Ѵ�. 
	add(1, 2);
	add(3.0, 4.0);

	//����.
	//������ x�� return ���ν� ���� �޾ƿ��°���,�Է����� ������ �߾ȴ�.
	int x;
	getRandom(x);

	//���� �־���� �����ε��� �Ҽ��ִ�, �������Ҽ��ִ�.
	//����Ÿ�Ը� ���δ� �����ε��� �Ұ����ϴ�.
	//int x= getRandomInt(x);
	//int x =getRandomInt(int());


	//�� �´°� ���� ������ �ִ°͵��� �����Ϳ� ���ߴµ�
	// �߾ȸ´°�� 
	//�������ϰ�� ���� const�� ���� �ذ�.
	print(0);
	print("a");


	//�ʹ� �� �¾� ȥ���� ������� ��ȣ���� �����������.
	// (usinged int)'a' , 0u, 3.141592f
	print2(0); //0 - unsinged ,float���� �ָ� �ǵ���� ĳ������ �������.
	print2('a'); //a�� ���´°� ������ a�� usinged, float�Ѵ� �ٲܼ��־� �ָ���. u�� �ٿ��ָ� unsinged
	print2(3.141592); //double�̸� float���� �˾����� �ָ��ϴ�. �ڿ� f�� �ٿ��ָ� float
	return 0;
}