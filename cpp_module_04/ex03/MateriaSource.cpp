/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:47:19 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/07 19:09:31 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : len(0)
{
	for (int i = 0; i <= len; i++)
		this->mat[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & src)
{
	*this = src;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i <= len; i++)
		{
			delete mat[i];
			mat[i] = NULL;
		}
		this->len = rhs.len;
		for (int i = 0; i <= len; i++)
			this->mat[i] = rhs.mat[i];
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < len; i++)
	{
		delete this->mat[i];
		this->mat[i] = NULL;
	}
	return ;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (m && len < 4)
		this->mat[len++] = m->clone();
	else
		std::cout << "FUUUUUUUUUUUUL!" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i <= len; i++)
	{	
		if (this->mat[i]->getType() == type)
			return this->mat[i]->clone();
	}
	std::cout << "Unknown Materia" << std::endl;
	return 0;
}