/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/02 12:27:29 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// **************************************************************************//
//                        CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

Harl::Harl(void)
{
    return;
}

Harl::~Harl(void)
{
    return;
}


// **************************************************************************//
//                             PRIVATE FUNCTIONS                             //
// **************************************************************************//

// MEMBER
void    Harl::debug(void)
{
    std::cout   << "[ DEBUG ]"
                << std::endl
                << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
                << std::endl 
                << "I really do!" 
                << std::endl
                << std::endl;
    return;
}

void    Harl::info(void)
{
    std::cout   << "[ INFO ]"
                << std::endl
                << "I cannot believe adding extra bacon costs more money."
                << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
                << std::endl
                << std::endl;
    return;
}

void    Harl::warning(void)
{
    std::cout   << "[ WARNING ]"
                << std::endl
                << "I think I deserve to have some extra bacon for free."
                << "\nI've been coming for years whereas you started working here since last month."
                << std::endl
                << std::endl;
    return;
}

void    Harl::error(void)
{
    std::cout   << "[ ERROR ]"
                << std::endl
                << "This is unacceptable! I want to speak to the manager now."
                << std::endl
                << std::endl;
    return;
}

// **************************************************************************//
//                              PUBLIC FUNCTIONS                             //
// **************************************************************************//

// MEMBER
void Harl::complain(std::string level)
{
    int         i;
    std::string level_table[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for(i = 0; i < 4; i++)
    {
        if (level.compare(level_table[i]) == 0)
            break;
    }
    switch (i) {
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return;
}