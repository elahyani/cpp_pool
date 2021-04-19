/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:10:40 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/19 13:58:55 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(std::string toConv) : _toConv(toConv), _convertedVal(0.0), _nbPoint(0), _fract(""), _isChar(0)
{
	parseAttr(_toConv);
	return;
}

Converter::~Converter()
{
}

const char *Converter::NonValidArgumentException::what() const throw()
{
	return "Invalid argument";
}

const char *Converter::EmptyArgumentException::what() const throw()
{
	return "Empty argument";
}

bool Converter::isNumber(std::string attr)
{
	std::string notNum[8] = {"nan", "nanf", "inf", "+inf", "-inf", "inff", "-inff", "+inff"};
	for (int i = 0; i < 8; i++)
	{
		if (notNum[i] == attr)
			return false;
	}
	return true;
}

void Converter::parseAttr(std::string attr)
{
	int i = 0;
	int len = attr.length();

	if (isNumber(attr))
	{
		if (attr.length() == 1 && !isdigit(attr[0]))
			_isChar = 1;
		else if (attr.length() > 1)
		{
			if (attr[len - 1] == 'f')
				attr = attr.substr(0, len - 1);
			if (attr[0] == '+' || attr[0] == '-')
				i++;
			for (; i < (int)attr.length(); i++)
			{
				if (attr[i] == '.')
				{
					this->_fract = attr.substr(i + 1, attr.length());
					this->_nbPoint++;
				}
				else if (!isdigit(attr[i]))
					throw NonValidArgumentException();
			}
			if (this->_nbPoint > 1)
				throw NonValidArgumentException();
		}
	}
	this->_convertedVal = std::atof(attr.c_str());
	if (!_fract.length())
		std::cout << std::setprecision(1) << std::fixed;
	else
		std::cout << std::setprecision(_fract.length()) << std::fixed;
}

double Converter::getConvertedVal() const
{
	return this->_convertedVal;
}

void Converter::toChar()
{
	if (_isChar)
	{
		int a = static_cast<int>(_toConv[0]);
		std::stringstream ss;

		ss << a;
		ss >> _toConv;
		_convertedVal = atof(_toConv.c_str());
	}
	if (isnan(_convertedVal) || isinf(_convertedVal) || _convertedVal > std::numeric_limits<char>::max() || _convertedVal < std::numeric_limits<char>::min())
		std::cout << "char: impossible\n";
	else if (isprint(_convertedVal))
		std::cout << "char: '" << static_cast<char>(_convertedVal) << "'\n";
	else
		std::cout << "char: Non displayable\n";
}

void Converter::toInt()
{
	if (isnan(_convertedVal) || isinf(_convertedVal) || _convertedVal > std::numeric_limits<int>::max() || _convertedVal < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(_convertedVal) << std::endl;
}

void Converter::toFloat()
{
	if (isnan(_convertedVal))
		std::cout << "float: nanf"
				  << "\n";
	else if (isinf(_convertedVal))
	{
		std::cout << "float: ";
		if (_convertedVal < 0)
			std::cout << "-inff"
					  << "\n";
		else
			std::cout << "+inff"
					  << "\n";
	}
	else
		std::cout << "float: " << static_cast<float>(_convertedVal) << "f\n";
}

void Converter::toDouble()
{
	if (isnan(_convertedVal))
		std::cout << "double: nan"
				  << "\n";
	else if (isinf(_convertedVal))
	{
		std::cout << "double: ";
		if (_convertedVal < 0)
			std::cout << "-inf"
					  << "\n";
		else
			std::cout << "+inf"
					  << "\n";
	}
	else
		std::cout << "double: " << static_cast<double>(_convertedVal) << "\n";
}