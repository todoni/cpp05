#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	:Form()
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string& ref)
	:Form(ref, RB_SIGN_GRADE, RB_EXEC_GRADE)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref)
	:Form(ref)
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
	if (this != &ref)
		Form::operator=(ref);
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	checkPrivilege(executor);
	std::cout << "dudududududu dudu dududududuu dudu" << std::endl;
	std::srand(std::time(NULL));
	if (rand() % 2)
		std::cout << "........................... " << this->getName() << " has successfully robotomized." << std::endl;
	else
		std::cout << ".............. robotomy failed with " <<  this->getName() << std::endl;
}
