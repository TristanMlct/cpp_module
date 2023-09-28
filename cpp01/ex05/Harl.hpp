/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilcent <tmilcent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 00:46:16 by tmilcent          #+#    #+#             */
/*   Updated: 2023/09/28 00:49:14 by tmilcent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
private:
	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);

public:
	Harl(void);
	~Harl(void);
	void		complain(std::string level);
};

#endif