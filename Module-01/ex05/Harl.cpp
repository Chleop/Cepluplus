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
    void        (Harl::*function_table[4])(void) = 
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };
// D'apres ce que j'ai compris, on exprime le pointeur sur fonction ainsi car 
// le type d'une fonction membre est "type Class::" ((ce qui donne le prtotype:
// "type Class::fonction(types d'args)" tels que declares ci-dessus)),
// le pointeur sera donc exprime ainsi : "type (Class::*pointeur)(types d'args)"
// Ne pas oublier les parentheses autour du pointeur avant le (types d'args).
// https://stackoverflow.com/questions/252748/how-can-i-use-an-array-of-function-pointers
// https://www.guru99.com/c-function-pointers.html (partie array function pointers)
// https://www.bestprog.net/en/2018/07/15/classes-and-arrays-arrays-of-pointers-to-the-class-members-methods-examples/

    
    if (level.compare("DEBUG") && level.compare("INFO") && level.compare("WARNING") \
    && level.compare("ERROR"))
        std::cout << "Not complaining" << std::endl;
    for(i = 0; i < 4; i++)
    {
        if (level.compare(level_table[i]) == 0)
            (this->*(function_table[i]))();
    }
    return;
}