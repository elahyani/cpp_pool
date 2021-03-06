/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel <hel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:07:23 by hel               #+#    #+#             */
/*   Updated: 2021/03/03 11:37:30 by hel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheHeap(int age, std::string name, std::string color)
{
    Pony *pony = new Pony(name);
    
    pony->setAge(age);
    pony->setName(name);
    pony->setColor(color);
    std::cout << "Age: " << pony->getAge() << std::endl;
    std::cout << "Name: " << pony->getName() << std::endl;
    std::cout << "Color: " << pony->getColor() << std::endl;
    delete  pony;
    std::cout << "--------------" << std::endl;
}

void    ponyOnTheStack(int age, std::string name, std::string color)
{
    Pony pony = Pony(name);

    pony.setAge(age);
    pony.setName(name);
    pony.setColor(color);
    std::cout << "Age: " << pony.getAge() << std::endl;
    std::cout << "Name: " << pony.getName() << std::endl;
    std::cout << "Color: " << pony.getColor() << std::endl;
}

int     main()
{
    ponyOnTheHeap(14, "Pony1", "Black");
    ponyOnTheStack(16, "Pony2", "white");
    return (0);
}