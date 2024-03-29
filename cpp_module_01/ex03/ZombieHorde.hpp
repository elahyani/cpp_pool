/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:09:38 by hel               #+#    #+#             */
/*   Updated: 2021/03/11 15:52:25 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <string>

# include "Zombie.hpp"

class   ZombieHorde
{
    private:
        int     nbOfZombies;
        Zombie* zombie;
    public:
        ZombieHorde(int n);
        ~ZombieHorde(void);
        std::string getRandomName(int len);
        void    announce();
};

#endif