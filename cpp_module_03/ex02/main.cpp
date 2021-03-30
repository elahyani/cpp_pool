/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:08:54 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/30 11:27:18 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main()
{
	FragTrap	babo("babo");
	ScavTrap	asta("asta");

	while (!babo.isdead() && !asta.isdead())
	{
		if (!babo.isdead() && !asta.isdead())
			babo.takeDamage(asta.rangedAttack(babo.getName()));
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			babo.takeDamage(asta.meleeAttack(babo.getName()));
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			asta.challengeNewcomer(babo.getName());
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			asta.takeDamage(babo.vaulthunter_dot_exe(asta.getName()));
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			asta.takeDamage(babo.rangedAttack(asta.getName()));
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			asta.takeDamage(babo.meleeAttack(asta.getName()));
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			asta.takeDamage(babo.vaulthunter_dot_exe(asta.getName()));
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			asta.challengeNewcomer(babo.getName());
	}
	return (0);
}
