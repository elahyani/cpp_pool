/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:44:17 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/08 12:15:43 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public	IMateriaSource
{

private:
	AMateria	*mat[4];
	int			len;
public:
	MateriaSource();
	MateriaSource(const MateriaSource & src);
	MateriaSource&	operator=(const MateriaSource & rhs);
	~MateriaSource();

	void	learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);

};

#endif