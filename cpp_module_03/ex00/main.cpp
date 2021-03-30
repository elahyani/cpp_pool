/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:08:54 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/30 11:20:29 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	baga("baga");
	FragTrap	babo("babo");

	while (!babo.isdead())
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
	}
	return (0);
}