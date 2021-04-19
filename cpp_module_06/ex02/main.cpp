/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:55:20 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/19 13:52:21 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base { public: virtual ~Base(){}; };

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void)
{
	int rClass[3] = {1, 2, 3};
	Base *b;

	srand(clock());
	switch (rClass[rand() % 3])
	{
	case 1:
		b = new A;
		break;
	case 2:
		b = new B;
		break;
	case 3:
		b = new C;
		break;
	}
	return b;
}

void identify_from_pointer(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a != NULL)
		std::cout << "identify from pointer: A" << std::endl;
	else if (b != NULL)
		std::cout << "identify from pointer: B" << std::endl;
	else if (c != NULL)
		std::cout << "identify from pointer: C" << std::endl;
}

void identify_from_reference(Base &p)
{

	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "identify from reference: A" << std::endl;
	}
	catch (const std::bad_cast &bc)
	{
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "identify from reference: B" << std::endl;
	}
	catch (const std::bad_cast &bc)
	{
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "identify from reference: C" << std::endl;
	}
	catch (const std::bad_cast &bc)
	{
	}
}

int main()
{
	Base *b = generate();

	identify_from_pointer(b);
	identify_from_reference(*b);

	delete b;
	return 0;
}