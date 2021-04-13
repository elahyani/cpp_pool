/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:11:27 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/13 12:11:28 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{

private:
    RobotomyRequestForm();

public:
    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(const RobotomyRequestForm &src);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
    virtual ~RobotomyRequestForm();

    void execute(Bureaucrat const &executor) const;
    void takeAction(Bureaucrat const &b) const;
};

#endif