#include "Person.hpp"

#include <exception>
#include <iostream>
    
    Person::Person()
    : name_{"NoName"}
    , age_{0}
    {}

    Person::Person(std::string &&name, unsigned age)
    : name_{name}
    , age_{age}
    {
        if (age > 100)
            throw std::out_of_range("Too high age!");
        if (name.empty())
            throw std::logic_error("Name can't be empty!");
    } 
    Person::Person(const std::string &name, unsigned age)
    : name_{name}
    , age_{age}
    {
        if (age > 100)
            throw std::out_of_range("Too high age!");
        if (name.empty())
            throw std::logic_error("Name can't be empty!");
    }

    void Person::set_name(std::string &&name)
    {
        if (name.empty())
            throw std::logic_error("Name can't be empty!");
        name_ = name;
    }
    void Person::set_name(const std::string &name)
    {
        if (name.empty())
            throw std::logic_error("Name can't be empty!");
        name_ = name;
    }
    const std::string &Person::get_name() const
    {
        return name_;
    }

    void Person::set_age(unsigned age)
    {
        if (age > 100)
            throw std::out_of_range("Too high age!");
        age_ = age;
    }
    int Person::get_age() const
    {
        return age_;
    }

    void Person::say_hello() const
    {
        std::cout << "Hello, my name is " << name_ << ". I'm " << age_ << " years old." << std::endl;
    }