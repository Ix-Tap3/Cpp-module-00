/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 10:23:10 by pcaplat           #+#    #+#             */
/*   Updated: 2026/04/02 11:11:45 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

void	Contact::setFirstName(std::string name){_firstName = name;}
void	Contact::setLastName(std::string name){_lastName = name;}
void	Contact::setNickname(std::string name){_nickname = name;}
void	Contact::setPhoneNumber(std::string phoneNumber){_phone = phoneNumber;}
void	Contact::setSecret(std::string secret){_secret = secret;}

std::string	Contact::getFirstName(void){return (_firstName);}
std::string	Contact::getLastName(void){return (_lastName);}
std::string	Contact::getNickname(void){return (_nickname);}
std::string	Contact::getPhoneNumber(void){return (_phone);}
std::string	Contact::getSecret(void){return (_secret);}

void	Contact::setContact(std::string firstName, std::string lastName, std::string nickname,
							std::string phoneNumber, std::string secret)
{
	_firstName = firstName;
	_lastName = lastName;
	_nickname = nickname;
	_phone = phoneNumber;
	_secret = secret;
}

void	Contact::display(void)
{
	std::cout << _firstName << std::endl;
	std::cout << _lastName << std::endl;
	std::cout << _nickname << std::endl;
	std::cout << _phone << std::endl;
	std::cout << _secret << std::endl;
}
