/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:34:06 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/29 17:41:23 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{

private:
	
public:
	NinjaTrap();
	NinjaTrap(std::string nm);
	NinjaTrap(const NinjaTrap & src);
	NinjaTrap&	operator=(const NinjaTrap& rhs);
	~NinjaTrap();

	void	ninjaShoebox(FragTrap& trap);
	void	ninjaShoebox(ScavTrap& trap);
	void	ninjaShoebox(ClapTrap& trap);
	void	ninjaShoebox(NinjaTrap& trap);

};

#endif