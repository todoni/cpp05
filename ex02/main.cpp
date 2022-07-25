#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	try
	{
		Bureaucrat	b("sohan", 1);
		//Form		f("form", 1, 1); //not working anymore
		Form *shr = new ShrubberyCreationForm("shr");
		std::cout << *shr << std::endl;
		b.signForm(*shr);

		std::cout << *shr << std::endl;
		b.executeForm(*shr);
		//b.signForm(f);
		//std::cout << f << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	Bureaucrat	b("sohan", 1);
	Form *shr = new ShrubberyCreationForm("shr");
	try
	{
		b.executeForm(*shr);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "here" << std::endl;
}
