#include <string>
#include <iostream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("robotomy_request", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: Form(other) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	(void)other;
	return *this;
}

void RobotomyRequestForm::act() const
{
	std::cout << "WHRRRRRRRRRRRRRRRRRRRRR...\n";
	if (rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << "robotomy failed" << std::endl;
}