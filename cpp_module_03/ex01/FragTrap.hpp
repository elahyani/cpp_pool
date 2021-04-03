/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:09:21 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/01 16:27:18 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <unistd.h>

class	FragTrap
{

private:
	unsigned int		hitPoints;
	static unsigned int	maxHitPoints;
	unsigned int		energyPoints;
	static unsigned int	maxEnergyPoints;
	unsigned int		level;
	std::string			name;
	static unsigned int	meleeAttackDamage;
	static unsigned int	rangedAttackDamage;
	static unsigned int	armoreDamageReduction;
	unsigned int		GomuGomuNoPistol(std::string const & target);
	unsigned int		DemonSlayerSword(std::string const & target);
	unsigned int		SantoryuOugiSanzenSekai(std::string const & target);
	unsigned int		SpritBomb(std::string const & target);
	unsigned int		Rasengan(std::string const & target);

public:
	FragTrap();
	FragTrap(std::string nm);
	FragTrap(const FragTrap & src);
	FragTrap&	operator=(const FragTrap& rhs);
	~FragTrap();

	void			setName(std::string nm);
	bool			isdead();
	std::string		getName(void) const;
	unsigned int	rangedAttack(std::string const & target);
	unsigned int	meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	unsigned int	vaulthunter_dot_exe(std::string const  & target);

};

#endif