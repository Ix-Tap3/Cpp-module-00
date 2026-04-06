/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 09:47:16 by pcaplat           #+#    #+#             */
/*   Updated: 2026/04/06 16:34:03 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"

class	PhoneBook
{
private:
	Contact	_contacts[8];
	int		_nb_contact;

public:
	void	add(void);
	void	search(std::string name);
	void	exit(void);
	void	setNbContact(int nb_contact);
	void	displayContact(int index);
};
