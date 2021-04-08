/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:38:09 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/08 11:25:07 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{
	return ;
}

Peon::Peon(std::string nm) : Victim(nm)
{
	std::cout << "Zog Zog." << std::endl;
}

Peon::Peon(const Peon & src) : Victim(src)
{
}

Peon&	Peon::operator=(const Peon & rhs)
{
	Victim::operator=(rhs);
	return *this;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}