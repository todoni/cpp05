#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	shrubberyTest(void)
{
		Bureaucrat	administor("admin", 5);
		Bureaucrat	manager("manager", 25);
		Bureaucrat	senior("senior", 45);
		Bureaucrat	junior("junior", 72);
		Bureaucrat	staff("staff", 137);
		Bureaucrat	freshman("freshman", 145);

		Form *shr = new ShrubberyCreationForm("shr");
		administor.signForm(*shr);
		manager.signForm(*shr);
		senior.signForm(*shr);
		junior.signForm(*shr);
		staff.signForm(*shr);
		freshman.signForm(*shr);
		
		administor.executeForm(*shr);
		manager.executeForm(*shr);
		senior.executeForm(*shr);
		junior.executeForm(*shr);
		staff.executeForm(*shr);
		freshman.executeForm(*shr);
		delete shr;
}

void	robotomyTest(void)
{
		Bureaucrat	administor("admin", 5);
		Bureaucrat	manager("manager", 25);
		Bureaucrat	senior("senior", 45);
		Bureaucrat	junior("junior", 72);
		Bureaucrat	staff("staff", 137);
		Bureaucrat	freshman("freshman", 145);

		Form *rob = new RobotomyRequestForm("sohan");
		administor.signForm(*rob);
		manager.signForm(*rob);
		senior.signForm(*rob);
		junior.signForm(*rob);
		staff.signForm(*rob);
		freshman.signForm(*rob);
		
		administor.executeForm(*rob);
		manager.executeForm(*rob);
		senior.executeForm(*rob);
		junior.executeForm(*rob);
		staff.executeForm(*rob);
		freshman.executeForm(*rob);
		delete rob;
}

void	presidentialTest(void)
{
		Bureaucrat	administor("admin", 5);
		Bureaucrat	manager("manager", 25);
		Bureaucrat	senior("senior", 45);
		Bureaucrat	junior("junior", 72);
		Bureaucrat	staff("staff", 137);
		Bureaucrat	freshman("freshman", 145);

		Form *pre = new PresidentialPardonForm("sohan");
		administor.signForm(*pre);
		manager.signForm(*pre);
		senior.signForm(*pre);
		junior.signForm(*pre);
		staff.signForm(*pre);
		freshman.signForm(*pre);
		
		administor.executeForm(*pre);
		manager.executeForm(*pre);
		senior.executeForm(*pre);
		junior.executeForm(*pre);
		staff.executeForm(*pre);
		freshman.executeForm(*pre);
		delete pre;
}

void	formNotSignedTest(void)
{
	Bureaucrat	b("sohan", 1);
	Form *shr = new ShrubberyCreationForm("shr");
		b.executeForm(*shr);
	delete shr;
}

int	main()
{
	//Form		f("form", 1, 1); //not working anymore
	std::cout << "======================Shrubbery Test======================" << std::endl;
	shrubberyTest();
	std::cout << std::endl;
	std::cout << "======================Robotomy Test=======================" << std::endl;
	robotomyTest();
	std::cout << std::endl;
	std::cout << "=====================Presidential Test=====================" << std::endl;
	presidentialTest();
	std::cout << std::endl;
	std::cout << "====================FormNotSigned Test=====================" << std::endl;
	formNotSignedTest();
	std::cout << std::endl;
	system("leaks ex_02");
}
