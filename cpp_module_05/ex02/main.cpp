#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Form *p = new PresidentialPardonForm("president");
	Form *r = new RobotomyRequestForm("roboto");
	Form *s = new ShrubberyCreationForm("shrubb");

	try
	{
		Bureaucrat pa("kim", 40);

		p->execute(pa);
		pa.executeForm(*p);
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Excepotion: " << e.what() << "\n\n";
	}

	try
	{
		Bureaucrat pb("bob", 15);

		p->execute(pb);
		pb.executeForm(*p);
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Excepotion: " << e.what() << "\n\n";
	}

	try
	{
		Bureaucrat pc("john", 4);

		p->execute(pc);
		pc.executeForm(*p);
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Excepotion: " << e.what() << "\n\n";
	}

	try
	{
		Bureaucrat ra("isikel", 4);

		r->execute(ra);
		ra.executeForm(*r);
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Excepotion: " << e.what() << "\n\n";
	}

	try
	{
		Bureaucrat sa("carl", 4);

		s->execute(sa);
		sa.executeForm(*s);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Excepotion: " << e.what() << "\n\n";
	}

	delete p;
	delete r;
	delete s;
	return 0;
}