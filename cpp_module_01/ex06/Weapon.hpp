/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:32:35 by hel               #+#    #+#             */
/*   Updated: 2021/03/23 10:04:49 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
    std::string type;
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        const std::string &getType();      
        void    setType(std::string type);
};

#endif