#include <string>
#include <iostream>
#include "Form.hpp"

Form::Form() : name("default"), target("default"), sign(150), exec(150), is_signed(false) {}

Form::Form(std::string name, std::string target, int sign, int exec)
	: name(name), target(target), sign(sign), exec(exec), is_signed(false)
{
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw GradeTooLowException();
}
Form::Form(const Form &other)
	: name(other.name), target(other.target), sign(other.sign), exec(other.exec), is_signed(false)
{
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw GradeTooLowException();
}
Form::~Form() {}

Form::GradeTooHighException::GradeTooHighException()
	: std::out_of_range("Grade is too high!") {}
// const char *Form::GradeTooHighException::what() const throw()
// {
// 	return "Grade is too high!";
// }

Form::GradeTooLowException::GradeTooLowException()
	: std::out_of_range("Grade is too low!") {}
// const char *Form::GradeTooLowException::what() const throw()
// {
// 	return "Grade is too low!";
// }

Form::NotSignedException::NotSignedException()
	: std::logic_error("Form is not signed!") {}
// const char *Form::NotSignedException::what() const throw()
// {
// 	return "Form is not signed!";
// }

Form &Form::operator=(const Form &other)
{
	if (sign < other.sign)
		GradeTooLowException();
	is_signed = other.is_signed;
	return *this;
}

const std::string &Form::getName() const
{
	return name;
}

const std::string &Form::getTarget() const
{
	return target;
}

int Form::getSignGrade() const
{
	return sign;
}

int Form::getExecGrade() const
{
	return exec;
}

bool Form::getSigned() const
{
	return is_signed;
}

void Form::beSigned(const Bureaucrat &signer)
{
	if (sign < signer.getGrade())
		throw GradeTooLowException();
	is_signed = true;
}

void Form::execute(const Bureaucrat &executor) const
{
	if (!is_signed)
		throw NotSignedException();
	if (exec < executor.getGrade())
		throw GradeTooLowException();
	act();
}

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
	os << obj.getName()
	<< (obj.getSigned() ? " is signed" : " is not signed")
	<< ", grade requirement to sign " << obj.getSignGrade()
	<< ", grade requirement to execute " << obj.getExecGrade();
	return os;
}