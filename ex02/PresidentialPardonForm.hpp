#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <string>
# include <iostream>

class	PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm();

	public:
		PresidentialPardonForm(const std::string& name);
		PresidentialPardonForm(const PresidentialPardonForm& ref);
		~PresidentialPardonForm();
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& ref);

		virtual void	execute(const Bureaucrat& executor);
};

#endif
