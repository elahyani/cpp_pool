/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel <hel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:46:16 by hel               #+#    #+#             */
/*   Updated: 2021/03/03 14:30:55 by hel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
    std::string name;
    std::string type;

public:
    Zombie(void);
    ~Zombie(void);
    void    setZombieName(std::string);
    void    setZombieType(std::string);
    std::string getZombieName();
    std::string getZombieType();
    void    announce();

};

#endif