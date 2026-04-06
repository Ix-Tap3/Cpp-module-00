/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 09:47:16 by pcaplat           #+#    #+#             */
/*   Updated: 2026/04/06 18:44:27 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"
#include <string>

class	PhoneBook
{
private:
	Contact	_contacts[8];
	int		_nb_contact;

public:
	void		add(void);
	void		search(void);
	void		setNbContact(int nb_contact);
	void		displayContact(Contact contact, int index);
	std::string	formatName(std::string name);
};
