#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form()
	:signGrade(-1), executeGrade(-1)
{

}

Form::Form(std::string name, const int sg, const int eg)
	:name(name), isSigned(false), signGrade(sg), executeGrade(eg)
{
	if (this->signGrade < GRADE_HIGHEST || this->executeGrade < GRADE_HIGHEST)
		throw GradeTooHighException();
	if (this->signGrade > GRADE_LOWEST || this->executeGrade > GRADE_LOWEST)
		throw GradeTooLowException();
}

Form::Form(const Form& ref)
	:name(ref.getName()), isSigned(false), signGrade(ref.getSignGrade()), executeGrade(ref.getExecuteGrade())
{
	
}

Form&	Form::operator=(const Form& ref)
{
	if (this != &ref)
	{
		*(const_cast<std::string*>(&this->name)) = ref.getName();
		this->isSigned = ref.getIsSigned();
		*(const_cast<int*>(&this->signGrade)) = ref.getSignGrade();
		*(const_cast<int*>(&this->executeGrade)) = ref.getExecuteGrade();
	}
	return (*this);
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGrade)
		throw GradeTooHighException();
	this->isSigned = true;
}

std::string	Form::getName(void) const
{
	return (this->name);
}

bool	Form::getIsSigned(void) const
{
	return (this->isSigned);
}

int		Form::getSignGrade(void) const
{
	return (this->signGrade);
}

int		Form::getExecuteGrade(void) const
{
	return (this->executeGrade);
}

std::ostream&	operator<<(std::ostream& out, const Form& form)
{
	out << "[Form]" << "\n"
		<< "Name          : " << form.getName() << "\n"
		<< "Signed        : " << form.getIsSigned() << "\n"
		<< "Sign    grade : " << form.getSignGrade() << "\n"
		<< "Execute grade : " << form.getExecuteGrade() << std::endl;
	return (out);
}

Form::~Form()
{

}
