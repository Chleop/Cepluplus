/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:25:31 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/03 13:07:09 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <ctime>
#include "Account.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

Account::Account(int initialDeposit):
_amount(initialDeposit), _nbDeposits(0), _nbWithdrawals(0), _accountIndex(Account::_nbAccounts)
{
    // this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts += 1;
    Account::_totalAmount += initialDeposit;
    Account::_displayTimestamp();
    std::cout   << " index:" << this->_accountIndex \
                << ";amount:" << this->_amount \
                << ";created" << std::endl;
    return;
}

Account::~Account(void)
{
    Account::_nbAccounts -= 1;
    Account::_displayTimestamp();
    std::cout   << " index:" << this->_accountIndex \
                << ";amount:" << this->_amount \
                << ";closed" << std::endl;
    return;
}


// **************************************************************************//
//                             PUBLIC FUNCTIONS                              //
// **************************************************************************//

// NON MEMBER
void	Account::displayAccountsInfos( void )
{
    int i;

    Account::_displayTimestamp();
    std::cout   << " accounts:" << Account::_nbAccounts \
                << ";total:" << Account::_totalAmount \
                << ";deposits:" << Account::_totalNbDeposits \
                << ";withdrawals:" << Account::_totalNbWithdrawals \
                << std::endl;
    return;
}

// MEMBER
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

void	Account::makeDeposit( int deposit )
{
    int p_amount;

    p_amount = this->_amount;
    this->_nbDeposits += 1;
    Account::_totalNbDeposits += 1;
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    Account::_displayTimestamp();
    std::cout   << " index:" << this->_accountIndex \
                << ";p_amount:" << p_amount \
                << ";deposit:" << deposit \
                << ";amount:" << this->_amount \
                << ";nb_deposits:" << this->_nbDeposits \
                << std::endl;
    return;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    bool    refused;

    Account::_displayTimestamp();
    std::cout   << " index:" << this->_accountIndex \
                << ";p_amount:" << this->_amount;
    if (this->_amount - withdrawal > 0)
    {
        this->_nbWithdrawals += 1;
        Account::_totalNbWithdrawals += 1;
        this->_amount -= withdrawal;
        Account::_totalAmount -= withdrawal;
        std::cout   << ";withdrawal:" << withdrawal \
                    << ";amount:" << this->_amount \
                    << ";nb_withdrawals:" << this->_nbDeposits \
                    << std::endl;
        refused = false;
    }
    else
    {
        std::cout   << ";withdrawal:refused" \
                    << std::endl;
        refused = true;
    }
    return refused;
}

// **************************************************************************//
//                              PUBLIC ATTRIBUTES                            //
// **************************************************************************//

// NON MEMBER

// MEMBER

// **************************************************************************//
//                             PRIVATE FUNCTIONS                             //
// **************************************************************************//

// NON MEMBER

// MEMBER
int		Account::checkAmount( void ) const
{
    return this->_amount;
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout   << " index:" << this->_accountIndex \
                << ";amount:" << this->_amount \
                << ";deposits:" << this->_nbDeposits \
                << ";withdrawals:" << this->_nbWithdrawals \
                << std::endl;
}

void	Account::_displayTimestamp( void )
{
    time_t      now;
    struct tm * timeinfo;
    char        buffer[18];

    time(&now);
    timeinfo = localtime(&now);
    strftime(buffer, 18, "[%G%m%d_%H%M%S]", timeinfo);
    std::cout << buffer;
;
    return;
}

// **************************************************************************//
//                            PRIVATE ATTRIBUTES                             //
// **************************************************************************//

// NON MEMBER
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// MEMBER
