#pragma once
#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

class Form;

class Intern {
	public:
		Intern();
		~Intern();
		Intern(const Intern &);
		Intern &operator=(const Intern &);

		static Form *makeForm(std::string, std::string);
};

#endif
