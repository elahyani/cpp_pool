/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 10:17:49 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/06 15:56:54 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : nbrUnit(0), spaceMarine(NULL)
{
}

Squad::Squad(const Squad & src)
{
	*this = src;
}

Squad&	Squad::operator=(const Squad & rhs)
{
	if (this != &rhs)
	{
		t_spaceMarine	*tmp;

		this->deleteAll();
		this->nbrUnit = rhs.nbrUnit;
		tmp = rhs.spaceMarine;
		while (tmp)
		{
			this->push(tmp->iSpaceMarine);
			tmp = tmp->next;
		}
	}
	return *this;
}

Squad::~Squad()
{
	this->deleteAll();
}

void	Squad::deleteAll()
{
	t_spaceMarine	*tmp;

	tmp = NULL;
	if (spaceMarine)
	{
		while (spaceMarine)
		{
			tmp = spaceMarine->next;
			delete spaceMarine->iSpaceMarine;
			delete spaceMarine;
			spaceMarine = tmp;
		}
		spaceMarine = NULL;
	}
}

int		Squad::getCount() const
{
	int				count;
	t_spaceMarine	*tmp;

	count = 0;
	tmp = this->spaceMarine;
	while (tmp)
	{
		count++;
		tmp = tmp->next;		
	}
	return count;
}

ISpaceMarine	*Squad::getUnit(int N) const
{
	if (N >= 0 || N < this->nbrUnit)
	{
		t_spaceMarine	*space = this->spaceMarine;
		while (N--)
			space = space->next;
		return space->iSpaceMarine;
	}
	return NULL;
}

bool	Squad::isNotDuplicated(t_spaceMarine *spaceMarine, ISpaceMarine *newUnit)
{
	t_spaceMarine	*Marine;

	Marine = spaceMarine;
	if (newUnit == NULL)
		return false;
	while (Marine)
	{
		if (Marine->iSpaceMarine == newUnit)
			return false;
		Marine = Marine->next;
	}
	return true;
}

int	Squad::pushSquad(t_spaceMarine **Marine, ISpaceMarine *newUnit)
{
	*Marine = new t_spaceMarine;

	(*Marine)->iSpaceMarine = newUnit;
	(*Marine)->next = NULL;
	this->nbrUnit++;
	return this->nbrUnit;
}

int		Squad::push(ISpaceMarine* newUnit)
{
	t_spaceMarine	*last = this->spaceMarine;

	if (newUnit && isNotDuplicated(spaceMarine, newUnit))
	{
		if (this->spaceMarine == NULL)
			return pushSquad(&this->spaceMarine, newUnit);
		while (last->next != NULL)
			last = last->next;
		return pushSquad(&(last->next), newUnit);
	}
	return this->nbrUnit;
}
