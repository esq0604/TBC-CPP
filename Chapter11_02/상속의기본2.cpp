#include"Student.h"
#include"Teacher.h"
int main()
{
	Student std("Jack");
	std.setName("Jack Jack");
	std::cout << std.getName() << std::endl;
	
	Teacher tc("Dr.. H");
	tc.setName("Dr.k");

	std::cout << tc.getName() << std::endl;

	std::cout << std << std::endl;
	std::cout << tc << std::endl;

	std.doNothing();
	tc.doNothing();

	std.study();
	tc.Teach();
	return 0;

}