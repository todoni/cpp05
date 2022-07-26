#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
		Bureaucrat	b("sohan", 1);
		Form		f("form", 1, 1);
		std::cout << f << std::endl;
		b.signForm(f);
		std::cout << f << std::endl;

		Bureaucrat	b2("sohan2", 5);
		Form		f2("form2", 1, 1);
		b2.signForm(f2);
		b2.increaseGrade();
		b2.increaseGrade();
		b2.increaseGrade();
		b2.increaseGrade();
		//b.increaseGrade();
		b2.signForm(f2);
		b2.decreaseGrade();
		b2.signForm(f2);
		Form	f3;
		std::cout << f3 << std::endl;
}
