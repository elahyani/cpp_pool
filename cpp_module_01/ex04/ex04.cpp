/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 12:07:30 by hel               #+#    #+#             */
/*   Updated: 2021/03/11 15:52:27 by elahyani         ###   ########.fr       */
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