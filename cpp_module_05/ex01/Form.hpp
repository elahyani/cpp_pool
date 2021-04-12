#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{

private:
    const std::string   _name;
    bool                _signed;
    const int           _siGrade;
    const int           _exGrade;
    Form();

public:
    Form(std::string const & name, const int siGrade, const int exGrade);
    Form(const Form &);
    Form&   operator=(const Form &);
    ~Form();

    std::string const & getName() const;
    int const getSiGrade() const;
    int const getExGrade() const;
    bool    getSign() const;

    void    beSigned(Bureaucrat const & b);

    class   GradeTooHighException : public std::exception
    {
        public:
            GradeTooHighException(){}
            ~GradeTooHighException(){}
            virtual const char * what() const throw()
            {
            return "Grade too high!";
            }
    };
    class   GradeTooLowException : public std::exception
    {
        public:
            GradeTooLowException(){}
            ~GradeTooLowException(){}
            virtual const char* what() const throw()
            {
            return "Grade too low!";
            }
    };
};

std::ostream&   operator<<(std::ostream& o, Form& f);


#endif