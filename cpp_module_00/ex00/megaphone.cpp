/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:29:25 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/01 12:29:28 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(int argc, char **argv)
{
    int     i = 1;
    int     j = 0;
    char    **str = argv;

    if (argc > 1)
    {
        while (str[i])
        {
            j = 0;
            while (str[i][j])
            {
                str[i][j] = toupper(str[i][j]);
                std::cout << str[i][j];
                j++;
            }
            std::cout << ' ';
            i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}