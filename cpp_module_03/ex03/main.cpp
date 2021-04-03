/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:08:54 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/02 09:35:07 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int	main()
{
	FragTrap	babo("babo");
	ScavTrap	asta("asta");
	ClapTrap	*tanjiro = new FragTrap("tanjiro");
	NinjaTrap	leibe("leibe");
	NinjaTrap	yami("yami");

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
		usleep(300000);
		if (!babo.isdead() && !asta.isdead())
			asta.beRepaired(20);
		usleep(300000);
	}
	std::cout << "\n-------------------------------------------------------\n" << std::endl;
	leibe.ninjaShoebox(babo);
	usleep(300000);
	leibe.ninjaShoebox(asta);
	usleep(300000);
	leibe.ninjaShoebox(*tanjiro);
	usleep(300000);
	leibe.ninjaShoebox(yami);
	return (0);
}