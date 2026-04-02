/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 10:47:46 by pcaplat           #+#    #+#             */
/*   Updated: 2026/04/02 11:26:08 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	Contact	test;
	Contact	t2;

	(void)ac;
	(void)av;
	test.setContact("Jonh", "Doe", "Inconito", "36 43", "Love birds (roasted birds...)");
	test.display();
	if (t2.isEmpty())
		std::cout << "Empty contact" << std::endl;
	else
		std::cout << "not empty" << std::endl;
	if (test.isEmpty())
		std::cout << "Empty contact" << std::endl;
	else
		std::cout << "not empty" << std::endl;
}
