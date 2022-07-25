#include "Bureaucrat.hpp"

int	main()
{
	/*const std::string s = "asdf";
	std::string ss = s;
	ss[1] = 'b';
	Bureaucrat b("sohan", 1);
	std::string name = b.getName();
	name[1] = 'b';*/
	
	try
	{
		std::cout << Bureaucrat("sohan", 1) << std::endl;
		std::cout << Bureaucrat("sohan", 2) << std::endl;
		//Bureaucrat(); //you should not call this constructor because all bureaucrat must have name, and we are not explicitly allowed to use setter.

		std::cout << Bureaucrat("sohan", 151) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "here?" << std::endl;
	try
	{
		Bureaucrat b1("b1", 1);
		std::cout << b1 << std::endl;
		Bureaucrat b2(Bureaucrat("invalid", -1));
		std::cout << b2 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b1("test", 5);
		std::cout << b1 << std::endl;
		for (int i = 0; i < 6; i++)
		{	
			b1.increaseGrade();
			std::cout << b1 << std::endl;	
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b1("test", 148);
		std::cout << b1 << std::endl;
		for (int i = 0; i < 6; i++)
		{	
			b1.decreaseGrade();
			std::cout << b1 << std::endl;	
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	//std::cout << b1 << std::endl;
}
