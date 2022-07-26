#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	:Form(PD_NAME, target, PD_SIGN_GRADE, PD_EXEC_GRADE)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref)
	:Form(ref)
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
	if (this != &ref)
		Form::operator=(ref);
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	checkPrivilege(executor);
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
