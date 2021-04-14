/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:11:11 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/14 15:22:25 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;

	{
		Form *ppf = someRandomIntern.makeForm("presidential pardon", "Bender");

		std::cout << *ppf << '\n';
		delete ppf;
		std::cout << std::endl;
	}

	{
		Form *rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		std::cout << *rrf << '\n';
		delete rrf;
		std::cout << std::endl;
	}

	{
		Form *scf = someRandomIntern.makeForm("shrubbery creation", "Bender");

		std::cout << *scf << '\n';
		delete scf;
		std::cout << std::endl;
	}

	{
		Form *nef = someRandomIntern.makeForm("non exist", "Bender");

		delete nef;
		std::cout << std::endl;
	}
	return 0;
}