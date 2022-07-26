#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Form*	Intern::makeForm(const std::string &name, const std::string &target)
{
	Form	*newForm = NULL;

	std::cout << "Intern creates " << name << std::endl;
	try
	{
		(name == SH_NAME) && (newForm = new ShrubberyCreationForm(target));
		(name == RB_NAME) && (newForm = new RobotomyRequestForm(target));
		(name == PD_NAME) && (newForm = new PresidentialPardonForm(target));
		if (!newForm)
			throw Form::FormNotDefinedException();
	}
	catch (std::exception& e)
	{
		std::cout << "Intern couldn't make " << name << " because " << e.what() << std::endl;
	}
	return (newForm);
}

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(const Intern& ref)
{
	(void)ref;
}

Intern&	Intern::operator=(const Intern& ref)
{
	(void)ref;
	return (*this);
}
