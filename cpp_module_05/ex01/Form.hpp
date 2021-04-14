/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:09:51 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/14 14:18:20 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{

private:
    const std::string _name;
    bool _signed;
    const int _siGrade;
    const int _exGrade;
    Form();

public:
    Form(std::string const &name, const int siGrade, const int exGrade);
    Form(const Form &);
    Form &operator=(const Form &);
    ~Form();

    std::string const &getName() const;
    int getSiGrade() const;
    int getExGrade() const;
    bool getSign() const;

    void beSigned(Bureaucrat const &b);

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, Form &f);

#endif