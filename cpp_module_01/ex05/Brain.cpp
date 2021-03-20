/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:07:52 by hel               #+#    #+#             */
/*   Updated: 2021/03/20 14:45:12 by elahyani         ###   ########.fr       */
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
	std::string			str;
	int	i = -1;

	ss << this;
	str = ss.str();
	while (str[++i])
		str[i] = std::toupper(str[i]);
	return (str);
}
