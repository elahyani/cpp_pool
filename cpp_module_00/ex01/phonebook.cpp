#include <iostream>
#include "myContact.class.hpp"

int main()
{
	myContact		contact; 
	std::string		cmd;

	while (1)
	{
		std::cout << "Insert a cmd: ";
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			contact.setIndex();
			contact.setFirstName();
			contact.setLastName();
			contact.setNickname();
			contact.setLogin();
			contact.setPostalAddr();
			contact.setEmailAddr();
			contact.setPhoneNum();
			contact.setBirthDate();
			contact.setFavMeal();
			contact.setUnderwearClr();
			contact.setDarkestSecret();
		}
		else if (cmd == "SEARCH")
		{
			std::cout << "+-------------------------------------------+" << std::endl;
			std::cout << "| index" << " | first name" << " | last name" << " | nickname |" << std::endl;
			std::cout << "|-------------------------------------------|" << std::endl;
			std::cout << "| " << contact.getIndex() << " | " << contact.getFirstName() << " | " << contact.getLastName() << " | " << contact.getNickname() << " |" << std::endl;
			std::cout << "+-------------------------------------------+" << std::endl;
		}
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "invlid: command, please insert one of the three commands: ADD, SEARCH or EXIT" <<  std::endl;
	}
	return (0);
}
