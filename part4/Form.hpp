#pragma once
#include <string>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	const std::string name;
	const std::string target;
	const int sign;
	const int exec;
	bool is_signed;

	Form();
	protected:
		virtual void act() const = 0;
	public:
		class GradeTooHighException : public std::out_of_range
		{
			public:
				GradeTooHighException();
		};
		class GradeTooLowException : public std::out_of_range
		{
			public:
				GradeTooLowException();
		};
		class NotSignedException : public std::logic_error
		{
			public:
				NotSignedException();
		};
		Form(std::string name, std::string target, int sign_grade, int exec_grade);
		Form(const Form &other);
		virtual ~Form();
		Form &operator=(const Form &other);
		const std::string &getName() const;
		const std::string &getTarget() const;
		int getSignGrade() const;
		int getExecGrade() const;
		bool getSigned() const;
		void beSigned(const Bureaucrat &signer);
		void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &out, const Form &obj);