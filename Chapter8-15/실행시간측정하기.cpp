#include<iostream>
#include<vector>
#include<algorithm>
#include<random>
#include<chrono>

using namespace std;

class Timer
{
	//chrono ���̺귯�� ���
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;

	//����ð� üũ
	std::chrono::time_point<clock_t> start_time = clock_t::now();

public:
	void elapsed()
	{
		//����ð� �ѹ� �� üũ
		std::chrono::time_point<clock_t> end_time = clock_t::now();

		//end-start -> �ɸ��ð�
		cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl;
	}
};

int main()
{
	random_device rnd_device;
	mt19937 mersenne_engine{ rnd_device() };

	vector<int> vec(10000);

	for (unsigned int i = 0; i < vec.size();++i)
	{
		vec[i] = i;
	}

	std::shuffle(begin(vec), end(vec), mersenne_engine);

	//for (auto& e : vec) cout << e << " ";
	//cout << endl;

	Timer timer;

	std::sort(begin(vec), end(vec));

	timer.elapsed();
	/*for (auto& e : vec) cout << e << " ";
	cout << endl;*/

	return 0;
}