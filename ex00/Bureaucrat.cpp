#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	//you should not call this constructor because all bureaucrat must have name, and we are not explicitly allowed to use setter.
}

Bureaucrat::Bureaucrat(std::string name, int grade)
	:name(name), grade(grade)
{
	if (this->grade < GRADE_HIGHEST) 
		throw GradeTooHighException();
	if (this->grade > GRADE_LOWEST)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
	//std::cout << "destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref)
	:name(ref.getName()), grade(ref.getGrade())
{
	std::cout << "실행됨?" << std::endl;
	if (this->grade < GRADE_HIGHEST) 
		throw GradeTooHighException();
	if (this->grade > GRADE_LOWEST)
		throw GradeTooLowException();
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& ref)
{
	if (this != &ref)
	{
		*(const_cast<std::string*>(&this->name)) = ref.getName();
		this->grade = ref.getGrade();
	}
	return (*this);
}

const std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::increaseGrade(void)
{
	if (this->grade - 1 < GRADE_HIGHEST)
		throw GradeTooHighException();
	--this->grade;
}

void	Bureaucrat::decreaseGrade(void)
{
	if (this->grade + 1 > GRADE_LOWEST)
		throw GradeTooLowException();
	++this->grade;
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}
