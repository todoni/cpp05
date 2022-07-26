#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
	:signGrade(-1), executeGrade(-1)
{

}

Form::Form(const std::string& name, const std::string& target, const int sg, const int eg)
	:name(name), target(target), isSigned(false), signGrade(sg), executeGrade(eg)
{

}

Form::Form(const Form& ref)
	:name(ref.getName()), target(ref.getTarget()), isSigned(ref.getIsSigned()), signGrade(ref.getSignGrade()), executeGrade(ref.getExecuteGrade())
{

}

Form&	Form::operator=(const Form& ref)
{
	if (this != &ref)
	{
		*(const_cast<std::string*>(&this->name)) = ref.getName();
		*(const_cast<std::string*>(&this->target)) = ref.getTarget();
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

void	Form::checkPrivilege(const Bureaucrat& executor) const
{
	if (!this->isSigned)
		throw FormNotSignedException();
	if (this->executeGrade < executor.getGrade())
		throw GradeTooHighException();
}

std::string	Form::getName(void) const
{
	return (this->name);
}

std::string	Form::getTarget(void) const
{
	return (this->target);
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
		<< "Target        : " << form.getTarget() << "\n"
		<< "Signed        : " << form.getIsSigned() << "\n"
		<< "Sign    grade : " << form.getSignGrade() << "\n"
		<< "Execute grade : " << form.getExecuteGrade() << std::endl;
	return (out);
}

Form::~Form()
{

}
