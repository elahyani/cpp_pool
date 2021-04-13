/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:10:59 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/13 12:11:00 by elahyani         ###   ########.fr       */
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
	virtual ~Form();

	std::string const &getName() const;
	int const getSiGrade() const;
	int const getExGrade() const;
	bool getSign() const;

	void beSigned(Bureaucrat const &b);

	virtual void execute(Bureaucrat const &executor) const;
	virtual void takeAction(Bureaucrat const &) const = 0;

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException() {}
		~GradeTooHighException() {}
		virtual const char *what() const throw()
		{
			return "Grade too high!";
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException() {}
		~GradeTooLowException() {}
		virtual const char *what() const throw()
		{
			return "Grade too low!";
		}
	};
	class GradeTooLowToSignException : public std::exception
	{
	public:
		GradeTooLowToSignException() {}
		~GradeTooLowToSignException() {}
		virtual const char *what() const throw()
		{
			return "Grade too low te be signed!";
		}
	};
};

std::ostream &operator<<(std::ostream &o, Form &f);

#endif