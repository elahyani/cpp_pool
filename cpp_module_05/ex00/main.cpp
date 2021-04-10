#include "Bureaucrat.hpp"

int     main()
{
	Bureaucrat	bure("kim", 10);
	Bureaucrat	cBure(bure);
	Bureaucrat	aBure = bure;

	std::cout << std::endl;
	std::cout << "bureaucrat            : " << bure << std::endl;
	std::cout << "copy bureaucrat       : " << cBure << std::endl;
	std::cout << "assignement bureaucrat: " << aBure << std::endl;
	std::cout << std::endl;

    try
	{
		Bureaucrat ba("hel", 10);
		std::cout << ba << std::endl;
		ba.incrementGrade();
		std::cout << ba << std::endl;
		ba.decrementGrade();
		std::cout << ba << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << "\n\n";
	}

	try
	{
		Bureaucrat bb("bob", 1);
		std::cout << bb << std::endl;
		std::cout << "Increment: " << '\n';
		bb.incrementGrade();
		std::cout << bb << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << "\n\n";
	}

	try
	{
		Bureaucrat bc("jim", 150);
		std::cout << bc << std::endl;
		std::cout << "Decrement: " << '\n';
		bc.decrementGrade();
		std::cout << bc << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << "\n\n";
	}

	try
	{
		Bureaucrat bd("hel", 0);
		std::cout << bd << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	return 0;
}