/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilcent <tmilcent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:06:16 by tmilcent          #+#    #+#             */
/*   Updated: 2023/09/26 00:03:44 by tmilcent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */)
{
	_contact_nb = 0;
	this->askCommand();
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::askCommand(void)
{
	std::string	command;

	std::cout << "Please enter a command (ADD, SEARCH or EXIT): ";
	std::getline(std::cin, command);
	if (command == "ADD")
		this->addContact();
	else if (command == "SEARCH")
		this->search();
	else if (command == "EXIT")
		this->exit();
	else
	{
		std::cout << "Invalid command." << std::endl;
		this->askCommand();
	}
}

void	PhoneBook::addContact(void)
{
	_contact[_contact_nb % 8] = Contact(_contact_nb);
	_contact_nb++;
	std::cout << "Contact added." << std::endl;
	this->askCommand();
}

void	PhoneBook::search()
{
	if (_contact_nb == 0)
	{
		std::cout << "No contact to search." << std::endl;
		this->askCommand();
		return ;
	}

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;

	int max = _contact_nb > 8 ? 8 : _contact_nb;
	for (int i = 0; i < max; i++)
	{
		std::cout << std::setw(10) << std::right << i << "|";

		if (_contact[i].getFirstName().length() > 10) {
            std::cout << _contact[i].getFirstName().substr(0, 9) << '.' << "|";
        } else {
            std::cout << std::setw(10) << std::right << _contact[i].getFirstName() << "|";
        }
		
		if (_contact[i].getLastName().length() > 10) {
			std::cout << _contact[i].getLastName().substr(0, 9) << '.' << "|";
		} else {
			std::cout << std::setw(10) << std::right << _contact[i].getLastName() << "|";
		}

		if (_contact[i].getNickname().length() > 10) {
			std::cout << _contact[i].getNickname().substr(0, 9) << '.' << std::endl;
		} else {
			std::cout << std::setw(10) << std::right << _contact[i].getNickname() << std::endl;
		}
	}
	
	int index = -1;

	while (index == -1)
	{
		std::cout << "Please enter an index: ";
		std::cin >> index;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Invalid index." << std::endl;
			index = -1;
		}
		else if (index < 0 || index >= max)
		{
			std::cout << "Invalid index." << std::endl;
			index = -1;
		}
		else
		{
			std::cin.ignore();
			_contact[index].printContact();
			this->askCommand();
		}
	}
}

void	PhoneBook::exit(void)
{
	std::cout << "Exiting..." << std::endl;
}
