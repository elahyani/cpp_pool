/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 16:17:07 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/22 13:11:07 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "iostream"
# include <string>
# include <unistd.h>

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	ScavTrap();
	ScavTrap(std::string nm);
	ScavTrap(const ScavTrap & src);
	ScavTrap&	operator=(const ScavTrap& rhs);
	~ScavTrap();

	void	challengeNewcomer(std::string const  & target);
};

#endif