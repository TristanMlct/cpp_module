/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilcent <tmilcent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 00:49:18 by tmilcent          #+#    #+#             */
/*   Updated: 2023/09/28 21:22:46 by tmilcent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	return ;
}

Harl::~Harl(void) {
	return ;
}

void		Harl::complain(std::string level) {
	// Use pointer to member function
	void		(Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	level_list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (level == level_list[i]) {
			(this->*f[i])();
			return ;
		}
	}
	std::cout << "Wrong level" << std::endl;
}

void		Harl::debug(void) {
	std::cout << "Is it working ?" << std::endl;
}

void		Harl::info(void) {
	std::cout << "It should goes here :o" << std::endl;
}

void		Harl::warning(void) {
	std::cout << "If you see that, you may be in trouble" << std::endl;
}

void		Harl::error(void) {
	std::cout << "FBI is behind you" << std::endl;
}
