/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:41:31 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/29 17:41:39 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include "ClapTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{

public:
	SuperTrap();
	SuperTrap(std::string nm);
	SuperTrap(const SuperTrap & src);
	SuperTrap&	operator=(const SuperTrap & rhs);
	~SuperTrap();

	unsigned int rangedAttack(std::string const & target);
	unsigned int meleeAttack(std::string const & target);

};

#endif