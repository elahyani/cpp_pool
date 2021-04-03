/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:40:43 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/03 17:45:30 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string nm, std::string ttl) : name(nm), title(ttl)
{
	std::cout << this->name << ", " << this->title << " is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->name << ", " << this->title << " is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & src)
{
	*this = src;
}

Sorcerer&	Sorcerer::operator=(const Sorcerer & rhs)
{
	this->name = rhs.name;
	this->title = rhs.title;
	return  *this;
}

