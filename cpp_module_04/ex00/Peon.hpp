/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:35:22 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/04 16:03:50 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class	Peon : public Victim
{

public:
	Peon();
	Peon(std::string);
	Peon(const Peon & src);
	Peon&	operator=(const Peon & rhs);
	~Peon();	

	void	getPolymorphed() const;
};

#endif