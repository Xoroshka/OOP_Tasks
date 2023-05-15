CC := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -MMD

SRC := \
Bureaucrat.cpp \
Form.cpp \
Intern.cpp \
PresidentialPardonForm.cpp \
RobotomyRequestForm.cpp \
ShrubberyCreationForm.cpp \
main.cpp

main: $(SRC:.cpp=.o)

clean:
	$(RM) $(SRC:.cpp=.o) $(SRC:.cpp=.d)

fclean: clean
	$(RM) main

re: fclean main