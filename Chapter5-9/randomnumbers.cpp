#include<iostream>
#include<cstdlib> //std::radn(), std::srand()
#include<ctime>//std::time()
#include<random> //boost에서 옮겨옴  cpp 11부터 사용. 
using namespace std;

//랜덤넘버 원리를 설명
//실제로는 라이브러리를 이용함
unsigned int PRNG() //Pseudo Random Number Generator
{
	//5523은 임의로 설정한 seed number 
	//static을 이용해서 바뀐값을 지속적으로 이용함.
	static unsigned int seed = 5523; //seed number 

	seed = 8253729 * seed + 2396403;

	//랜덤함수의 범위를 지정하기위해 나머지 연산자를 사용하는경우가있긴함
	//간단한 경우는 그렇게 해도되지만 정밀한 결과가 필요한 경우
	//나머지 연산자를 이용시 안좋은 결과가 나올수도있다.
	return seed % 32768;
}

int getRandomNumber(int min, int max)
{
	//RAND_MAX 랜덤넘버를 생성할때 나올수 있는 가장 큰 숫자 .
	static const double fraction = 1.0/(RAND_MAX + 1.0);

	//차이를 통해 범위를 만들고, 랜덤넘버를 rand_max+1로 나눔.
	//나누기는 느리기때문에 static으로 저장을 해놓고 반복해서 사용
	//밖으로 빼서전역 상수로 만드는 방법도 있음. 
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

	//seed넘버가 고정되어있으면 다른숫자를 생성할수가 없다.

	
	//seed 디버깅할때는 시드를 고정시켜야함. 매번 바뀌면 문제가 발생했다 안했다 할수도있음.
	//std::srand(5323); 
	

	//현재시간은 계속흐르니까 계속다른값을 내보낸다.
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
		//5~8난수생성  수가 작은경우에는 %4가 문제가 없지만 큰범위에서 생성된다면
		//특정영역으로 몰릴수있다. ->랜덤라이브러리를 사용하여 해결.include<random>
		cout << rand() % 4 + 5 << "\t";

		if (count % 5 == 0) cout << endl;
	}




	std::random_device rd;
	//std::mt19937_64;// 64비트 난수 
	
	//랜덤넘버를 생성하는 알고리즘 -creat a mesenne twister,
	//랜덤디바이스를 사용해서 고정된 난수를 막는다. 타임연동과 유사한역할을한다.
	std::mt19937 mesenne(rd()); 
	
	//1포함 6이하 하나가 선택이 되는데 모든확률이 동일하게나옴-uniform_~_distribution. 
	//nomal,, 등등 여러가지도 있음.
	std::uniform_int_distribution<> dice(1, 6);

	for (int count = 1; count <= 20; ++count)
	{
		cout << dice(mesenne) << endl;
	}
	return 0;
}
