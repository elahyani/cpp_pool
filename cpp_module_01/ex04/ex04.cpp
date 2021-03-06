/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel <hel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 12:07:30 by hel               #+#    #+#             */
/*   Updated: 2021/03/04 13:06:37 by hel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main()
{
    std::string phrase = "HI THIS IS BRAIN";
    std::string* phrasePtr = &phrase;
    std::string& phraseRef = phrase;

    std::cout << phrase << "   " << *phrasePtr << "   " << phraseRef << std::endl;
    return (0);
}