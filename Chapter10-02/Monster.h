#pragma once
#include<string>
#include"Position2D.h"
class Monster
{
private:
	std::string m_name; //string도 내부엔 char* data, unsigned leng 
	//int m_x, m_y; //location , position 위치는 많은 정보를 포함 -> 클래스로 만들면어떨까.
	//position 말고, 목표의 위치를 표현 해야한다면 m_target_x 늘어나. 등등 번거로워짐.
	Position2D m_location; //m_location이 monster의 구성인 관계임.  Position2d는 monster의 subclass.
	//
public:
	Monster(const std::string name_in, const Position2D& pos_in)
		:m_name(name_in), m_location(pos_in)
	{}

	void moveTo(const Position2D& pos_target)
	{
		/*m_x = x_target;
		m_y = y_target;*/
		m_location.set(pos_target); //기능을 분리시키고, 상위클래스는,가져다 쓰는 클래스는 뭘 할지만 알면되고 어떻게 할지는 안보일수록 좋다 . 
	}
	friend std::ostream& operator << (std::ostream& out, const Monster& monster)
	{
		out << monster.m_name << " " << monster.m_location << std::endl;
		return out;
	} //m_location 안에도 오버로딩을 해줬기 때문에. 
}; 
	