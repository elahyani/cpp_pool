/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:09:21 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/15 10:42:22 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class	FragTrap
{

private:
	int	hitPoints;
	int	maxHitPoints;
	int	energyPoints;
	int	maxEnergyPoints;
	int	level;
	std::string	name;
	int	meleeAttackDamage;
	int	rangedAttackDamage;
	int	armoreDamageReduction;

public:
	FragTrap(void);
	FragTrap(std::string nm);
	FragTrap(const FragTrap & src);
	FragTrap&	operator=(const FragTrap& rhs);
	~FragTrap();
	
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	unsigned int	takeDamage(unsigned int amount);
	unsigned int	beRepaired(unsigned int amount);
};

#endif