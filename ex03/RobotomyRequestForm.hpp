#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>

# define RB_NAME "robotomy_request_form"
# define RB_SIGN_GRADE 72
# define RB_EXEC_GRADE 45

class	RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm();

	public:
		RobotomyRequestForm(const std::string& ref);
		RobotomyRequestForm(const RobotomyRequestForm& ref);
		~RobotomyRequestForm();
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& ref);

		virtual void	execute(const Bureaucrat& executor) const;
};

#endif
