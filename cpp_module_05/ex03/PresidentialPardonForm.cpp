/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:10:24 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/14 15:05:40 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Def", 25, 5)
{
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("President pardon", 25, 5), _target(target)
{
    return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    Form::operator=(rhs);
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return;
}

void PresidentialPardonForm::takeAction(std::string const &target) const
{
    std::cout << "<" << target << "> has been pardoned by Zafod Beeblebrox" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{

    Form::execute(executor);
    this->takeAction(this->_target);
}