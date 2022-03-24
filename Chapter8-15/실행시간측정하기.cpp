#include<iostream>
#include<vector>
#include<algorithm>
#include<random>
#include<chrono>

using namespace std;

class Timer
{
	//chrono 라이브러리 사용
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;

	//현재시간 체크
	std::chrono::time_point<clock_t> start_time = clock_t::now();

public:
	void elapsed()
	{
		//현재시간 한번 더 체크
		std::chrono::time_point<clock_t> end_time = clock_t::now();

		//end-start -> 걸린시간
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