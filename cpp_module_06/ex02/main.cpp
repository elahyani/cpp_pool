/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:55:20 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/18 17:02:02 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{

	int i = 13921;
	int *iptr = &i;

	char *cptr = reinterpret_cast<char*> (iptr);
	std::cout << *cptr << std::endl;
	return 0;
}