#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <string>
# include <iostream>
# include <fstream>

# define SH_NAME "shrubbery_creation_form"
# define SH_SIGN_GRADE 145
# define SH_EXEC_GRADE 137

class	ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& ref);
		~ShrubberyCreationForm();
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& ref);

		virtual void	execute(const Bureaucrat& executor) const;
};

#endif
