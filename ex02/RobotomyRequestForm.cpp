#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	:Form()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& ref)
	:Form(ref, SH_SIGN_GRADE, SH_EXEC_GRADE)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref)
	:Form(ref)
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref)
{
	if (this != &ref)
		Form::operator=(ref);
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor)
{
	std::ofstream	out;
	std::string filename("");

	filename = this->getName() + "_shrubbery";
	out.open(filename);
	if (out.fail())
		;
	
	std::string shrubbery = 
 "	              @@@@@@@,\n"
 "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
 "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
 "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
 "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
 "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
 "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
 "       |o|        | |         | |\n"
 "       |.|        | |         | |\n"
 "jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";
	out << shrubbery;
	out.close();
}
