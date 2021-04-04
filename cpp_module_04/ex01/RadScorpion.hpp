/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:30:41 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/04 17:32:37 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{

public:
	RadScorpion();
	RadScorpion(const RadScorpion & src);
	RadScorpion&	operator=(const RadScorpion & rhs);
	virtual ~RadScorpion();
};

#endif