/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:10:38 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/14 14:53:47 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Def", 145, 137)
{
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("Shrubbery creation", 145, 137), _target(target)
{
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    Form::operator=(rhs);
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return;
}

void ShrubberyCreationForm::takeAction(std::string const &target) const
{
    std::ofstream os(target + "_shrubbery");

    if (os.fail())
    {
        std::cout << "Error: the file failed to open." << std::endl;
        os.clear();
    }

    os << "                                                        ." << std::endl;
    os << "                                          .         ;" << std::endl;
    os << "             .              .              ;%     ;;" << std::endl;
    os << "               ,           ,                :;%  %;" << std::endl;
    os << "                :         ;                   :;%;'     .," << std::endl;
    os << "       ,.        %;     %;            ;        %;'    ,;" << std::endl;
    os << "         ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    os << "          %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
    os << "           ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    os << "            `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    os << "             `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
    os << "                `:%;.  :;bd%;          %;@%;'" << std::endl;
    os << "                  `@%:.  :;%.         ;@@%;'" << std::endl;
    os << "                    `@%.  `;@%.      ;@@%;" << std::endl;
    os << "                      `@%%. `@%%    ;@@%;" << std::endl;
    os << "                        ;@%. :@%%  %@@%;" << std::endl;
    os << "                          %@bd%%%bd%%:;" << std::endl;
    os << "                            #@%%%%%:;;" << std::endl;
    os << "                            %@@%%%::;" << std::endl;
    os << "                            %@@@%(o);  . '" << std::endl;
    os << "                            %@@@o%;:(.,'" << std::endl;
    os << "                        `.. %@@@o%::;" << std::endl;
    os << "                           `)@@@o%::;" << std::endl;
    os << "                            %@@(o)::;" << std::endl;
    os << "                           .%@@@@%::;" << std::endl;
    os << "                           ;%@@@@%::;." << std::endl;
    os << "                          ;%@@@@%%:;;;." << std::endl;
    os << "                      ...;%@@@@@%%:;;;;,.." << std::endl;
    os << std::endl;
    os.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    this->takeAction(this->_target);
}