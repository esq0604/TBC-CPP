#include<iostream>
#include<fstream>
using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;
public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		:m_x(x), m_y(y), m_z(z)
	{}

	void print()
	{
		cout << m_x << " " << m_y << " " << m_z << endl;
	}

	//��ȯ���� ù��° �Ķ���Ͱ� outputoperator�̴�. 
	//����Լ��� ����Ⱑ ��ƴ�. ù��° �Ķ���Ͱ� outstream�̶�. ?? 
	//���� ��°� �ܼ� ��� �Ѵ� �ذ����ش�.
	friend std::ostream& operator << (std::ostream& out, const Point& point)
	{
		out <<"(" << point.m_x << " " << point.m_y << " " << point.m_z<<")";
		return out; //ü�̴��� ���ؼ�.p1 ���� p2�� �ٷ� ����� ����. 
	}
	friend std::istream& operator >> (std::istream& in,  Point& point)
	{
		in >> point.m_x >> point.m_y >> point.m_z;
		return in; //ü�̴��� ���ؼ�.p1 ���� p2�� �ٷ� ����� ����. 
	}
};

int main()
{
	//ofstream of("out.txt");
	Point p1, p2;
	cin >> p1 >> p2;
	cout << p1 << " " << p2 << endl;
	//of << p1 << " " << p2 << endl;

	//of.close();
	return 0;
}