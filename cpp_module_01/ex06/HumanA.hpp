/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:41:07 by hel               #+#    #+#             */
/*   Updated: 2021/03/10 17:54:04 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"


/* Now, create two classes, HumanA and HumanB, that both have a Weapon,
	a name, and an attack() function that displays something like:
	NAME attacks with his WEAPON_TYPE
	
	Make it so the following code produces attacks with "crude spiked club" THEN "some
	other type of club", in both test cases: */


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