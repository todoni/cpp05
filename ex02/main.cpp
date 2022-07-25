#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat	b("sohan", 1);
		Form		f("form", 1, 1);
		b.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	b("sohan", 5);
		Form		f("form", 1, 1);
		b.signForm(f);
		b.increaseGrade();
		b.increaseGrade();
		b.increaseGrade();
		b.increaseGrade();
		//b.increaseGrade();
		b.signForm(f);

	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "here" << std::endl;
}
