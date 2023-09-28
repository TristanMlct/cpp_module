/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilcent <tmilcent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:06:40 by tmilcent          #+#    #+#             */
/*   Updated: 2023/09/25 23:37:32 by tmilcent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	_contact[8];
	int		_contact_nb;
public:
	PhoneBook(void);
	~PhoneBook();

	void	askCommand(void);
	void	addContact(void);
	void	search(void);
	void	exit(void);
};

#endif
