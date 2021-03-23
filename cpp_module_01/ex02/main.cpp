/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 13:51:33 by hel               #+#    #+#             */
/*   Updated: 2021/03/23 17:47:08 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int     main()
{
    Zombie      zombie;
    Zombie      *zombie2;
    ZombieEvent zombieEvent;

    zombie.setZombieName("Fido");
    zombie.setZombieType("Blue Walkers");
    zombie.announce();
    std::cout << "--------------------------------------------" << std::endl;
    zombieEvent.setZombieType("Runners");
    zombie2 = zombieEvent.newZombie("Eddie");
    zombie2->announce();
    delete zombie2;
    std::cout << "--------------------------------------------" << std::endl;
    zombieEvent.randomChump();
    return (0);
}