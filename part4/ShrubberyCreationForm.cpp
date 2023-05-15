#include <string>
#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("shrubbery_creation", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: Form(other) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	(void)other;
	return *this;
}

void ShrubberyCreationForm::act() const
{
	const std::string filename = getTarget() + "_shrubbery";
	std::ofstream ofs(filename.c_str(), std::ios::out | std::ios::trunc);
	std::string tree = "\n \
                                              .         ;\n\
                 .              .              ;%     ;;\n\
                   ,           ,                :;%  %;\n\
                    :         ;                   :;%;'     .,\n\
           ,.        %;     %;            ;        %;'    ,;\n\
             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
              %;       %;%;      ,  ;       %;  ;%;   ,%;'\n\
               ;%;      %;        ;%;        % ;%;  ,%;'\n\
                `%;.     ;%;     %;'         `;%%;.%;'\n\
                 `:;%.    ;%%. %@;        %; ;@%;%'\n\
                    `:%;.  :;bd%;          %;@%;'\n\
                      `@%:.  :;%.         ;@@%;'\n\
                        `@%.  `;@%.      ;@@%;\n\
                          `@%%. `@%%    ;@@%;\n\
                            ;@%. :@%%  %@@%;\n\
                              %@bd%%%bd%%:;\n\
                                #@%%%%%:;;\n\
                                %@@%%%::;\n\
                                %@@@%(o);  . '\n\
                                %@@@o%;:(.,'\n\
                            `.. %@@@o%::;\n\
                               `)@@@o%::;\n\
                                %@@(o)::;\n\
                               .%@@@@%::;\n\
                               ;%@@@@%::;.\n\
                              ;%@@@@%%:;;;.\n\
                          ...;%@@@@@%%:;;;;,..\n";
	ofs << tree << std::endl;
	ofs.close();
	std::cout << filename << " created" << std::endl;
}