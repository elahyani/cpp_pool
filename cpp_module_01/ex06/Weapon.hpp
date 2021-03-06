/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel <hel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:32:35 by hel               #+#    #+#             */
/*   Updated: 2021/03/05 18:27:24 by hel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

//              Make a Weapon class, that has a type string, and a getType that returns a const
//              reference to this string. Also has a setType.

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