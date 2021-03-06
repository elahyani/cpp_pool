/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel <hel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:51:52 by hel               #+#    #+#             */
/*   Updated: 2021/03/05 18:24:58 by hel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class   HumanB
{
	Weapon	*weapon;
	std::string	name;
	public:
		HumanB(std::string name);
		~HumanB();
		std::string	getName() const;
		void	setWeapon(Weapon &weapon);
		void	attack() const;
};


#endif