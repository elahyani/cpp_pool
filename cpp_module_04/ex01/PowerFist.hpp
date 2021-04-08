/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:07:48 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/08 17:37:11 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class	PowerFist : public AWeapon
{

public:
	PowerFist();
	PowerFist(const PowerFist & src);
	PowerFist&	operator=(const PowerFist & rhs);
	virtual ~PowerFist();

	void	attack() const;
};

#endif