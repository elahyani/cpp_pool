#include <iostream>
#include <iomanip>
#include "myContact.class.hpp"

void	phonebook_header()
{
	std::cout << "\n...................[ PhoneBook ]..................." << std::endl;
	std::cout << "+-------------------------------------------------+" << std::endl;
	std::cout << "|                  Accepted commands              |" << std::endl;
	std::cout << "+--------+----------------------------------------+" << std::endl;
	std::cout << "| ADD    | add a contact to phonebook.            |" << std::endl;
	std::cout << "+--------+----------------------------------------+" << std::endl;
	std::cout << "| SEARCH | display a list of available contacts.  |" << std::endl;
	std::cout << "+--------+----------------------------------------+" << std::endl;
	std::cout << "| EXIT   | quit the program.                      |" << std::endl;
	std::cout << "+--------+----------------------------------------+\n" << std::endl;
}

int main()
{
	int	done = 0;
	int j = 0;
	int i = 0;
	myContact	contact[8]; 
	std::string	cmd;

	phonebook_header();
	while (1)
	{
		std::cout << "Insert a command: ";
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			if (i < 8)
			{
				contact[i].setIndex();
				contact[i].setFirstName();
				contact[i].setLastName();
				contact[i].setNickname();
				contact[i].setLogin();
				contact[i].setPostalAddr();
				contact[i].setEmailAddr();
				contact[i].setPhoneNum();
				contact[i].setBirthDate();
				contact[i].setFavMeal();
				contact[i].setUnderwearClr();
				contact[i].setDarkestSecret();
				done = 1;
				i++;
			}
			else
				std::cout << "Fully"  << std::endl;
		}
		else if (cmd == "EXIT")
			return (0);
		else if (cmd == "SEARCH")
		{
			std::cout << "+-------+------------+-----------+----------+" << std::endl;
			std::cout << "| index" << " | first name" << " | last name" << " | nickname |" << std::endl;
			std::cout << "+-------+------------+-----------+----------+" << std::endl;
			if (done)
			{
				j = 0;
				while (j < i)
				{
					std::cout << "| " << j << " | "
								<< contact[j].getFirstName() << " | "
								<< contact[j].getLastName() << " | "
								<< contact[j].getNickname() << " |"
								<< std::endl;
					std::cout << "+-------+------------+-----------+----------+" << std::endl;
					j++;
				}
			}
			else
			{
				std::cout << "|" << std::setw(strlen(" index  "))
						  << "|" << std::setw(strlen(" first name  "))
						  << "|" << std::setw(strlen(" last name  "))
						  << "|" << std::setw(strlen(" nickname  "))
						  << "|" << std::endl;
				std::cout << "+-------+------------+-----------+----------+" << std::endl;
			}
		}
		else
			std::cout << "invlid: command, please insert one of the three commands: ADD, SEARCH or EXIT" <<  std::endl;
	}
	return (0);
}
