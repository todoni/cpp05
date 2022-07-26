#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>

# define GRADE_LOWEST	150
# define GRADE_HIGHEST	1

class	Bureaucrat;

class	Form{

private:
	const std::string	name;
	bool				isSigned;
	const int 			signGrade;
	const int			executeGrade;

public:
	
	Form();
	Form(std::string name, const int signGrade, const int executeGrade);
	~Form();
	Form(const Form& ref);
	Form&	operator=(const Form& ref);

	std::string			getName(void) const;
	bool				getIsSigned(void) const;
	int					getSignGrade(void) const;
	int					getExecuteGrade(void) const;

	void				beSigned(const Bureaucrat& bureaucrat);

class GradeTooHighException : virtual public std::exception{

public:
	explicit GradeTooHighException() {}

	virtual ~GradeTooHighException() throw() {}

	virtual const char*	what() const throw () {
		return ("Form Grade Too High!");
	}
};

class GradeTooLowException : virtual public std::exception{

public:
	explicit GradeTooLowException() {}

	virtual ~GradeTooLowException() throw() {}

	virtual const char*	what() const throw () {
		return ("Form Grade Too Low!");
	}
};

};

std::ostream&	operator<<(std::ostream& out, const Form& form);

#endif
