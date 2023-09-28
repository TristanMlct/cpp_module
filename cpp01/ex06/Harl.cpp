/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilcent <tmilcent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 00:49:18 by tmilcent          #+#    #+#             */
/*   Updated: 2023/09/28 21:27:01 by tmilcent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void): _filter(4) {
	return ;
}

Harl::Harl(std::string filter): _filter(4) {
	if (filter != "DEBUG" && filter != "INFO" && filter != "WARNING" && filter != "ERROR") {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		_filter = 4;
		return ;
	}
	switch (filter[0])
	{
	case 'D':
		_filter = 0;
		break;
	case 'I':
		_filter = 1;
		break;
	case 'W':
		_filter = 2;
		break;
	case 'E':
		_filter = 3;
		break;
	default:
		break;
	}	
}

Harl::~Harl(void) {
	return ;
}

void		Harl::complain(std::string level) {
	void		(Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	level_list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (level == level_list[i] && i >= _filter) {
			(this->*f[i])();
			return ;
		}
	}		
}

void		Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Is it working ?" << std::endl << std::endl;
}

void		Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "It should goes here :o" << std::endl << std::endl;
}

void		Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "If you see that, you may be in trouble" << std::endl << std::endl;
}

void		Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "FBI is behind you" << std::endl << std::endl;
}
