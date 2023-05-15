#pragma once
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	protected:
		virtual void act() const;
	public:
		ShrubberyCreationForm(std::string target = "default");
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
};