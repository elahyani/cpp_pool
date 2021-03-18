/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:08:54 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/18 18:23:32 by elahyani         ###   ########.fr       */
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
	enemy.takeDamage(attacker.rangedAttack(enemy.getName()));
	enemy.takeDamage(attacker.rangedAttack(enemy.getName()));
	enemy.takeDamage(attacker.meleeAttack(enemy.getName()));		
	enemy.takeDamage(attacker.meleeAttack(enemy.getName()));		
	enemy.beRepaired(50);
	enemy.takeDamage(attacker.meleeAttack(enemy.getName()));		
	enemy.takeDamage(attacker.vaulthunter_dot_exe(enemy.getName()));
	// enemy.takeDamage(attacker.vaulthunter_dot_exe(enemy.getName()));
	// enemy.takeDamage(attacker.vaulthunter_dot_exe(enemy.getName()));
	// enemy.takeDamage(attacker.vaulthunter_dot_exe(enemy.getName()));
	// enemy.takeDamage(attacker.vaulthunter_dot_exe(enemy.getName()));
	// enemy.takeDamage(attacker.vaulthunter_dot_exe(enemy.getName()));
	enemy.takeDamage(attacker.meleeAttack(enemy.getName()));	

	// std::cout << "-------------------------------" << std::endl;
	// attacker.takeDamage(enemy.rangedAttack(attacker.getName()));	
	// attacker.takeDamage(enemy.meleeAttack(attacker.getName()));		
	// attacker.takeDamage(enemy.vaulthunter_dot_exe(attacker.getName()));
	// attacker.takeDamage(enemy.vaulthunter_dot_exe(attacker.getName()));
	// attacker.takeDamage(enemy.vaulthunter_dot_exe(attacker.getName()));
	// attacker.takeDamage(enemy.vaulthunter_dot_exe(attacker.getName()));
	// attacker.takeDamage(enemy.vaulthunter_dot_exe(attacker.getName()));
	// attacker.takeDamage(enemy.vaulthunter_dot_exe(attacker.getName()));
	// attacker.takeDamage(enemy.meleeAttack(attacker.getName()));	
	
	return (0);
}