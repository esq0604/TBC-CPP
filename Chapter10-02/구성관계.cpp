#include "Monster.h"
using namespace std;

int main()
{
	Monster mon1("Sanson", Position2D(0,0));
	//while (1) //game loop
	{
		cout << mon1 << endl;
		//event
		mon1.moveTo(Position2D(1,1));//�ӽð�ü.
	}
	cout << mon1 << endl;
	return 0;
}