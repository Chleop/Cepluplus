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
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    return;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    return;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
    return;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
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
    void        (Harl::*function_table[4])(void) = 
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };
    
    for(i = 0; i < 4; i++)
    {
        if (level.compare(level_table[i]) == 0)
            (this->*(function_table[i]))();
    }
    return;
}