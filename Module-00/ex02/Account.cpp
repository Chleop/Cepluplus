/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:25:31 by cproesch          #+#    #+#             */
/*   Updated: 2022/04/28 17:00:45 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include "Account.hpp"


// **************************************************************************//
//                                CONSTRUCTOR                                //
// **************************************************************************//

Account::Account(void)
{
    Account::_nbAccounts += 1;
    return;
}


// Account::Account(int initial_deposit) : \
// 	_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
// {
// 	this->_accountIndex = Account::_nbAccounts;
// 	Account::_nbAccounts += 1;
// 	Account::_totalAmount += this->_amount;
// 	Account::_displayTimestamp();
// 	std::cout << "index:" << this->_accountIndex \
// 			  << ";amount:" << this->_amount \
// 			  << ";created" << std::endl;
// }


// **************************************************************************//
//                                 DESTRUCTOR                                //
// **************************************************************************//

Account::~Account(void)
{
    Account::_nbAccounts -= 1;
    return;
}

// Account::~Account(void)
// {
// 	Account::_displayTimestamp();
// 	std::cout << "index:" << this->_accountIndex \
// 			  << ";amount:" << this->_amount \
// 			  << ";closed" << std::endl;
// 	Account::_nbAccounts -= 1;
// }


// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//

int	Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}

// **************************************************************************//
//               PUBLIC INSTANCE FUNCTION (MEMBER FUNCTIONS)                 //
// **************************************************************************//

void	Account::displayAccountsInfos( void )
{
    int i;

    for(i = 0; i < 8; i++)
    {
        std::cout << "Total number of accounts : " << Account::_nbAccounts << std::endl;
        std::cout << "Total amount : " << Account::_totalAmount << std::endl;
        std::cout << "Total number of deposits : " << Account::_totalNbDeposits << std::endl;
        std::cout << "Total number of withdrawals : " << Account::_totalNbWithdrawals << std::endl;
    }
    return;
}

void	Account::makeDeposit( int deposit )
{
    this->_nbDeposits += 1;
    this->_amount += deposit;
    return;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (this->_amount - withdrawal > 0)
    {
        this->_nbWithdrawals += 1;
        this->_amount -= withdrawal;
        return true;
    }
    return false;
}

// **************************************************************************//
//                            NON MEMBER ATTRIBUTE                           //
// **************************************************************************//

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int		checkAmount( void ) _Construct
{

}

void	displayStatus( void ) _Construct
{

}

void std::_Construct<Account, int const&>(Account*, int const&)
{

}

void std::_Destroy<Account>(Account*)
{

}
