/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 18:15:29 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/12 15:22:12 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int		main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();
	Enemy* e = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	std::cout << std::endl;
	std::cout << "weapon name: " << pr->getName() << " | "
			  << "damage: " << pr->getDamage() << " | "
			  << "Action points: " << pr->getAPCost() << std::endl;
	std::cout << "weapon name: " << pf->getName() << " | "
			  << "damage: " << pf->getDamage() << " | "
			  << "Action points: " << pf->getAPCost() << std::endl;
	std::cout << std::endl;
	std::cout << "Enemy type: " << b->getType() << " | "
			  << "Enamy HP: " << b->getHP() << std::endl;
	std::cout << std::endl;
	std::cout << "Enemy type: " << e->getType() << " | "
			  << "Enamy HP: " << e->getHP() << std::endl;
	e->takeDamage(pr->getDamage());
	e->takeDamage(pf->getDamage());
	std::cout << "Enemy type: " << e->getType() << " | "
			  << "Enamy HP: " << e->getHP() << std::endl;
	std::cout << std::endl;

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	std::cout << std::endl;
	delete	me;
	if (me->isDead != 1)
		delete	b;
	delete	e;
	delete	pr;
	delete	pf;

	return 0;
}