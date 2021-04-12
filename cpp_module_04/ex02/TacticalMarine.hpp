/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 10:43:09 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/12 17:18:27 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &src);
	TacticalMarine &operator=(const TacticalMarine &rhs);
	~TacticalMarine();

	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif