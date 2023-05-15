CC := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -MMD

SRC := main.cpp Fixed.cpp Point.cpp bsp.cpp

main: $(SRC:.cpp=.o)

clean:
	$(RM) $(SRC:.cpp=.o)
	$(RM) $(SRC:.cpp=.d)

fclean: clean
	$(RM) main

re: fclean main