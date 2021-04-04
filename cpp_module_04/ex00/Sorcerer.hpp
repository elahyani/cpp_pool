/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:26:49 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/04 15:29:40 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{

private:
	std::string	name;
	std::string	title;	

public:
	Sorcerer();
	Sorcerer(std::string, std::string);
	Sorcerer(const Sorcerer & src);
	Sorcerer&	operator=(const Sorcerer & rhs);
	~Sorcerer();

	void	setName(std::string);
	void	setTitle(std::string);
	std::string	getName() const;
	std::string	getTitle() const;
	void	introduce() const;
	void	polymorph(Victim const &) const;
};

std::ostream&	operator<<(std::ostream& o, const Sorcerer& s);

#endif