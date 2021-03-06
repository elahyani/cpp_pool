#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class   Pony
{
private:
	int age;
	std::string name;
	std::string color;

public:
	Pony(std::string name);
	~Pony();
	void	setAge(int age);
	void	setName(std::string name);
	void	setColor(std::string color);
	int	getAge();
	std::string	getName();
	std::string	getColor();
};

#endif