#include<iostream>
#include<cstdlib> //std::radn(), std::srand()
#include<ctime>//std::time()
#include<random> //boost���� �Űܿ�  cpp 11���� ���. 
using namespace std;

//�����ѹ� ������ ����
//�����δ� ���̺귯���� �̿���
unsigned int PRNG() //Pseudo Random Number Generator
{
	//5523�� ���Ƿ� ������ seed number 
	//static�� �̿��ؼ� �ٲﰪ�� ���������� �̿���.
	static unsigned int seed = 5523; //seed number 

	seed = 8253729 * seed + 2396403;

	//�����Լ��� ������ �����ϱ����� ������ �����ڸ� ����ϴ°�찡�ֱ���
	//������ ���� �׷��� �ص������� ������ ����� �ʿ��� ���
	//������ �����ڸ� �̿�� ������ ����� ���ü����ִ�.
	return seed % 32768;
}

int getRandomNumber(int min, int max)
{
	//RAND_MAX �����ѹ��� �����Ҷ� ���ü� �ִ� ���� ū ���� .
	static const double fraction = 1.0/(RAND_MAX + 1.0);

	//���̸� ���� ������ �����, �����ѹ��� rand_max+1�� ����.
	//������� �����⶧���� static���� ������ �س��� �ݺ��ؼ� ���
	//������ �������� ����� ����� ����� ����. 
	//const double fraction = 1.0/(RAND_MAX + 1.0);
	return min + static_cast<int>((max - min + 1)*(std::rand()* fraction));
}

int main()
{
	/*for (int count = 1; count <= 100; ++count)
	{
		cout << PRNG() << "\t";

		if (count % 5 == 0) cout << endl;
	}*/

	//seed�ѹ��� �����Ǿ������� �ٸ����ڸ� �����Ҽ��� ����.

	
	//seed ������Ҷ��� �õ带 �������Ѿ���. �Ź� �ٲ�� ������ �߻��ߴ� ���ߴ� �Ҽ�������.
	//std::srand(5323); 
	

	//����ð��� ����帣�ϱ� ��Ӵٸ����� ��������.
	/*std::srand(static_cast<unsigned int>(std::time(0)));
	
	for (int count = 1; count <= 100; ++count)
	{
		cout << std::rand() << "\t";

		if (count % 5 == 0) cout << endl;
	}*/



	std::srand(5323);
	for (int count = 1; count <= 100; ++count)
	{
		cout << getRandomNumber(5, 8) << "\t";

		if (count % 5 == 0) cout << endl;
	}

	for (int count = 1; count <= 100; ++count)
	{
		//5~8��������  ���� ������쿡�� %4�� ������ ������ ū�������� �����ȴٸ�
		//Ư���������� �������ִ�. ->�������̺귯���� ����Ͽ� �ذ�.include<random>
		cout << rand() % 4 + 5 << "\t";

		if (count % 5 == 0) cout << endl;
	}




	std::random_device rd;
	//std::mt19937_64;// 64��Ʈ ���� 
	
	//�����ѹ��� �����ϴ� �˰��� -creat a mesenne twister,
	//��������̽��� ����ؼ� ������ ������ ���´�. Ÿ�ӿ����� �����ѿ������Ѵ�.
	std::mt19937 mesenne(rd()); 
	
	//1���� 6���� �ϳ��� ������ �Ǵµ� ���Ȯ���� �����ϰԳ���-uniform_~_distribution. 
	//nomal,, ��� ���������� ����.
	std::uniform_int_distribution<> dice(1, 6);

	for (int count = 1; count <= 20; ++count)
	{
		cout << dice(mesenne) << endl;
	}
	return 0;
}
