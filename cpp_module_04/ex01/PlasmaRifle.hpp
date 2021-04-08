/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:40:37 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/08 17:37:03 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle & src);
	PlasmaRifle&	operator=(const PlasmaRifle & rhs);
	virtual ~PlasmaRifle();

	void	attack() const;

};


#endif