#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//std::array<int,5> array
	//�����Ҵ��� �ϱ⶧���� ����� �׸��̴�.
	//�������� �ʱ�ȭ ����� 
	vector<int> array;

	vector<int> array2 = { 1,2,3,4,5 };

	cout << array2.size() << endl;

	vector<int> array3 = { 1,2,3, };
	cout << array3.size() << endl;

	//uniform initialization
	vector<int> array4 { 1,2,3, };
	cout << array4.size() << endl;


	//����� �ʿ��Ҷ����� �ٲ۴�. 
	vector<int> arr = { 1,2,3,4,5 };
	for (auto& itr : arr)
		cout << itr << " ";
	cout << endl;

	//array�� �����Ͱ� �����ϰ� ��밡��. 
	//�����迭�� �����迭�� �������̴ϱ�? 
	cout << arr[1] << endl;
	cout << arr.at(1) << endl;
	cout << arr.size() << endl;
	//������������ �޸𸮸� �˾Ƽ� �����ش�.
	//new�����ڸ� ����� �����迭�� ����� �ؿ� delete�� �־����.
	//vector�� �پ����� �������� �����ų� ������ �����ų� �Ҷ�
	//�ڵ����� ������� �޸𸮰� leek��������, ������ �Ͼ���ʴ´�.
	//�ڱ��� ���̸� �˾Ƽ� ����� �Ķ���ͷ� ������ ���̸� ������ �˰��ִ�.

	//resize�� �����ϴ�.
	arr.resize(10);
	for (auto& itr : arr)
		cout << itr << " ";
	cout << endl;


}