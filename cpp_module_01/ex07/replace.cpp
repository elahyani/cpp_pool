/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:51:01 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/11 15:51:02 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string>

std::string	change_filename(std::string filename)
{
	int		i;

	i = 0;
	while (filename[i])
	{
		filename[i] = std::toupper(filename[i]);
		i++;
	}
	filename += ".replace";
	return filename;
}

int main(int argc, char **argv) {

	std::string	line;
	std::string	oldw;
	std::string	neww;
	std::string filename;

	if (argc != 4) {
		std::cout << "error:\tbad arguments." << std::endl;
		return (1);
	}
	oldw = argv[2];
	neww = argv[3];
	std::ifstream	ifs(argv[1]);
	filename = change_filename(argv[1]);
	std::ofstream	ofs(filename);
	while (getline(ifs, line)) {
		while (line.find(oldw) != std::string::npos)
			line.replace(line.find(oldw), oldw.length(), neww);
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}