#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Form.hpp"

# define GRADE_LOWEST	150
# define GRADE_HIGHEST	1

class	Form;

class	Bureaucrat{

private:
	const std::string	name;
	int					grade;

	Bureaucrat();
public:
	
	Bureaucrat(const std::string& name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& ref);
	Bureaucrat&	operator=(const Bureaucrat& ref);

	const std::string	getName(void) const;
	int					getGrade(void) const;
	void				increaseGrade(void);
	void				decreaseGrade(void);

	void				signForm(Form& form);

class GradeTooHighException : virtual public std::exception{

public:
	explicit GradeTooHighException() {}

	virtual ~GradeTooHighException() throw() {}

	virtual const char*	what() const throw () {
		return ("Grade Too High!");
	}
};

class GradeTooLowException : virtual public std::exception{

public:
	explicit GradeTooLowException() {}

	virtual ~GradeTooLowException() throw() {}

	virtual const char*	what() const throw () {
		return ("Grade Too Low!");
	}
};

};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif
