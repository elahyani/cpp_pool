/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel <hel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:17:50 by hel               #+#    #+#             */
/*   Updated: 2021/03/05 11:57:10 by hel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
    return ;
}

Human::~Human()
{
    return ;
}

const Brain   &Human::getBrain() const
{
    return brain;
}

std::string Human::identify()
{
    return brain.identify();
}