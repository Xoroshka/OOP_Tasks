#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()  : name("default"), grade(150){}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}
Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade){
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}
Bureaucrat::~Bureaucrat() {}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	grade = other.grade;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	return *this;
}

const std::string &Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::signForm(Form &f) const
{
	try {
		f.beSigned(*this);
	} catch (std::exception &e) {
		std::cout << name << " couldn’t sign "
			<< f.getName() << " because "
			<< e.what() << std::endl;
		return;
	}
	std::cout << name << " signed "
		<< f.getName() << std::endl;
}

void Bureaucrat::executeForm(Form const &f) const
{
	try {
		f.execute(*this);
	} catch (std::exception &e) {
		std::cout << name << " couldn’t execute "
			<< f.getName() << " because "
			<< e.what() << std::endl;
		return;
	}
	std::cout << name << " executed "
		<< f.getName() << std::endl;
}

void Bureaucrat::inc()
{
	if (grade <= 1)
		throw GradeTooHighException();
	--grade;
}

void Bureaucrat::dec()
{
	if (grade >= 150)
		throw GradeTooLowException();
	++grade;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &brc)
{
	out << brc.getName() << ", bureaucrat grade "
		<< brc.getGrade() << ".";
	return out;
}