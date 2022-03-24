#include<iostream>



class Fruit
{
public:
	enum class FruitType
	{
		APPLE, BANANA, CHERRY,
	};
	class InnerClass
	{

	};
	struct InnerStruct
	{

	};
private:
	FruitType m_type;
public:
	Fruit(FruitType type) :m_type(type)
	{}

	FruitType getType() { return m_type; }
};

int main()
{
	//enum class로 범위를 좀 더 구체화 시킬수있다.
	Fruit apple(Fruit::FruitType::APPLE);

	if (apple.getType() == Fruit::FruitType::APPLE)
	{
		std::cout << "Apple" << std::endl;
	}

	return 0;
}