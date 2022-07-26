#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	:Form(RB_NAME, target, RB_SIGN_GRADE, RB_EXEC_GRADE)
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
	static int srandFlag;
	if (srandFlag == 0)
	{
		srand(time(NULL));
		srandFlag = 1;
	}
	checkPrivilege(executor);
	std::cout << "dudududududu dudu dududududuu dudu" << std::endl;
	if (rand() % 2)
		std::cout << "........................... " << this->getTarget() << " has successfully robotomized." << std::endl;
	else
		std::cout << ".............. robotomy failed with " <<  this->getTarget() << std::endl;
}
