/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:10:55 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/13 12:10:56 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Def"), _signed(false), _siGrade(1), _exGrade(150)
{
    return;
}

Form::Form(std::string const &name, const int siGrade, const int exGrade) : _name(name), _signed(false), _siGrade(siGrade), _exGrade(exGrade)
{
    if (_siGrade > 150 || _exGrade > 150)
        throw Form::GradeTooLowException();
    else if (_siGrade < 1 || _exGrade < 1)
        throw Form::GradeTooHighException();
}

Form::Form(const Form &src) : _name(src.getName()), _signed(src.getSign()), _siGrade(src.getSiGrade()), _exGrade(src.getExGrade())
{
    *this = src;
}

Form &Form::operator=(const Form &rhs)
{
    if (this != &rhs)
    {
        (std::string) this->_name = rhs.getName();
        this->_signed = rhs.getSign();
    }
    return *this;
}

Form::~Form()
{
    return;
}

std::string const &Form::getName() const
{
    return this->_name;
}

int const Form::getSiGrade() const
{
    return this->_siGrade;
}

int const Form::getExGrade() const
{
    return this->_exGrade;
}

bool Form::getSign() const
{
    return this->_signed;
}

void Form::beSigned(Bureaucrat const &b)
{
    try
    {
        if (b.getGrade() > this->getSiGrade())
            throw Form::GradeTooLowException();
        this->_signed = true;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception: " << e.what() << '\n';
    }
}

void Form::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > this->_siGrade)
        throw Form::GradeTooLowToSignException();
    else if (executor.getGrade() > this->_exGrade)
        throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, Form &f)
{
    if (f.getSign() == true)
        o << "Form " << f.getName() << ", signed: true(" << f.getSign()
          << "), grade required to execute it : " << f.getExGrade()
          << ", grade required to sign it: " << f.getSiGrade();
    else
        o << "Form " << f.getName() << ", signed: flase(" << f.getSign()
          << "), grade required to execute it : " << f.getExGrade()
          << ", grade required to sign it: " << f.getSiGrade();
    return o;
}