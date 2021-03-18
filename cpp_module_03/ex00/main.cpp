/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:08:54 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/18 12:47:55 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	attacker("X");
	FragTrap	enemy("Y");
	// FragTrap	attacker1;
	// FragTrap	enemy1;

	enemy.takeDamage(attacker.rangedAttack(enemy.getName()));	
	enemy.takeDamage(attacker.meleeAttack(enemy.getName()));		
	enemy.takeDamage(attacker.vaulthunter_dot_exe(enemy.getName()));
	enemy.takeDamage(attacker.vaulthunter_dot_exe(enemy.getName()));
	enemy.takeDamage(attacker.vaulthunter_dot_exe(enemy.getName()));
	enemy.takeDamage(attacker.vaulthunter_dot_exe(enemy.getName()));
	enemy.takeDamage(attacker.meleeAttack(enemy.getName()));	
	enemy.takeDamage(attacker.rangedAttack(enemy.getName()));

	// enemy.takeDamage(attacker.rangedAttack(enemy.getName()));
	// enemy.takeDamage(attacker.meleeAttack(enemy.getName()));
	// enemy.takeDamage(attacker.meleeAttack(enemy.getName()));
	// enemy.takeDamage(attacker.meleeAttack(enemy.getName()));
	// enemy.takeDamage(attacker.rangedAttack(enemy.getName()));
	// enemy.beRepaired(90);
	// std::cout << "-------------------------------------" << std::endl;

	// attacker1.setName("B");
	// enemy1.setName("W");
	// enemy1.takeDamage(attacker1.rangedAttack(enemy1.getName()));
	// enemy1.takeDamage(attacker1.meleeAttack(enemy1.getName()));
	// enemy1.takeDamage(attacker1.rangedAttack(enemy1.getName()));
	// enemy1.takeDamage(attacker1.rangedAttack(enemy1.getName()));
	// enemy1.beRepaired(50);

	// attacker.vaulthunter_dot_exe(enemy.getName());
	// attacker.vaulthunter_dot_exe(enemy.getName());
	// attacker.vaulthunter_dot_exe(enemy.getName());
	// attacker.vaulthunter_dot_exe(enemy.getName());
	// attacker.vaulthunter_dot_exe(enemy.getName());

	return (0);
}