#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    return;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
    return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_grade = rhs.getGrade();
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    return;
}

std::string const &Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade()
{
    this->_grade--;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    this->_grade++;
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &b)
{
    o << "<" << b.getName() << ">, bureaucrat grade <" << b.getGrade() << ">.";
    return o;
}
