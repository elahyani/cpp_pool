/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:08:54 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/21 19:24:30 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <unistd.h>

int	main()
{
	FragTrap	baga("baga");
	FragTrap	babo("babo");
	
	ScavTrap	luffy("luffy");
	ScavTrap	asta("asta");
	
	// while (!babo.isdead() && !asta.isdead())
	// {
	// 	if (!babo.isdead())
	// 		babo.takeDamage(baga.rangedAttack(babo.getName()));
	// 	if (!babo.isdead())
	// 		babo.takeDamage(baga.meleeAttack(babo.getName()));
	// 	if (!babo.isdead())
	// 		babo.takeDamage(baga.vaulthunter_dot_exe(babo.getName()));
	// 	if (!babo.isdead())
	// 		baga.takeDamage(babo.rangedAttack(baga.getName()));
	// 	if (!babo.isdead())
	// 		baga.takeDamage(babo.meleeAttack(baga.getName()));
	// 	if (!babo.isdead())
	// 		baga.takeDamage(babo.vaulthunter_dot_exe(baga.getName()));

	// 	if (!asta.isdead())
	// 		asta.takeDamage(luffy.rangedAttack(asta.getName()));
	// 	if (!asta.isdead())
	// 		asta.takeDamage(luffy.meleeAttack(asta.getName()));
	// 	if (!asta.isdead())
	// 		asta.challengeNewcomer(baga.getName());
		
	// }

	while (!babo.isdead() && !asta.isdead())
	{
		if (!babo.isdead() && !asta.isdead())
			asta.takeDamage(baga.rangedAttack(babo.getName()));
		sleep(1);
		if (!babo.isdead() && !asta.isdead())
			asta.takeDamage(babo.rangedAttack(baga.getName()));
		sleep(1);
		if (!babo.isdead() && !asta.isdead())
			asta.takeDamage(baga.rangedAttack(asta.getName()));
		sleep(1);
		if (!babo.isdead() && !asta.isdead())
			luffy.takeDamage(babo.meleeAttack(luffy.getName()));
		sleep(1);
		if (!babo.isdead() && !asta.isdead())
			babo.takeDamage(asta.meleeAttack(babo.getName()));
		sleep(1);
		if (!babo.isdead() && !asta.isdead())
			babo.takeDamage(luffy.rangedAttack(babo.getName()));
		sleep(1);
		if (!babo.isdead() && !asta.isdead())
			babo.takeDamage(asta.rangedAttack(babo.getName()));
		sleep(1);
		if (!babo.isdead() && !asta.isdead())
			babo.takeDamage(asta.rangedAttack(babo.getName()));
		sleep(1);
		if (!babo.isdead() && !asta.isdead())
			asta.takeDamage(baga.vaulthunter_dot_exe(asta.getName()));
		sleep(1);
		if (!babo.isdead() && !asta.isdead())
			asta.challengeNewcomer(baga.getName());
		sleep(1);
		if (!babo.isdead() && !asta.isdead())
			luffy.takeDamage(babo.vaulthunter_dot_exe(luffy.getName()));
		sleep(1);
	}
	
	

	return (0);
}