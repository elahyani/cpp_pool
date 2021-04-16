/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:10:50 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/16 16:31:07 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Converter
{

private:
	std::string	_toConv;
	int		_nonDisp;
	double	_convertedVal;
	int		_nbPoint;
	bool	_isDouble;
	std::string	_fract;
	int		_isChar;
	
	int		f;
	Converter();

public:
	Converter(std::string);
	~Converter();

	void	parseAttr(std::string);
	double	getConvertedVal() const;
	void	toChar();
	void	toInt();
	void	toFloat();
	void	toDouble();
};


#endif