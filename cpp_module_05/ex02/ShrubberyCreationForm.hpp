#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "fstream"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{

private:
    ShrubberyCreationForm();

public:
    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
    virtual ~ShrubberyCreationForm();

    void execute(Bureaucrat const &executor) const;
    void takeAction(Bureaucrat const &b) const;
};

#endif