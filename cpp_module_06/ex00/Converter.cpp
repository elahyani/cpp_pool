/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:10:40 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/16 16:43:44 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(std::string toConv) : 
_toConv(toConv), _nonDisp(0), _convertedVal(0.0), _nbPoint(0), _isDouble(true), f(0), _fract(""), _isChar(0)
{
	parseAttr(_toConv);
	return;
}

Converter::~Converter()
{
}

void Converter::parseAttr(std::string attr)
{
	int i = 0;

	if (attr.length() == 1)
		_isChar = 1;
	if (attr[0] == '+' || attr[0] == '-')
		i++;
	for (; i < attr.length(); i++)
	{
		if (attr[i] == '.')
		{
			this->_fract = attr.substr(i + 1, attr.length());
			std::cout << "fract--> " << this->_fract << '\n';
			this->_nbPoint++;
		}
		else if (attr[i] == 'f')
			this->f++;
		else if (!isdigit(attr[i]) && attr[i] != 'f' && attr[i] != 'e')
		{
			this->_isDouble = false;
			break;
		}
	}
	if (this->_nbPoint > 1 || f > 1)
		_isDouble = false;
	if ((this->_nbPoint <= 1 && _isDouble))
	{
		this->_convertedVal = std::atof(attr.c_str());
		if (!_fract.length())
			std::cout << std::setprecision(1) << std::fixed;
		else if (attr[attr.length() - 1] == 'f')
			std::cout << std::setprecision(_fract.length() - 1) << std::fixed;
		else
			std::cout << std::setprecision(_fract.length()) << std::fixed;
	}

}

double Converter::getConvertedVal() const
{
	return this->_convertedVal;
}

void Converter::toChar()
{
	if (_isDouble || _isChar)
	{
		if (_isChar)
			std::cout << "char: '" << _toConv << "'\n";
		else if (_convertedVal > 32 && _convertedVal < 127)
			std::cout << "char: '" << static_cast<char>(_convertedVal) << "'\n";
		else if ((_convertedVal >= 0 && _convertedVal < 33) || _convertedVal == 127)
			std::cout << "char: Non displayable\n";
		else
			std::cout << "char: impossible\n";
	}
	else
		std::cout << "char: impossible\n";
}

void Converter::toInt()
{
	if (_isDouble)
		std::cout << "int: " << static_cast<int>(_convertedVal) << '\n';
	else if (_isChar)
		std::cout << "int: " << static_cast<int>(_toConv[0]) << '\n';
	else
		std::cout << "int: impossible\n";
}

void Converter::toFloat()
{
	if (_isDouble)
	{
		// _convertedVal = atof(_toConv.c_str());
		std::cout << "float: " << _convertedVal << "f\n";

	}
	else
		std::cout << "float: " << static_cast<float>(_convertedVal) << "f\n";
}

void Converter::toDouble()
{
	if (_isDouble)
	{
		std::cout << "double: " << _convertedVal << "\n";
	}
	else
	{
		// _convertedVal = atof(_toConv.c_str());
		std::cout << "double: " << _convertedVal << "\n";	
	}
}