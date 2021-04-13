/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:11:02 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/13 12:11:03 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &src)
{
    *this = src;
}

Intern &Intern::operator=(const Intern &rhs)
{
    return *this;
}

Intern::~Intern()
{
}

Form *Intern::president(std::string const &target)
{
    return new PresidentialPardonForm(target);
}
Form *Intern::rorbotmy(std::string const &target)
{
    return new RobotomyRequestForm(target);
}
Form *Intern::shrubbery(std::string const &target)
{
    return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(std::string const &name, std::string const &target)
{
    std::string formType[3] = {
        "presidential pardon",
        "robotomy request",
        "shrubbery creation"};

    Form *formList[3] = {
        new PresidentialPardonForm(target),
        new RobotomyRequestForm(target),
        new ShrubberyCreationForm(target)};

    for (int i = 0; i <= 2; i++)
    {
        if (formType[i] == name)
        {
            for (int j = 0; j <= 2; j++)
            {
                if (formType[j] != name)
                    delete formList[j];
            }
            std::cout << "Intern creats <" << formType[i] << ">" << std::endl;
            return formList[i];
        }
    }
    for (int j = 0; j <= 2; j++)
    {
        delete formList[j];
    }
    std::cout << "No matching form to create!" << std::endl;
    return NULL;
}