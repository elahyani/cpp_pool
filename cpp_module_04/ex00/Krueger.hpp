/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Krueger.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:03:07 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/12 15:03:22 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KRUEGER_HPP
# define KRUEGER_HPP

# include "Victim.hpp"

class	Krueger : public Victim
{

private:
	Krueger();

public:
	Krueger(std::string);
	Krueger(const Krueger & src);
	Krueger&	operator=(const Krueger & rhs);
	virtual	~Krueger();

	void	getPolymorphed() const;
};

#endif