/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 14:22:05 by pcaplat           #+#    #+#             */
/*   Updated: 2026/04/06 16:38:00 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

void	PhoneBook::setNbContact(int nb_contact) {_nb_contact = nb_contact;}

void	PhoneBook::displayContact(int index)
{
	if (index >= 0 && index < 8)
	{
		if (_contacts[index].isEmpty())
			return ;
		_contacts[index].display();
	}
}

void	PhoneBook::add(void)
{
	std::string	tmp;
	Contact		new_contact;

	std::cout << "Enter the contact First Name:" << std::endl;
	std::getline(std::cin, tmp);
	new_contact.setFirstName(tmp);
	std::cout << "Enter the contact Last Name:" << std::endl;
	std::getline(std::cin, tmp);
	new_contact.setLastName(tmp);
	std::cout << "Enter the contact Nickname:" << std::endl;
	std::getline(std::cin, tmp);
	new_contact.setNickname(tmp);
	std::cout << "Enter the contact Phone Number:" << std::endl;
	std::getline(std::cin, tmp);
	new_contact.setPhoneNumber(tmp);
	std::cout << "Enter the contact darkest secret:" << std::endl;
	std::getline(std::cin, tmp);
	new_contact.setSecret(tmp);
	if (new_contact.isEmpty())
	{
		std::cout << "Empty contact cannot be added to the phonebook." << std::endl;
		return ;
	}
	this->_contacts[this->_nb_contact % 8] = new_contact;
	this->_nb_contact++;
}
