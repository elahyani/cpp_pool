/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:01:21 by hel               #+#    #+#             */
/*   Updated: 2021/03/11 15:51:21 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name)
{
    std::cout << name << " is born" << std::endl;
    return ;
}

Pony::~Pony()
{
    std::cout << this->name << " is died" << std::endl;
    return ;
}

void    Pony::setAge(int age)
{
    this->age = age;
}

void    Pony::setName(std::string name)
{
    this->name = name;
}

void    Pony::setColor(std::string color)
{
    this->color = color;
}

int Pony::getAge()
{
    return this->age;
}

std::string Pony::getName()
{
    return this->name;
}

std::string Pony::getColor()
{
    return this->color;
}
