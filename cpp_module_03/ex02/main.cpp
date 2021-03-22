/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:08:54 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/22 13:25:37 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main()
{
	FragTrap	baga("baga");
	FragTrap	babo("babo");
	
	ScavTrap	luffy("luffy");
	ScavTrap	asta("asta");

	while (!babo.isdead() && !asta.isdead())
	{
		if (!babo.isdead())
			babo.takeDamage(baga.rangedAttack(babo.getName()));
		usleep(300000);
		if (!babo.isdead())
			babo.takeDamage(baga.meleeAttack(babo.getName()));
		usleep(300000);
		if (!babo.isdead())
			babo.takeDamage(baga.vaulthunter_dot_exe(babo.getName()));
		usleep(300000);
		if (!babo.isdead())
			baga.takeDamage(babo.rangedAttack(baga.getName()));
		usleep(300000);
		if (!babo.isdead())
			baga.takeDamage(babo.meleeAttack(baga.getName()));
		usleep(300000);
		if (!babo.isdead())
			baga.takeDamage(babo.vaulthunter_dot_exe(baga.getName()));
		usleep(300000);
		if (!asta.isdead())
			asta.takeDamage(luffy.rangedAttack(asta.getName()));
		usleep(300000);
		if (!asta.isdead())
			asta.takeDamage(luffy.meleeAttack(asta.getName()));
		usleep(300000);
		if (!asta.isdead())
			asta.challengeNewcomer(baga.getName());
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			asta.takeDamage(baga.rangedAttack(babo.getName()));
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			asta.takeDamage(babo.rangedAttack(baga.getName()));
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			asta.takeDamage(baga.rangedAttack(asta.getName()));
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			luffy.takeDamage(babo.meleeAttack(luffy.getName()));
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			babo.takeDamage(asta.meleeAttack(babo.getName()));
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			babo.takeDamage(luffy.rangedAttack(babo.getName()));
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			babo.takeDamage(asta.rangedAttack(babo.getName()));
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			babo.takeDamage(asta.rangedAttack(babo.getName()));
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			asta.takeDamage(baga.vaulthunter_dot_exe(asta.getName()));
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			asta.challengeNewcomer(baga.getName());
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			luffy.takeDamage(babo.vaulthunter_dot_exe(luffy.getName()));
	}

	// FragTrap *p = new FragTrap("moha");
	// ClapTrap v("hello");
	// ClapTrap c("hello");

	// v.takeDamage(c.rangedAttack(v.getName()));
	// FragTrap v("moha");
	// FragTrap c("ayoub");
	// v.takeDamage(c.rangedAttack(v.getName()));
	// ClapTrap *g = c;

	// std::cout << c->getName() << std::endl;
	return (0);
}