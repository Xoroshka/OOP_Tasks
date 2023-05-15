#include <iostream>

#include "Person.hpp"

int main() {
    Person bob("Bob", 20);

    Person none;

    bob.say_hello();
    std::cout << "bob: name:" << bob.get_name() << " age:" << bob.get_age() << std::endl;

    none.say_hello();
    std::cout << "none: name:" << none.get_name() << " age:" << none.get_age() << std::endl;



    try {
        Person alice("Alice", 200);
    } catch (std::out_of_range &e) {
        std::clog << e.what() << std::endl;
    }

    try {
        bob.set_age(400);
    } catch (std::out_of_range &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Person without_name("", 10);
    } catch (std::logic_error &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        bob.set_name("");
    } catch (std::logic_error &e) {
        std::cerr << e.what() << std::endl;
    }




}