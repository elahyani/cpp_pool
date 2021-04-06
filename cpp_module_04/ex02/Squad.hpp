/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:54:36 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/06 15:38:47 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include <iostream>
# include <string>

typedef struct	spaceMarine
{
	ISpaceMarine		*iSpaceMarine;
	struct spaceMarine	*next; 

}				t_spaceMarine;

class Squad : public ISquad
{

private:
	int				nbrUnit;
	t_spaceMarine	*spaceMarine;
	void			deleteAll();
	int				pushSquad(t_spaceMarine**, ISpaceMarine*);

public:
	Squad();
	Squad(const Squad & src);
	Squad&	operator=(const Squad & rhs);
	~Squad();

	int				getCount() const;
	ISpaceMarine*	getUnit(int) const;
	int				push(ISpaceMarine*);
	bool			isNotDuplicated(t_spaceMarine*, ISpaceMarine*);
};

#endif