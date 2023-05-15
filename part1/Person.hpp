#pragma once

#include <string>


class Person {
    std::string name_;
    unsigned    age_;

    public:
    Person(std::string &&name, unsigned age);
    Person(const std::string &name, unsigned age);
    Person();
    ~Person() = default;

    void set_name(std::string &&name);
    void set_name(const std::string &name);
    const std::string &get_name() const;

    void set_age(unsigned age);
    int get_age() const;

    void say_hello() const;
};

