/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:11:11 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/05 13:28:15 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{

protected:
	int			_hp;
	std::string	_type;

public:
	Enemy();
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy & src);
	Enemy&	operator=(const Enemy & rhs);
	virtual ~Enemy();

	std::string const & getType() const;
	int getHP() const;
	virtual void takeDamage(int);

};

#endif