#include<iostream>
#include<vector>
#include<cstdint>
int main()
{
	using namespace std;
	//��ǻ� double�̳� distance_t �� ������ ����Ҽ��ִ�. �ڵ�󿡼�.
	//���⼭�� �ǵ��� distance_t�� ����� double�� �Ÿ���� �������� �����̴�.
	//��� �ּ� �� �޸� �� ����ϴ°��̴�.
	typedef double distance_t; 

	//�����ʺ񺯼�
	//t�� �ִµ� ���ο� �ڷ����� �����Ѱ� �ƴϰ� �ִ°͵��� ��Ȳ�� �����Ѱ�����
	//typedef�� ���� ������ ������ذ���. 
	std::int8_t i(97);



	//�����Ϸ� ���忡�� ���� �Ȱ���.
	//double�̰� distance�̴�. ���ǥ���ϴ¹��
	double		my_distance;

	//home���� work���� distance��. ��� ǥ���ϴ¹��. distacne�� double�� ���ڴ�~. ���ǥ��
	//���� �Ÿ��� ���̴� ������ float�� �ٲ���Ѵٸ�Ÿ��� ���̴� �͸� �ٲ��ִ°��� �����
	//typedef���� double�� float�θ� �ٲ��ָ� �ȴ�.
	distance_t	 home2work;
	distance_t	home2scholl;

	//std::vector<std::pair<std::string, int>> pairlist;
	//������ �ڷ������� �����. string,int �� �迭ó�� �����Ǿ��ִ�~
	//�������ڷ����� �ִٰ� �����ϸ�ȴ�.
	//�̷��� ��� ���⿡�� ������ �����Ұ��̴�.
	typedef vector<pair<string, int>> pairlist_t;
	
	//vector<pair<string, int>> pairlist1;
	//vector<pair<string, int>> pairlist2;
	pairlist_t pairlist1;
	pairlist_t pairlist2;

	//�ֱٿ��� using�� ����ϴ� ����� ����.
	//��ġ �������ϴ°Ͱ� ������ �����Ϸ����� �긦 ǥ���ϱ� ���� �̷��� �̸������ڴ�
	//��� �ϴ°�.
	using pairlist_t2 = vector<pair<string, int>>;


	return 0;
}