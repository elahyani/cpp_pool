/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:51:27 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/11 15:51:29 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class   Pony
{
private:
	int age;
	std::string name;
	std::string color;

public:
	Pony(std::string name);
	~Pony();
	void	setAge(int age);
	void	setName(std::string name);
	void	setColor(std::string color);
	int	getAge();
	std::string	getName();
	std::string	getColor();
};

#endif