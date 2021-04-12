/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:29:08 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/12 09:00:19 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
protected:
	std::string	_name;
	int			_apcost;
	int			_damage;
	AWeapon();

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon & src);
	AWeapon&	operator=(const AWeapon & rhs);
	virtual ~AWeapon();
	std::string const & getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif