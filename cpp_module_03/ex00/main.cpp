/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:08:54 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/17 17:52:54 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	fragt("X");
	FragTrap	target("Y");
	
	target.takeDamage(fragt.rangedAttack(target.getName()));
	target.takeDamage(fragt.meleeAttack(target.getName()));
	target.takeDamage(fragt.meleeAttack(target.getName()));
	target.takeDamage(fragt.meleeAttack(target.getName()));
	target.takeDamage(fragt.rangedAttack(target.getName()));

	return (0);
}