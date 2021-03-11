/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:55:24 by hel               #+#    #+#             */
/*   Updated: 2021/03/11 15:52:01 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string	ztype;
	std::string	getRandomName(int len);

public:
	ZombieEvent(void);
	~ZombieEvent(void);
	void		setZombieType(std::string type);
	Zombie		*newZombie(std::string name);
	void		randomChump();
};

#endif