/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 11:57:36 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/15 14:47:31 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

std::string		find_and_replace(std::string str, std::string s1, std::string s2) {
	size_t		pos = 0;
	size_t		find = 0;

	while ((find = str.find(s1, pos)) <= str.length()) {
		str.replace(find, s1.length(), s2);
		pos = find + s2.length();
	}
	return (str);
}

int		read_file(char **av, std::string s1, std::string s2) {
	std::ifstream		ifs(av[1]);
	std::stringstream	newFile;
	std::string			replaceStr;

	newFile << av[1] << ".replace";
	if (!ifs.is_open()) {
		std::cout << "Error " << av[0] << " the file '" << av[1] << "' not exist" << std::endl;
		return (-1);
	}
	std::string str((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
	ifs.close();
	std::ofstream		ofs(newFile.str());
	if (!ofs.is_open()) {
		std::cout << "Error " << newFile.str() << " are not created" << std::endl;
		return (-1);
	}
	replaceStr = find_and_replace(str, s1, s2);
	ofs << replaceStr;
	ofs.close();
	return (0);
}

int		main(int ac, char **av) {
	if (ac != 4) {
		std::cout << av[0] << "  - Usage: " << av[0] << " [filename] [to find] [to replace]" << std::endl;
		return (-1);
	}
	std::string		s1(av[2]);
	std::string		s2(av[3]);
	if (s1.empty() || s2.empty()) {
		std::cout << av[0] << " Error one string in [to_find] and [to_replace] are empty" << std::endl;
		return (-1);
	}
	if (read_file(av, s1, s2) == -1)
		return (-1);
	return (0);
}