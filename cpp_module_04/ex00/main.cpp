/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 14:44:46 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/12 15:16:47 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Krueger.hpp"

int	main()
{
	// Sorcerer hel;
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Krueger	jane("Jane");
	std::cout << std::endl;

	std::cout << robert << jim << joe << jane;
	std::cout << std::endl;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(jane);

	std::cout << "-----------------------------\n";
	std::cout << robert.getName() << std::endl;
	std::cout << robert.getTitle() << std::endl;
	robert.introduce();

	std::cout << "-----------------------------\n";
	std::cout << jim.getName() << std::endl;
	jim.getPolymorphed();
	jim.introduce();

	std::cout << "-----------------------------\n";
	std::cout << joe.getName() << std::endl;
	joe.getPolymorphed();
	joe.introduce();
	
	std::cout << "-----------------------------\n";
	std::cout << jane.getName() << std::endl;
	jane.getPolymorphed();
	jane.introduce();

	std::cout << "-----------------------------\n";
	return 0;
}