/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:45:02 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/07 14:54:07 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{

public:
	Ice();
	Ice(std::string const & type);
	Ice(const Ice & src);
	Ice&	operator=(const Ice & rhs);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif