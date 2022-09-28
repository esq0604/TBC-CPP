#pragma once
#include<iostream>
class Position2D
{
private:
	int m_x;
	int m_y;
public:
	Position2D(const int& x_in, const int& y_in)
		: m_x(x_in), m_y(y_in)
	{}
	//TODO: overload operator = -나중에 연산자오버로딩으로 바꾼다는 소리.
	void set(const Position2D& pos_target)
	{
		set(pos_target.m_x, pos_target.m_y);
		//m_x = x_target;
		//m_y = y_target; - 두 기능이 겹치는거 보단 재활용하는게 좋음.
		//나중에 코드를 수정해야한다면 특정부분만 고치면됨.
		//중복된 코드가 많아지면 수정할곳이 많아져 함수로관리.
	}
	//함수 재사용

	void set(const int& x_target, const int& y_target)
	{
		m_x = x_target;
		m_y = y_target;
	}
	friend std::ostream& operator << (std::ostream& out, const Position2D& pos2d)
	{
		out << pos2d.m_x << " " << pos2d.m_y << std::endl;
		return out;
	}
};