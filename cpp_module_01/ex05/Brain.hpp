/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel <hel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 12:31:11 by hel               #+#    #+#             */
/*   Updated: 2021/03/05 11:58:34 by hel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>

class   Brain
{
	public:
		Brain(void);
		~Brain(void);
		void	setWeight(int w);
		int		getWeight();
		std::string	identify() const;

	private:
		int	weight;
};

#endif