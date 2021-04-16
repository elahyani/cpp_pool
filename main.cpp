#include <iostream>
#include <string>

class Base
{

public:
	Base(){}
	virtual  ~Base(){
		std::cout << "am a base\n";
	}
};

class	Derived : virtual public Base
{
	int *p;
public:
	Derived(){ p = new int[5];}
	virtual ~Derived(){
		std::cout << "am a Derived\n";
		delete [] p;
	}
};

class	Cat
{
	private:
		std::string _name;
	public:
		Cat(std::string const &);
		~Cat();
		std::string	getName() const;
		class	Leg
		{
			private:
				std::string _name;
			public:
				Leg(std::string const &);
				~Leg();
				std::string	getName() const;
		};
};

Cat::Cat(std::string const & name) : _name(name)
{
}

Cat::~Cat()
{
	std::cout << "dCat called!" << std::endl;
}

Cat::Leg::~Leg()
{
	std::cout << "dLeg called!" << std::endl;
}

Cat::Leg::Leg(std::string const & name) : _name(name)
{
}

std::string	Cat::getName() const
{
	return this->_name;
}

std::string	Cat::Leg::getName() const
{
	return this->_name;
}

int main(int argc, char **argv)
{
	// Base	*myObj = new Derived();
	// delete myObj;
	// char	**mTable = new char*[3];
	// int		len = (int) sizeof(mTable)/sizeof(mTable[0]);
	// int		len = sizeof(mTable)/sizeof(int *);
	// int		len = *(&mTable + 1) - mTable;
	// int		length = 0;

	// while (mTable[length])
	// {
	// 	length++;
	// }
	// std::cout << "length = " << length << std::endl;
	// std::cout << "len    = " << len << std::endl;
	// Cat	cat("lolo katy");
	// Cat::Leg	leg("legoleg");

	// std::cout << "Hi am a cat my name is " << cat.getName() << std::endl;
	// std::cout << "Hi am a Leg my name is " << leg.getName() << std::endl;
	double b = std::stod(argv[1]);
	std::cout << b << std::endl;
	return (0);
}
