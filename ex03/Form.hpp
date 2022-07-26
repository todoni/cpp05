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
	const std::string	target;
	bool				isSigned;
	const int 			signGrade;
	const int			executeGrade;

public:
	
	Form();
	Form(const std::string& name, const std::string& target, const int signGrade, const int executeGrade);
	virtual ~Form();
	Form(const Form& ref);
	Form&	operator=(const Form& ref);

	std::string	getName(void) const;
	std::string	getTarget(void) const;
	bool		getIsSigned(void) const;
	int			getSignGrade(void) const;
	int			getExecuteGrade(void) const;

	void				beSigned(const Bureaucrat& bureaucrat);

	virtual void		execute(const Bureaucrat& executor) const = 0;
	void				checkPrivilege(const Bureaucrat& executor) const;

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

class FormNotSignedException : virtual public std::exception{

public:
	explicit FormNotSignedException() {}

	virtual ~FormNotSignedException() throw() {}

	virtual const char*	what() const throw () {
		return ("Form Not Signed!");
	}
};

class FormNotDefinedException : virtual public std::exception{

public:
	explicit FormNotDefinedException() {}

	virtual ~FormNotDefinedException() throw() {}

	virtual const char*	what() const throw () {
		return ("Form Not Defined!");
	}
};

};

std::ostream&	operator<<(std::ostream& out, const Form& form);

#endif
