/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:07:52 by hel               #+#    #+#             */
/*   Updated: 2021/03/11 15:52:33 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
	return ;
}

Brain::~Brain()
{
	return ;
}

void	Brain::setWeight(int w)
{
	this->weight = w;
}

int	Brain::getWeight()
{
	return this->weight;
}

std::string	Brain::identify() const
{
	std::stringstream	ss;

	ss << this;
	return (ss.str());
}