#pragma once
#include <string>
#include <ostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	const std::string name;
	int grade;

	Bureaucrat();
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);
		const std::string &getName() const;
		int getGrade() const;
		void signForm(Form &f) const;
		void executeForm(Form const & form) const;
		void inc();
		void dec();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &brc);