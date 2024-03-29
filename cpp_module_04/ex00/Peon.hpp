/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:35:22 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/12 08:59:43 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class	Peon : public Victim
{

private:
	Peon();

public:
	Peon(std::string);
	Peon(const Peon & src);
	Peon&	operator=(const Peon & rhs);
	virtual	~Peon();

	void	getPolymorphed() const;
};

#endif