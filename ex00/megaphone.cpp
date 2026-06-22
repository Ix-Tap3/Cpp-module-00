/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 10:38:21 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/22 10:54:47 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	std::string				str;
	std::string::iterator	it;
	int						j;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	j = 1;
	while (av[j])
	{
		str = av[j];
		for (it = str.begin(); it != str.end(); it++)
			std::cout << (char)std::toupper(*it);
		j++;
	}
	std::cout << std::endl;
}
