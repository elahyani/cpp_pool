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

std::string	truncate_string(std::string str)
{
	std::string	dest;

	if (str.length() > 10)
	{
		dest = str.substr(0, 9);
		dest += ".";
		return (dest);
	}
	return (str);
}

void	addContact(myContact contact[8], int i)
{
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
}

void	showSpecContact(myContact contact[8], int j)
{
	int		index;

	std::cout << "Insert index desired: ";
	std::cin >> index;

	if (index >= 0 && index < j && std::cin.good())
	{
		std::cout << "------------------------------------" << std::endl;
		std::cout << "First name: " << contact[index].getFirstName() << std::endl;
		std::cout << "Last name: " << contact[index].getLastName() << std::endl;
		std::cout << "Nickname: " << contact[index].getNickname() << std::endl;
		std::cout << "Login: " << contact[index].getLogin() << std::endl;
		std::cout << "Postal adress: " << contact[index].getPostalAddr() << std::endl;
		std::cout << "Email adress: " << contact[index].getEmailAddr() << std::endl;
		std::cout << "Phone number: " << contact[index].getPhoneNum() << std::endl;
		std::cout << "Birthday date: " << contact[index].getBirthDate() << std::endl;
		std::cout << "Favorite meal: " << contact[index].getFavMeal() << std::endl;
		std::cout << "Underwear color: " << contact[index].getUnderwearClr() << std::endl;
		std::cout << "Darkest secret: " << contact[index].getDarkestSecret() << std::endl;
		std::cout << "------------------------------------" << std::endl;
	}
	else
	{
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		std::cout << "Invalid index" << std::endl;
	}
}

void	showContact(myContact contact[8], int i, int j, int done)
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|" << std::setw(10)
			  << "index" << "|" << std::setw(10)
			  << "first name" << "|" << std::setw(10) 
			  << "last name" << "|" << std::setw(10)
			  << "nickname" << "|" << std::setw(10)
			  << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	if (done)
	{
		j = 0;
		while (j < i)
		{
			std::cout << "|" << std::setw(10)
					  << j << "|" << std::setw(10)
					  << truncate_string(contact[j].getFirstName()) << "|" << std::setw(10)
					  << truncate_string(contact[j].getLastName()) << "|" << std::setw(10)
					  << truncate_string(contact[j].getNickname()) << "|" << std::setw(10)
					  << std::endl;
			std::cout << "+----------+----------+----------+----------+" << std::endl;
			j++;
		}
		showSpecContact(contact, j);
	}
	else
	{
		std::cout << "|" << std::setw(11)
				  << "|" << std::setw(11)
				  << "|" << std::setw(11)
				  << "|" << std::setw(11)
				  << "|" << std::endl;
		std::cout << "+----------+----------+----------+----------+" << std::endl;
	}
}
