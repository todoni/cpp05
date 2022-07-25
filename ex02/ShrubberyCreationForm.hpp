#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <string>
# include <iostream>
# include <fstream>

# define SH_SIGN_GRADE 145
# define SH_EXEC_GRADE 147

class	ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(const std::string& ref);
		ShrubberyCreationForm(const ShrubberyCreationForm& ref);
		~ShrubberyCreationForm();
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& ref);

		virtual void	execute(const Bureaucrat& executor) const;
};

#endif
