#include <string>
#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("presidential_pardon", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	: Form(other) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	(void)other;
	return *this;
}

void PresidentialPardonForm::act() const
{
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." 
	<< std::endl;
}
