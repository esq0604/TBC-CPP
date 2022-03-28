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

	//반환형과 첫번째 파라미터가 outputoperator이다. 
	//멤버함수로 만들기가 어렵다. 첫번째 파라미터가 outstream이라서. ?? 
	//파일 출력과 콘솔 출력 둘다 해결해준다.
	friend std::ostream& operator << (std::ostream& out, const Point& point)
	{
		out <<"(" << point.m_x << " " << point.m_y << " " << point.m_z<<")";
		return out; //체이닝을 위해서.p1 이후 p2를 바로 출력이 가능. 
	}
	friend std::istream& operator >> (std::istream& in,  Point& point)
	{
		in >> point.m_x >> point.m_y >> point.m_z;
		return in; //체이닝을 위해서.p1 이후 p2를 바로 출력이 가능. 
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