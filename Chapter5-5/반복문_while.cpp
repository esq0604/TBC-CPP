#include<iostream>

using namespace std;

int main()
{
	//cout << "while-loop test" << endl;
	//int count = 0;
	
	//����,���ͳ� ����, ������
	//�۵�����ų�� ������ �۵��Ұ��� �����ϰ���.
	/*while (count<10)
	{
		cout << count << endl;
		++count;
	}*/

	//while (1)
	//{
	//	if (count == 10)
	//		break; 
	//	
	//	//static int count = 0;
	//	cout << count << endl;
	//	++count;
	//}
//tryAgain:
//	cout << count << endl;
//	++count;
//	
//	if (count < 11)
//		goto tryAgain;
//
	

	//�����ʿ��� ����������ϰų�, ���ӿ������ð����� �Ѵ��ϸ�
	//unsigned����� signed int���� ������ �ִ���.
	//������ �ϴºе��� unsigned�� ���̾�����.
	//vector�� ��� unsigned�� ������ ����.
	/*unsigned int count = 10;
	while (count >= 0)
	{
		if (count == 0)
			cout << "zero";
		else
			cout << count << " ";
		count--;
	}*/



	//int count = 1;
	//�ѹ��� ��� ����� �ϰ�ʹ�.
	//%�����ڸ� ���� �ذ����� .
	//�������ϴºе��� �Ʒ��� 10����1�� 100����1�� ��� �ͼ��Ұ��̶���.
	/*while (count < 100)
	{
		if (count % 5 == 0)
			cout << "hello" << count << endl;
			count++;
	}*/



	/*
		//while, �ȿ� while

 	int outer_count = 1;

	while (outer_count <= 5)
	{
		int inner_count = 1;
		while (inner_count <= outer_count)
		{
			cout << inner_count++ << " ";
		}
		cout << endl;
		++outer_count;
	}*/



	//99��.
	/*int level=1;
	while (level < 10)
	{
		int index = 1;
		while (index<10)
		{
			cout << level << " * " << index << " = " << level * index<<endl;
			index++;
			
		}
		level++;
		cout << endl;
	}*/
	

	//����� ���Ʒ��� ��������  5 /5 4/ 5 4  3/ 5 4 3 2 / 5 4 3 2 1 
	int level2 = 5;
	while (level2 <= 5 && level2 > 0)
	{
		int index = 5;
		while (index >= level2)
		{
			
			cout << index--<<" ";

		}
		level2--;
		cout << endl;
	}


	//��ĭ�� 0,x������ ä������ 
	int level3 = 5;
	while (level3 <= 5 && level3 > 0)
	{
		int index = 5;
		while (index >= level3)
		{
			if (index < 5)
				cout << "x";
			cout << index--;

		}
		level3--;
		cout << endl;
	}
}