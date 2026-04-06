/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 10:47:46 by pcaplat           #+#    #+#             */
/*   Updated: 2026/04/06 17:00:59 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	phonebook.setNbContact(0);
	while (1)
	{
		std::cout << "Enter a command: (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, input);
		if (input.empty() || std::cin.eof())
			std::cout << "Invalid empty command." << std::endl;
		else if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			break ;
	}
}
