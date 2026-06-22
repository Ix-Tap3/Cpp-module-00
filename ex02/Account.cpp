/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:24:26 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/22 17:36:49 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"


// --- Non Member functions
static void	getTimeStamp( void )
{
	std::time_t	raw;
	std::tm		*t_infos;
	char		buff[20];

	std::time(&raw);
	t_infos = std::localtime(&raw);
	std::strftime(buff, 20, "[%Y%m%d_%H%M%S]", t_infos);
	std::cout << buff << " ";
}

// --- Static Members Inintialisation
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbWithdrawals = 0;
int	Account::_totalNbDeposits = 0;

// --- Constructors / Destructor
Account::Account ( void )
{
	_accountIndex = getNbAccounts();
	_nbAccounts++;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	getTimeStamp();
	std::cout << "index:" << _accountIndex << ";created" << std::endl;
}

Account::Account ( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	getTimeStamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void )
{
	getTimeStamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed";
	std::cout << std::endl;
}

// --- Getters
int	Account::getNbAccounts( void ) { return _nbAccounts; }
int	Account::getNbDeposits( void ) { return _totalNbDeposits; }
int	Account::getTotalAmount( void ) { return _totalAmount; }
int	Account::getNbWithdrawals( void ) { return _totalNbWithdrawals; }
int	Account::checkAmount( void ) const { return _amount; }

// -- Member functions
void	Account::displayAccountsInfos( void )
{
	getTimeStamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
}

void	Account::displayStatus( void ) const
{
	getTimeStamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	getTimeStamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	getTimeStamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	std::cout << ";withdrawals:";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
	return (true);
}
