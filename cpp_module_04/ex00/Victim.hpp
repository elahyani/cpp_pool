/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:14:26 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/12 08:59:15 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{

private:
	std::string name;
	Victim();

public:
	Victim(std::string);
	Victim(Victim const & src);
	Victim&	operator=(Victim const & rhs);
	virtual ~Victim();

	void	setName(std::string);
	std::string	getName() const;
	void	introduce() const;
	virtual void	getPolymorphed() const;
};

std::ostream&	operator<<(std::ostream& o, const Victim& v);

#endif