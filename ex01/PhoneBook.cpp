/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 14:22:05 by pcaplat           #+#    #+#             */
/*   Updated: 2026/04/06 19:26:31 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

void	PhoneBook::setNbContact(int nb_contact) {_nb_contact = nb_contact;}

std::string	PhoneBook::formatName(std::string name)
{
	if (name.length() < 11)
		return (name);
	name.resize(9);
	name.push_back('.');
	return (name);
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

void	PhoneBook::displayContact(Contact contact, int index)
{
	std::string	tmp;

	std::cout << "|";
	std::cout << std::setw(10) << std::right << index + 1 << "|";
	std::cout << std::setw(10) << std::right << this->formatName(contact.getFirstName()) << "|";
	std::cout << std::setw(10) << std::right << this->formatName(contact.getLastName()) << "|";
	std::cout << std::setw(10) << std::right << this->formatName(contact.getNickname()) << "|" << std::endl;
}

static void	draw_line(int nb_col)
{
	for (int i = 0; i < nb_col; i++)
	{
		std::cout << "+";
		std::cout << std::setfill('-') << std::setw(10) << "";
	}
	std::cout << "+";
	std::cout << std::setfill(' ') << std::endl;
}

static void	display_head(void)
{
	draw_line(4);
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First Name" << "|";
	std::cout << std::setw(10) << std::right << "Last Name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << "|" << std::endl;
	draw_line(4);
}

void	PhoneBook::search(void)
{
	std::string	input;
	int			id;

	display_head();
	if (this->_nb_contact == 0)
	{
		std::cout << "No available contact. Please add one by using ADD command." << std::endl;
		return ;
	}
	for (int i = 0; i < 8; i++)
	{
		if (this->_contacts[i].isEmpty())
			break ;
		this->displayContact(this->_contacts[i], i);
	}
	draw_line(4);
	std::cout << "Enter the ID of the contact you want to display:" << std::endl;
	std::getline(std::cin, input);
	if (input.find_first_not_of("0123456789") < input.length())
	{
		std::cout << "The ID isn't composed only by diggits." << std::endl;
		return ;
	}
	std::stringstream(input) >> id;
	if (id <= 0 || id > 8)
	{
		std::cout << "The ID have to be between 1 and 8." << std::endl;
		return ;
	}
	if (this->_contacts[id - 1].isEmpty())
	{
		std::cout << "Empty contact." << std::endl;
		return ;
	}
	this->_contacts[id - 1].display();
}
