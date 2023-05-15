CXX:=clang++
CC:=clang++
CXXFLAGS:= --std=c++17

.DEFAULT_GOAL:= run

main.o: main.cpp Person.hpp

Person.o: Person.cpp

main: main.o Person.o

clean:
	$(RM) main.o Person.o

fclean: clean
	$(RM) main

re: fclean main