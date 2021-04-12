/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:08:30 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/12 17:43:59 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : len(0)
{
	for (int i = 0; i <= len; i++)
		this->materia[i] = NULL;
	return ;
}

Character::Character(std::string const & name) : _name(name), len(0)
{
	return ;
}

Character::Character(const Character & src)
{
	this->_name = src._name;
	this->len = src.len;
	int	i = 0;
	while (this->materia[i])
	{
		this->materia[i] = src.materia[i];
		i++;	
	}
}

Character&	Character::operator=(const Character & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i <= len; i++)
		{
			delete	materia[i];
			materia[i] = NULL;
		}
		this->_name = rhs._name;
		this->len = rhs.len;
		int	i = 0;
		while (this->materia[i])
		{
			this->materia[i] = rhs.materia[i];
			i++;	
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i <= len; i++)
	{
		delete	materia[i];
		materia[i] = NULL;
	}
	return ;
}

std::string	const &	Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	if (len == 4)
	{
		std::cout << "Full inventory" << std::endl;
		return;
	}
	materia[len++] = m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < len)
	{
		for(; idx < len - 1 ; idx++)
			materia[idx] = materia[idx + 1];
		materia[idx] = NULL;
		len--;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < len)
		materia[idx]->use(target);
	else
		std::cout  << "invalid index, F*** off" << std::endl;
}

