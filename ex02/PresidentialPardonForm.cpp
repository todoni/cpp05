#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	:Form()
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string& ref)
	:Form(ref, PD_SIGN_GRADE, PD_EXEC_GRADE)
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
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
