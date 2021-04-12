#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>

#include "Form.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern &src);
    Intern &operator=(const Intern &rhs);
    ~Intern();

    Form *makeForm(std::string const &name, std::string const &target);
    Form *president(std::string const &);
    Form *rorbotmy(std::string const &);
    Form *shrubbery(std::string const &);
};

#endif