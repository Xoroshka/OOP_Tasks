#include <string>
#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &) {}

Intern &Intern::operator=(const Intern &) { return *this; }

static Form	*makePresidential(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static Form	*makeRobotomy(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeForm(std::string class_name, std::string target)
{
	Form *(*form[])(const std::string target)
		= {&makePresidential, &makeRobotomy, &makeShrubbery};
	const std::string name[] 
		= {  "presidential pardon", "robotomy request", "shrubbery creation", };
	for (int i = 0; i < 3; ++i)
	{
		if (class_name == name[i])
		{
			std::cout << "Intern creates " << class_name << std::endl;
			return form[i](target);
		}
	}
	std::cout << "Intern can't create a form called " << class_name << std::endl;
	return nullptr;
}
