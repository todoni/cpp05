#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <string>
# include <iostream>

# define PD_NAME "presidential_pardon_form"
# define PD_SIGN_GRADE 25
# define PD_EXEC_GRADE 5

class	PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm();

	public:
		PresidentialPardonForm(const std::string& name);
		PresidentialPardonForm(const PresidentialPardonForm& ref);
		~PresidentialPardonForm();
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& ref);

		virtual void	execute(const Bureaucrat& executor) const;
};

#endif
