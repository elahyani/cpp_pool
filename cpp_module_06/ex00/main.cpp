/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 13:31:06 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/16 16:41:30 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Converter	cnv(argv[1]);
		// cnv.toChar();
		std::cout << "-----------------------\n";
		// cnv.toInt();
		std::cout << "-----------------------\n";
		cnv.toFloat();
		std::cout << "-----------------------\n";
		// cnv.toDouble();
	}
	return (0);
}