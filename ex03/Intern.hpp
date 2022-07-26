#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

class	Form;

class	Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& ref);
		Intern&	operator=(const Intern& ref);

		Form*	makeForm(const std::string& name, const std::string& target);

class FormNotDefinedException : virtual public std::exception{

public:
	explicit FormNotDefinedException() {}

	virtual ~FormNotDefinedException() throw() {}

	virtual const char*	what() const throw () {
		return ("Form Not Defined!");
	}
};
};

#endif
