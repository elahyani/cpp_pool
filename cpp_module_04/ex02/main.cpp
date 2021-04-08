/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:24:06 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/08 18:42:20 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	// ISquad* test = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	vlc->push(NULL);
	vlc->push(jim);
	vlc->push(bob);

	std::cout << vlc->getCount() <<std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	// std::cout << std::endl;
	// std::cout << vlc->getCount() << std::endl;
	// std::cout << vlc->getUnit(0) << std::endl;
	// std::cout << vlc->getUnit(2) << std::endl;

	// std::cout << std::endl;
	// *((Squad*)(test)) = *((Squad*)(vlc));
	// std::cout << test->getCount() <<std::endl;
	// for (int i = 0; i < test->getCount(); ++i)
	// {
	// 	ISpaceMarine* curr = test->getUnit(i);
	// 	curr->battleCry();
	// 	curr->rangedAttack();
	// 	curr->meleeAttack();
	// }

	// std::cout << std::endl;
	// delete	vlc;
	// delete	test;
	// delete	bob;
	// delete	jim;
	return 0;
}

// still
// 	*	u stopped at (push) function of Squad class
// 	*	understand assignment operator for a class that contains a pointer to a (Interface) base class
//	*	