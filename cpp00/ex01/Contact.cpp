/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilcent <tmilcent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:18:47 by tmilcent          #+#    #+#             */
/*   Updated: 2023/09/26 00:03:01 by tmilcent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	_index = 0;
	_firstName = "";
	_lastName = "";
	_nickname = "";
	_phoneNumber = "";
	_darkestSecret = "";
}

Contact::Contact(int index)
{
	_index = index % 8;
	_firstName = "";
	_lastName = "";
	_nickname = "";
	_phoneNumber = "";
	_darkestSecret = "";
	this->addContact();
}

Contact::~Contact()
{
}

void	Contact::addContact(void)
{
	while (_firstName == "")
	{
		std::cout << "Please enter the first name: ";
		std::getline(std::cin, _firstName);
	}
	while (_lastName == "")
	{
		std::cout << "Please enter the last name: ";
		std::getline(std::cin, _lastName);
	}
	while (_nickname == "")
	{
		std::cout << "Please enter the nickname: ";
		std::getline(std::cin, _nickname);
	}
	while (_phoneNumber == "")
	{
		std::cout << "Please enter the phone number: ";
		std::getline(std::cin, _phoneNumber);
	}
	while (_darkestSecret == "")
	{
		std::cout << "Please your darkest secret: ";
		std::getline(std::cin, _darkestSecret);
	}
}

std::string	Contact::getFirstName(void)
{
	return (_firstName);
}

std::string	Contact::getLastName(void)
{
	return (_lastName);
}

std::string	Contact::getNickname(void)
{
	return (_nickname);
}

void		Contact::printContact(void)
{
	std::cout << "First name: " << _firstName << std::endl;
	std::cout << "Last name: " << _lastName << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phoneNumber << std::endl;
	std::cout << "Darkest secret: " << _darkestSecret << std::endl;
}
