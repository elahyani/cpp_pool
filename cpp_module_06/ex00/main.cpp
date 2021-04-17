/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 13:31:06 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/17 15:14:57 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		try
		{
			Converter	cnv(argv[1]);
			cnv.toChar();
			cnv.toInt();
			cnv.toFloat();
			cnv.toDouble();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	else
	{
		std::cout << "Error: invalid number of arguments!" << std::endl;
	}
	
	return (0);
}