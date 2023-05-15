#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	protected:
		virtual void act() const;
	public:
		RobotomyRequestForm(std::string target = "default");
		RobotomyRequestForm(const RobotomyRequestForm &other);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
};