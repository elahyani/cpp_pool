/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:10:31 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/13 12:10:33 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Def", 72, 45)
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("Robotomy request", 72, 45)
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    Form::operator=(rhs);
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return;
}

void RobotomyRequestForm::takeAction(Bureaucrat const &b) const
{
    srand(clock());
    std::cout << "bzz zz bz zzzz trrrr rrr rr r rrrrrrr" << std::endl;
    if (rand() % 2 == 1)
        std::cout << "<" << b.getName() << "> has been robotomized successfully." << std::endl;
    else
        std::cout << "<" << b.getName() << "> has been failure to robotomized." << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{

    Form::execute(executor);
    this->takeAction(executor);
}