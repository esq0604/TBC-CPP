#pragma once
#include<string>
#include"Position2D.h"
class Monster
{
private:
	std::string m_name; //string�� ���ο� char* data, unsigned leng 
	//int m_x, m_y; //location , position ��ġ�� ���� ������ ���� -> Ŭ������ �������.
	//position ����, ��ǥ�� ��ġ�� ǥ�� �ؾ��Ѵٸ� m_target_x �þ. ��� ���ŷο���.
	Position2D m_location; //m_location�� monster�� ������ ������.  Position2d�� monster�� subclass.
	//
public:
	Monster(const std::string name_in, const Position2D& pos_in)
		:m_name(name_in), m_location(pos_in)
	{}

	void moveTo(const Position2D& pos_target)
	{
		/*m_x = x_target;
		m_y = y_target;*/
		m_location.set(pos_target); //����� �и���Ű��, ����Ŭ������,������ ���� Ŭ������ �� ������ �˸�ǰ� ��� ������ �Ⱥ��ϼ��� ���� . 
	}
	friend std::ostream& operator << (std::ostream& out, const Monster& monster)
	{
		out << monster.m_name << " " << monster.m_location << std::endl;
		return out;
	} //m_location �ȿ��� �����ε��� ����� ������. 
}; 
	