/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:10:50 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/17 14:25:43 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>
# include <sstream>

class Converter
{

private:
	std::string	_toConv;
	double		_convertedVal;
	int			_nbPoint;
	std::string	_fract;
	int			_isChar;
	
	int		f;
	Converter();
	bool	isNumber(std::string);

public:
	Converter(std::string);
	~Converter();

	void	parseAttr(std::string);
	double	getConvertedVal() const;
	void	toChar();
	void	toInt();
	void	toFloat();
	void	toDouble();
	class	NonValidArgumentException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
	class	EmptyArgumentException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
};


#endif