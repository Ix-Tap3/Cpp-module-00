/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 09:47:16 by pcaplat           #+#    #+#             */
/*   Updated: 2026/04/02 10:34:45 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"

class	PhoneBook
{
private:
	Contact	contacts[8];

public:
	void	addContact(Contact &contact);
	void	search(std::string name);
	void	exit(void);
};
