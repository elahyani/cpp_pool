/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:24:06 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/12 17:17:58 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;

	Squad *vlc = new Squad;

	vlc->push(jim);
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(NULL);
	vlc->push(bob);
	vlc->push(NULL);
	std::cout << std::endl;

	std::cout << vlc->getCount() << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	Squad cp(*vlc);
	std::cout << std::endl;
	std::cout << cp.getCount() << std::endl;
	for (int i = 0; i < cp.getCount(); ++i)
	{
		ISpaceMarine *c = cp.getUnit(i);
		c->battleCry();
		c->rangedAttack();
		c->meleeAttack();
	}
	std::cout << std::endl;
	delete vlc;
	return 0;
}