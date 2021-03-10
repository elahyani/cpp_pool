/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:24:44 by elahyani          #+#    #+#             */
/*   Updated: 2021/03/10 19:28:32 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char **argv) {

	if (argc < 4) {
		cout << "Invalid input" << endl;
		cout << "\tchange <old_word> <new_word> <file_list>";
	}
	fstream fs;
	ofstream	ofs("file.txt.replace");

	string tmp, line;
	string oldw = argv[2];
	string neww = argv[3];
	fs.open(argv[1] , ios::in);
	while (fs >> tmp) {
		// getline(fs, line);
		while (tmp.find(oldw) != string::npos)
			tmp.replace(tmp.find(oldw), sizeof(oldw), neww);
		ofs << tmp << std::endl;
	}
	fs.close();
	return 0;    
}