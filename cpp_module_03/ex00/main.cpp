/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:08:54 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/20 18:35:40 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	abc("baga");
	FragTrap	xyz("babo");
	// FragTrap	abc1;
	// FragTrap	xyz1;

	xyz.takeDamage(abc.rangedAttack(xyz.getName()));
	xyz.takeDamage(abc.rangedAttack(xyz.getName()));

 	abc.takeDamage(xyz.rangedAttack(abc.getName()));
	abc.takeDamage(xyz.rangedAttack(abc.getName()));

	xyz.takeDamage(abc.vaulthunter_dot_exe(xyz.getName()));
	xyz.takeDamage(abc.rangedAttack(xyz.getName()));

	abc.takeDamage(xyz.vaulthunter_dot_exe(abc.getName()));
	abc.takeDamage(xyz.vaulthunter_dot_exe(abc.getName()));

	xyz.takeDamage(abc.vaulthunter_dot_exe(xyz.getName()));
	xyz.takeDamage(abc.meleeAttack(xyz.getName()));		

	abc.takeDamage(xyz.rangedAttack(abc.getName()));
	abc.takeDamage(xyz.vaulthunter_dot_exe(abc.getName()));
	abc.takeDamage(xyz.vaulthunter_dot_exe(abc.getName()));

	xyz.takeDamage(abc.meleeAttack(xyz.getName()));		
	xyz.beRepaired(50);
	xyz.takeDamage(abc.vaulthunter_dot_exe(xyz.getName()));
	xyz.takeDamage(abc.meleeAttack(xyz.getName()));		

	xyz.takeDamage(abc.meleeAttack(xyz.getName()));	

	
	return (0);
}