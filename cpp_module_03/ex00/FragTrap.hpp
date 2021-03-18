/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:09:21 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/18 12:41:27 by elahyani         ###   ########.fr       */
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
	int			hitPoints;
	static int	maxHitPoints;
	int			energyPoints;
	static int	maxEnergyPoints;
	int			level;
	static int	meleeAttackDamage;
	static int	rangedAttackDamage;
	static int	armoreDamageReduction;
	unsigned int	attack1(std::string const & target);
	unsigned int	attack2(std::string const & target);
	unsigned int	attack3(std::string const & target);
	unsigned int	attack4(std::string const & target);
	unsigned int	attack5(std::string const & target);

public:
	FragTrap();
	FragTrap(std::string nm);
	FragTrap(const FragTrap & src);
	FragTrap&	operator=(const FragTrap& rhs);
	~FragTrap();

	void	setName(std::string nm);
	std::string	getName(void) const;
	unsigned int	rangedAttack(std::string const & target);
	unsigned int	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	unsigned int	vaulthunter_dot_exe(std::string const  & target);

};

#endif