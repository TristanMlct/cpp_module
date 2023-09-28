/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilcent <tmilcent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:25:35 by tmilcent          #+#    #+#             */
/*   Updated: 2023/09/27 16:10:35 by tmilcent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int	n = 5;

	Zombie	*zombies = zombieHorde(n, "Abc");

	for (int i = 0; i < n; i++)
		zombies[i].announce();

	delete [] zombies;
	return (0);
}
