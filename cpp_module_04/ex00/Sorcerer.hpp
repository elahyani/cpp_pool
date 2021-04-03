/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:26:49 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/03 17:39:28 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>

class Sorcerer
{

private:
	std::string	name;
	std::string	title;	

public:
	Sorcerer(std::string, std::string);
	Sorcerer::Sorcerer(const Sorcerer & src);
	Sorcerer&	operator=(const Sorcerer & rhs);
	~Sorcerer();
};

#endif