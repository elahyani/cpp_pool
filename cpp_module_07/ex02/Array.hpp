/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:16:31 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/24 17:12:15 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{

private:
	unsigned int _n;
	T *_array;

public:
	class IndexOutOfBoundsException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Index out of bounds.";
		}
	};

	Array()
	{
		_array = new T;
		_n = 0;
	};

	~Array()
	{
		delete[] _array;
	};

	Array(unsigned int n) : _n(n), _array(NULL)
	{
		this->_array = new T[_n];
		// for (size_t i = 0; i < _n; i++)
		// {
		// 	_array[i] = 1;	
		// }
	}

	Array(const Array<T> &src) : _n(0), _array(NULL)
	{
		this->_array = new T[src._n];
		this->_n = src._n;
		for (size_t i = 0; i < _n; i++)
		{
			this->_array[i] = src._array[i];
		}
	}

	Array &operator=(const Array<T> &rhs)
	{
		if (this != &rhs)
		{
			if (this->_n > 0)
				delete[] this->_array;
			this->_array = NULL;
			if (rhs._n > 0)
			{
				this->_array = new T[rhs._n];
				this->_n = rhs._n;
				for (size_t i = 0; i < _n; i++)
				{
					this->_array[i] = rhs._array[i];
				}
			}
		}
		return *this;
	}

	T &operator[](size_t i)
	{
		if (i > _n - 1)
			throw IndexOutOfBoundsException();
		return _array[i];
	}

	size_t size() const
	{
		return this->_n;
	}
};

#endif