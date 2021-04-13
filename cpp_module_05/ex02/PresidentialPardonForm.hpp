/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:10:27 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/13 12:10:28 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    PresidentialPardonForm();

public:
    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(const PresidentialPardonForm &src);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
    virtual ~PresidentialPardonForm();

    void execute(Bureaucrat const &executor) const;
    void takeAction(Bureaucrat const &) const;
};

#endif