#pragma once

#include"Person.h"

class Student :public Person
{
private:
	int m_intel; //intelligence;

	//TODO: add more members like address, phon, favorate food , habits , ...

public:
	Student(const std::string& name_in = "No Name ", const int& intel_in = 0) 
		:Person(name_in), m_intel(intel_in)  //m_name -person��. student���� person�� �����ڸ� ȣ���� �ʱ�ȭ�� ���������� �ʱ�ȭ��.
	{
		this->getName();
	}

	void setIntel(const int& intel_in)
	{
		m_intel = intel_in;
	}
	int getIntel()
	{
		return m_intel;
	}

	void study()
	{
		std::cout << getName() << "is studying" << std::endl;
	}

	friend std::ostream& operator <<(std::ostream& out, const Student& student)
	{
		out << student.getName() << " " << student.m_intel;
		return out;
	}
};