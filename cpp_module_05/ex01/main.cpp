/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:09:55 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/14 14:27:17 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main()
{
	Form	form("x", 5, 100);
	Form	cForm(form);
	Form	aForm = form;

	std::cout << std::endl;
	std::cout << "form             --> " << form << std::endl;
	std::cout << "copy form        --> " << cForm << std::endl;
	std::cout << "assignement form --> " << aForm << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat	bure("kim", 10);
		form.beSigned(bure);
		bure.signForm(form);
		std::cout << std::endl;
		std::cout << form << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat	bure("kim", 3);
		form.beSigned(bure);
		bure.signForm(form);
		std::cout << form << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << '\n';
	}

	try
	{
		Bureaucrat	bure("kim", 0);
		form.beSigned(bure);
		bure.signForm(form);
		std::cout << form << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << "\n\n";
	}

	try
	{
		Bureaucrat	bure("kim", 160);
		form.beSigned(bure);
		bure.signForm(form);
		std::cout << form << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << "\n\n";
	}

	return 0;
}