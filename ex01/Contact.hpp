/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 09:49:23 by pcaplat           #+#    #+#             */
/*   Updated: 2026/04/02 10:41:51 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class	Contact
{
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phone;
	std::string	_secret;
	void	setFirstName(std::string name);
	void	setLastName(std::string name);
	void	setNickname(std::string nickname);
	void	setPhoneNumber(std::string phone_number);
	void	setSecret(std::string secret);

public:
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickname(void);
	std::string	getPhoneNumber(void);
	std::string	getSecret(void);
	void		display(Contact &contact);
	Contact		newContact(std::string firstName, std::string lastName, std::string nickname,
					std::string phoneNumber, std::string secret);
};
