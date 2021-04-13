/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:11:35 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/13 12:11:36 by elahyani         ###   ########.fr       */
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

public:
    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
    virtual ~ShrubberyCreationForm();

    void execute(Bureaucrat const &executor) const;
    void takeAction(Bureaucrat const &b) const;
};

#endif