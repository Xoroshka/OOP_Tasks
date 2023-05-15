#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"

void caret(std::string msg)
{
	const char c = '~';
	std::cout << "\n" << std::string(60, c) << "\n"
	<< msg << "\n" << std::string(60, c) << "\n";
}

int main()
{
	const std::string form_name[] = { "robotomy request",
							"shrubbery creation",
							"presidential pardon" };

	srand( time(0) );

	caret("wrong name, fail");
	{
		Intern intern;
		Form *ptr;
		
		ptr = intern.makeForm("a", "b");
		ptr = intern.makeForm("c", "d");
	}

	caret("name exist, success");
	{
		Bureaucrat JimmyMcGill("Jimmy McGill", 150);
		Bureaucrat SaulGoodman("Saul Goodman", 1);
		Intern intern;
		Form *ptr_a, *ptr_b, *ptr_c;

		ptr_a = intern.makeForm(form_name[0], "A");
		ptr_b = intern.makeForm(form_name[1], "B");
		ptr_c = intern.makeForm(form_name[2], "C");
		
		JimmyMcGill.signForm(*ptr_a);
		JimmyMcGill.signForm(*ptr_b);
		JimmyMcGill.signForm(*ptr_c);
		JimmyMcGill.executeForm(*ptr_a);
		JimmyMcGill.executeForm(*ptr_b);
		JimmyMcGill.executeForm(*ptr_c);

		std::cout << std::endl;

		SaulGoodman.signForm(*ptr_a);
		SaulGoodman.signForm(*ptr_b);
		SaulGoodman.signForm(*ptr_c);
		JimmyMcGill.executeForm(*ptr_a);
		JimmyMcGill.executeForm(*ptr_b);
		JimmyMcGill.executeForm(*ptr_c);

		std::cout << std::endl;

		SaulGoodman.executeForm(*ptr_a);
		SaulGoodman.executeForm(*ptr_b);
		SaulGoodman.executeForm(*ptr_c);

		delete ptr_a;
		delete ptr_b;
		delete ptr_c;
	}
}
