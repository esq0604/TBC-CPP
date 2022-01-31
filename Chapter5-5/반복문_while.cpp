#include<iostream>

using namespace std;

int main()
{
	//cout << "while-loop test" << endl;
	//int count = 0;
	
	//게임,인터넷 서비스, 서버는
	//작동을시킬때 무한히 작동할것을 가정하고돌림.
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
	

	//금융쪽에서 많은계산을하거나, 게임엔진관련개발을 한다하면
	//unsigned계산이 signed int보다 빠를수 있다함.
	//최적하 하는분들은 unsigned를 많이쓴다함.
	//vector의 경우 unsigned로 리턴을 해줌.
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
	//한번씩 어떠한 기능을 하고싶다.
	//%연산자를 통해 해결해줌 .
	//딥러닝하는분들은 훈련을 10번에1번 100번에1번 등등 익숙할것이라함.
	/*while (count < 100)
	{
		if (count % 5 == 0)
			cout << "hello" << count << endl;
			count++;
	}*/



	/*
		//while, 안에 while

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



	//99단.
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
	

	//출력을 위아래가 뒤집히게  5 /5 4/ 5 4  3/ 5 4 3 2 / 5 4 3 2 1 
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


	//빈칸을 0,x등으로 채워보기 
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