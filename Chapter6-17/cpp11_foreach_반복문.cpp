#include<iostream>
#include<limits>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int fibonacci[] = { 0,1,1,2,3,5,8,13,21,34,55,89 };

				//for-each 사용 
	//number에fibonacci의 각 원소들이 한번씩 들어오게된다 .
	//change array values -referance이용하면 값을 바꿀수있다.
	//for-each에서는 auto를 흔하게 사용한다고 한다 
	for (auto &number : fibonacci)
		number *= 10;
	//ouput -출력이므로 const 사용이 용이함.
	for (const auto number : fibonacci)
		cout << number << " ";
	cout << endl;

				//for each 이용 주어진 수중 가장 큰 수 구현
	int max_number = std::numeric_limits<int>::lowest();
	for (const auto& n : fibonacci)
		max_number = std::max(max_number, n);
	cout << max_number << endl;


				//array를 동적할당하면 for-each를사용할수없다.
	//더 좋은 벡터를 사용할수도있음.
	//vector는 동적할당배열을 편히 사용하기 위해 std에 들어있는것.
	vector<int> fibo = { 0,1,1,2,3,5,8,13,21,34,55,89 };
	int max_number2 = std::numeric_limits<int>::lowest();
	for (const auto& n : fibo)
		max_number2 = std::max(max_number2, n);
	cout << max_number2 << endl;
	return 0; 
}