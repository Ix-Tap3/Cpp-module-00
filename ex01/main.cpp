/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 10:47:46 by pcaplat           #+#    #+#             */
/*   Updated: 2026/04/02 11:09:40 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(int ac, char **av)
{
	Contact	test;

	(void)ac;
	(void)av;
	test.setContact("Jonh", "Doe", "Inconito", "36 43", "Love birds (roasted birds...)");
	test.display();
}
