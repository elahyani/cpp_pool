/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:09:21 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/17 17:42:00 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class	FragTrap
{

private:
	std::string	name;
	int	hitPoints;
	int	maxHitPoints;
	int	energyPoints;
	int	maxEnergyPoints;
	int	level;
	int	meleeAttackDamage;
	int	rangedAttackDamage;
	int	armoreDamageReduction; 

public:
	FragTrap(std::string nm);
	FragTrap(const FragTrap & src);
	FragTrap&	operator=(const FragTrap& rhs);
	~FragTrap();
	
	void	setName(std::string nm);
	std::string	getName(void) const;
	unsigned int	rangedAttack(std::string const & target); // far attack
	unsigned int	meleeAttack(std::string const & target); // close attack
	void	takeDamage(unsigned int amount); // damage
	void	beRepaired(unsigned int amount); // kathili
	void	vaulthunter_dot_exe(std::string const  & target);

};

#endif