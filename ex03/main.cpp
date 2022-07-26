#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	internTest(void)
{
	Intern sohan;
	Bureaucrat	superSohan("superSohan", 1);
	Bureaucrat	babySohan("babySohan", 150);
	Bureaucrat	normalSohan("normalSohan", 50);
	Form* newForm;
	Form* sForm;
	Form* rForm;
	Form* pForm;

	newForm = sohan.makeForm("asdf", "asdf");
	sForm = sohan.makeForm(SH_NAME, "park");
	rForm = sohan.makeForm(RB_NAME, "sohan");
	pForm = sohan.makeForm(PD_NAME, "sohan");
	
	superSohan.executeForm(*sForm);
	superSohan.signForm(*sForm);
	superSohan.executeForm(*sForm);

	babySohan.signForm(*sForm);
	babySohan.executeForm(*sForm);

	normalSohan.signForm(*sForm);
	normalSohan.executeForm(*sForm);

	superSohan.signForm(*rForm);
	superSohan.executeForm(*rForm);
	
	babySohan.signForm(*rForm);
	babySohan.executeForm(*rForm);

	normalSohan.signForm(*rForm);
	normalSohan.executeForm(*rForm);
	
	superSohan.signForm(*pForm);
	superSohan.executeForm(*pForm);
	
	babySohan.signForm(*pForm);
	babySohan.executeForm(*pForm);

	normalSohan.signForm(*pForm);
	normalSohan.executeForm(*pForm);
	delete newForm;
	delete sForm;
	delete rForm;
	delete pForm;
}

int	main()
{
	//Form		f("form", 1, 1); //not working anymore
	internTest();
	system("leaks ex_03");
}
