/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:09:21 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/30 12:49:48 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{

private:
	unsigned int	GomuGomuNoPistol(std::string const & target);
	unsigned int	DemonSlayerSword(std::string const & target);
	unsigned int	SantoryuOugiSanzenSekai(std::string const & target);
	unsigned int	SpritBomb(std::string const & target);
	unsigned int	Rasengan(std::string const & target);

public:
	FragTrap();
	FragTrap(std::string nm);
	FragTrap(const FragTrap & src);
	FragTrap&	operator=(const FragTrap& rhs);
	~FragTrap();

	unsigned int	vaulthunter_dot_exe(std::string const  & target);

};

#endif