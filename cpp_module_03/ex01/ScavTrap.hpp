/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 16:17:07 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/21 19:25:52 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "iostream"
# include <string>
# include <unistd.h>

class ScavTrap
{

private:
	std::string	name;
	unsigned int		hitPoints;
	static unsigned int	maxHitPoints;
	unsigned int		energyPoints;
	static unsigned int	maxEnergyPoints;
	unsigned int		level;
	static unsigned int	meleeAttackDamage;
	static unsigned int	rangedAttackDamage;
	static unsigned int	armoreDamageReduction;

public:
	ScavTrap();
	ScavTrap(std::string nm);
	ScavTrap(const ScavTrap & src);
	ScavTrap&	operator=(const ScavTrap& rhs);
	~ScavTrap();

	void	setName(std::string nm);
	bool	isdead();
	std::string	getName(void) const;
	unsigned int	rangedAttack(std::string const & target);
	unsigned int	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(std::string const  & target);
};

#endif