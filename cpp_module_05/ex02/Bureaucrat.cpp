#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    return;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade)
{
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
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

void Bureaucrat::setGrade(int g)
{
    if (g < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (g > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = g;
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

void Bureaucrat::signForm(Form const &f) const
{
    if (f.getSign() == true)
        std::cout << "<" << this->getName() << "> sign <" << f.getName() << ">" << std::endl;
    else
        std::cout << "<" << this->getName() << "> cannot sign <"
                  << f.getName() << "> because " << this->getName()
                  << "'s grade is not high enough" << std::endl;
}

void Bureaucrat::executeForm(Form const &form)
{
    if (this->getGrade() <= form.getExGrade())
        std::cout << "<" << this->getName() << "> execute <" << form.getName() << ">" << std::endl;
    else
        throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &b)
{
    o << "<" << b.getName() << ">, bureaucrat grade <" << b.getGrade() << ">.";
    return o;
}
