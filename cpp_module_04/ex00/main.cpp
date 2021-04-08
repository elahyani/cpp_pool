/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 14:44:46 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/08 12:10:34 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int	main()
{
	// Sorcerer hel;
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

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
	return 0;
}