#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	protected:
		virtual void act() const;
	public:
		PresidentialPardonForm(std::string target = "default");
		PresidentialPardonForm(const PresidentialPardonForm &other);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
};