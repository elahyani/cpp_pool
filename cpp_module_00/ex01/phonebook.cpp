#include <iostream>
#include "myContact.class.hpp"

int main()
{
	std::string cmd;
	myContact     contact; 

	while (1)
	{
		std::cout << "Insert a cmd : ";
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			std::cout << "First name: ";
			std::cin >> contact.getFirstName();
			std::cout << "Last name: ";
			std::cin >> contact.getLastName();
			std::cout << "Nickname: ";
			std::cin >> contact.getNickname();
			std::cout << "Login: ";
			std::cin >> contact.getLogin();
			std::cout << "Postal adress: ";
			std::cin >> contact.getPostalAddr();
			std::cout << "Email adress: ";
			std::cin >> contact.getEmailAddr();
			std::cout << "Phone number: ";
			std::cin >> contact.getPhoneNum();
			std::cout << "Birthday date: ";
			std::cin >> contact.getBirthDate();
			std::cout << "Favorite meal: ";
			std::cin >> contact.getFavMeal();
			std::cout << "Underwear color: ";
			std::cin >> contact.getUnderwearClr();
			std::cout << "Darkest secret: ";
			std::cin >> contact.getDarkestSecret();
		}
		else if (cmd == "SEARCH")
		{
			std::cout << "+-------------------------------------------------------------+" << std::endl;
			std::cout << "| index" << " | first name" << " | last name" << " | nickname |" << std::endl;
			std::cout << "|-------------------------------------------------------------|" << std::endl;
			std::cout << "| " << contact.getIndex() << " | " << contact.getFirstName() << " | " << contact.getLastName() << " | " << contact.getNickname() << " |" << std::endl;
			std::cout << "+-------------------------------------------------------------+" << std::endl;
		}
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "invlid: command, please insert one of the three commands: ADD, SEARCH or EXIT" <<  std::endl;
	}
	return (0);
}
