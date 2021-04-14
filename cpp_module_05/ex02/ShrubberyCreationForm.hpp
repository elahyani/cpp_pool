/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:10:42 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/14 15:07:08 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "fstream"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{

private:
    ShrubberyCreationForm();
    std::string _target;

public:
    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
    virtual ~ShrubberyCreationForm();

    void execute(Bureaucrat const &) const;
    void takeAction(std::string const &) const;
};

#endif