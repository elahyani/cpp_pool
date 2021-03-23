/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:41:07 by hel               #+#    #+#             */
/*   Updated: 2021/03/23 10:04:35 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class   HumanA
{
	Weapon	&weapon;
	std::string	name;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		std::string	getName() const;
		void	setWeapon(Weapon weapon);
		void	attack() const;
};

#endif