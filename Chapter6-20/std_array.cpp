#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

//�Ϲݺ����� �Ķ���ͷ� ��������� �ѹ� ���簡 �ȴ�.
//array����������, array�� ũ�ٸ� �ð��� ���̰ɸ��� .
//�̷��� �����͸� ���¹���������� ���۷��� &�� ���¹�� ������.
//������ �ʱ⸦ ���Ѵٸ� const�� ���̸�ȴ�.
void printLength(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;
}

int main()
{

	//array�� std::array�̸��� ��ħ.
	//int array[] = { 1,2,3,4,5 };

	//���ڸ� �� �������.
	//�Լ� �Ķ���ͷ� �ѱ涧 �ξ� ���ϴ�.
	//class ����� ���ǵ�������, ���� �ѹ� �� ������ ���´�. 
	array<int, 5> my_arr = { 1,21,3,40,5 };



	//cout << my_arr[10] << endl;

	//.at Ŭ���� �� ����Լ�
	// my_arr[10]���� ���� �� �ε����� �Ѿ���� üũ�� �ѹ��ϰ� �������� �Ѵ�. 
	// at�� ���Ǹ� ��� �ε����� �������� ���ϰ� �ϴ°��̴�. 
	//cout << my_arr.at(10) << endl;

	//������Ʈ ����� 
	cout << my_arr.size() << endl;

	printLength(my_arr);


	//���⼭�� ���۷����� �̿��Ѵٸ� ����Ǵ� ������ �����̵�. ��������.
	for (auto &element : my_arr)
		cout << element << " ";
	cout << endl;


	std::sort(my_arr.begin(), my_arr.end());

	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;

	//�������� r -reverse
	sort(my_arr.rbegin(), my_arr.rend());
	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;
}