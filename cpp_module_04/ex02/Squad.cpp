/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 10:17:49 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/12 17:18:01 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : nbrUnit(0), spaceMarine(NULL)
{
}

Squad::Squad(const Squad &src) : nbrUnit(0), spaceMarine(NULL)
{
	t_spaceMarine *tmp;
	this->nbrUnit = src.nbrUnit;
	tmp = src.spaceMarine;
	while (tmp)
	{
		this->push(tmp->iSpaceMarine->clone());
		tmp = tmp->next;
	}
}

Squad &Squad::operator=(const Squad &rhs)
{
	if (this != &rhs)
	{
		t_spaceMarine *tmp;
		this->deleteAll();
		this->nbrUnit = rhs.nbrUnit;
		tmp = rhs.spaceMarine;
		while (tmp)
		{
			this->push(tmp->iSpaceMarine->clone());
			tmp = tmp->next;
		}
	}
	return *this;
}

Squad::~Squad()
{
	this->deleteAll();
}

void Squad::deleteAll()
{
	t_spaceMarine *tmp;

	tmp = NULL;
	while (spaceMarine)
	{
		tmp = spaceMarine->next;
		delete spaceMarine->iSpaceMarine;
		delete spaceMarine;
		spaceMarine = tmp;
	}
	spaceMarine = NULL;
}

int Squad::getCount() const
{
	int count;
	t_spaceMarine *tmp;

	count = 0;
	tmp = this->spaceMarine;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return count;
}

ISpaceMarine *Squad::getUnit(int N) const
{
	if (N >= 0 && N < this->nbrUnit)
	{
		t_spaceMarine *space = this->spaceMarine;
		while (N--)
			space = space->next;
		return space->iSpaceMarine;
	}
	else
		std::cout << "Out of bounds index." << std::endl;
	return NULL;
}

bool Squad::isNotDuplicated(t_spaceMarine *spaceMarine, ISpaceMarine *newUnit)
{
	t_spaceMarine *marine = spaceMarine;

	if (newUnit == NULL)
		return false;
	while (marine)
	{
		if (marine->iSpaceMarine == newUnit)
			return false;
		marine = marine->next;
	}
	return true;
}

int Squad::push(ISpaceMarine *newUnit)
{
	if (newUnit && isNotDuplicated(this->spaceMarine, newUnit) == true)
	{
		t_spaceMarine *last = new t_spaceMarine;
		last->iSpaceMarine = newUnit;
		last->next = NULL;
		if (this->spaceMarine == NULL)
			this->spaceMarine = last;
		else
		{
			t_spaceMarine *curr = this->spaceMarine;
			while (curr->next != NULL)
				curr = curr->next;
			curr->next = last;
		}
		return ++this->nbrUnit;
	}
	return this->nbrUnit;
}
