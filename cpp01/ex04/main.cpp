/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilcent <tmilcent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:17:59 by tmilcent          #+#    #+#             */
/*   Updated: 2023/09/28 00:44:22 by tmilcent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

std::string replaceStr(std::string str, std::string s1, std::string s2)
{
	int	pos;

	while ((pos = str.find(s1)) != -1)
	{
		str.erase(pos, s1.length());
		str.insert(pos, s2);
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	else if (argv[1][0] == '\0' || argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cout << "Empty string" << std::endl;
		return (1);
	}

	std::fstream file(argv[1], std::ios::in);
	if (!file.is_open())
	{
		std::cout << "File doesn't exist" << std::endl;
		return (1);
	}

	std::string filename = std::string(argv[1]);
	filename += ".replace";
	std::ofstream new_file(filename.c_str(), std::ios::out);
	if (!new_file.is_open())
	{
		std::cout << "Can't create file" << std::endl;
		return (1);
	}

	std::string buf;
	while (std::getline(file, buf))
	{
		buf = replaceStr(buf, argv[2], argv[3]);
		new_file << buf;
		if (!file.eof())
			new_file << std::endl;
	}
	
	file.close();
	new_file.close();
	return (0);
}