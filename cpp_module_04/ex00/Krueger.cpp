/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Krueger.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:02:58 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/12 15:10:38 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Krueger.hpp"

Krueger::Krueger(std::string nm) : Victim(nm)
{
	std::cout << "Krug Krug." << std::endl;
}

Krueger::Krueger(const Krueger & src) : Victim(src)
{
}

Krueger&	Krueger::operator=(const Krueger & rhs)
{
	if (this != &rhs)
		Victim::operator=(rhs);
	return *this;
}

Krueger::~Krueger()
{
	std::cout << "Praaakh..." << std::endl;
}

void	Krueger::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a biscuit!" << std::endl;
}