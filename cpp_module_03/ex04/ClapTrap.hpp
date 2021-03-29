/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 10:42:16 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/29 17:41:30 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <unistd.h>

class	ClapTrap
{

protected:
	std::string	name;
	unsigned int	hitPoints;
	unsigned int	maxHitPoints;
	unsigned int	energyPoints;
	unsigned int	maxEnergyPoints;
	unsigned int	level;
	unsigned int	meleeAttackDamage;
	unsigned int	rangedAttackDamage;
	unsigned int	armoreDamageReduction;

public:
	ClapTrap();
	ClapTrap(std::string nm);
	ClapTrap(const ClapTrap & src);
	ClapTrap&	operator=(const ClapTrap& rhs);
	~ClapTrap();

	void	setName(std::string nm);
	bool	isdead();
	std::string	getName(void) const;
	unsigned int	rangedAttack(std::string const & target);
	unsigned int	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};

#endif