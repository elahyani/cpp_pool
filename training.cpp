// #include <iostream>
// #include <string>

// // class	String
// // {
// // private:
// // 	char*	m_Buffer;
// // 	unsigned int	m_Size;

// // public:
// // 	String(const char* string)
// // 	{
// // 		m_Size = strlen(string);
// // 		m_Buffer = new char[m_Size + 1];
// // 		memcpy(m_Buffer, string, m_Size);
// // 		m_Buffer[m_Size] = 0;
// // 	}
// // 	String(const String& other) : m_Size(other.m_Size)
// // 	{
// // 		m_Buffer = new char[m_Size + 1];
// // 		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
// // 	}
// // 	~String()
// // 	{
// // 		delete[] m_Buffer;
// // 	}
// // 	friend std::ostream&	operator<<(std::ostream& stream, const String& string);

// // };

// // std::ostream&	operator<<(std::ostream& stream, const String& string)
// // {
// // 	stream << string.m_Buffer;
// // 	return stream;
// // }

// int		main()
// {
// 	// String string = "elahyani";
// 	// String second = string;

// 	// std::cout << string << std::endl;
// 	// std::cout << second << std::endl;
// 	int	a = 10;
// 	int	&b = a;
// 	std::cout << "a = "<<  &a << std::endl;
// 	std::cout << "b = " << &b << std::endl;

// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:10:04 by elahyani          #+#    #+#             */
/*   Updated: 2021/04/04 14:33:56 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <string>

// class Character
// {
// public:
// 	virtual void	msg(std::string const & target);
// };

// class Warrior : public Character
// {
// public:
// 	virtual void	msg(std::string const & target);
// };

// class Cat
// {
// 	//[...]
// };

// void	Character::msg(std::string const & target)
// {
// 	std::cout << "Hello " << target << " !" << std::endl;
// }

// void	Warrior::msg(std::string const & target)
// {
// 	std::cout << "Fuck off " << target << ", I don't like you !" << std::endl;
// }


// int main()
// {
// 	Warrior*	a = new Warrior();
// 	Character*	b = new Warrior();
// 	// Character*	x = new Character();
// 	// Warrior*	c = new Character();
// 	// Character*	d = new Cat();
// 	a->msg("admin");
// 	b->msg("root");
// 	// x->msg("hel");
// }

#include <iostream>
using namespace std;

class	Polygon {

	protected:
		int width, height;

	public:
		void	set_values (int a, int b){ width=a; height=b; }
		virtual int	area() = 0;

};

class	Rectangle: public Polygon {

	public:
		int area() { return width * height; }

};

class	Triangle: public Polygon {

	public:
		int	area() { return (width * height / 2); }

};

int	main () {

	// Rectangle rect;
	// Triangle trgl;
	// Polygon poly;

	Polygon * ppoly1 = new Rectangle();
	Polygon * ppoly2 = new Triangle();
	// Polygon * ppoly3 = new Polygon();

	ppoly1->set_values (4,5);
	ppoly2->set_values (4,5);
	// ppoly3->set_values (4,5);

	cout << ppoly1->area() << '\n';
	cout << ppoly2->area() << '\n';
	// cout << ppoly3->area() << '\n';
	return 0;
}