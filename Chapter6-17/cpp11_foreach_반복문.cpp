#include<iostream>
#include<limits>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int fibonacci[] = { 0,1,1,2,3,5,8,13,21,34,55,89 };

				//for-each ��� 
	//number��fibonacci�� �� ���ҵ��� �ѹ��� �����Եȴ� .
	//change array values -referance�̿��ϸ� ���� �ٲܼ��ִ�.
	//for-each������ auto�� ���ϰ� ����Ѵٰ� �Ѵ� 
	for (auto &number : fibonacci)
		number *= 10;
	//ouput -����̹Ƿ� const ����� ������.
	for (const auto number : fibonacci)
		cout << number << " ";
	cout << endl;

				//for each �̿� �־��� ���� ���� ū �� ����
	int max_number = std::numeric_limits<int>::lowest();
	for (const auto& n : fibonacci)
		max_number = std::max(max_number, n);
	cout << max_number << endl;


				//array�� �����Ҵ��ϸ� for-each������Ҽ�����.
	//�� ���� ���͸� ����Ҽ�������.
	//vector�� �����Ҵ�迭�� ���� ����ϱ� ���� std�� ����ִ°�.
	vector<int> fibo = { 0,1,1,2,3,5,8,13,21,34,55,89 };
	int max_number2 = std::numeric_limits<int>::lowest();
	for (const auto& n : fibo)
		max_number2 = std::max(max_number2, n);
	cout << max_number2 << endl;
	return 0; 
}