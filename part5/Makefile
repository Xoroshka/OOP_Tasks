CC := c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++98 -MMD

SRC := main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

main: $(SRC:.cpp=.o)

clean:
	$(RM) $(SRC:.cpp=.o) $(SRC:.cpp=.d)

fclean: clean
	$(RM) main

re: fclean main

-include $(SRC:.cpp=.d)