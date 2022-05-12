/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/02 12:27:29 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

FragTrap::FragTrap(void)
{
    std::cout << "Default FragTrap constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    return;
}

FragTrap::FragTrap(std::string name)
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "Parametric FragTrap constructor called" << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "Copy FragTrap constructor called" << std::endl;
    *this = src;
    return;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
    return;
}


// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//


// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

FragTrap &  FragTrap::operator = (FragTrap const & rhs)
{
    std::cout << "FragTrap assisgnment operator" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}


// **************************************************************************//
//                           PUBLIC FUNCTIONS                                //
// **************************************************************************//

void FragTrap::highFivesGuys(void)
{
    std::cout   << "[FragTrap highFivesGuys function called]"
                << std::endl;
    if ((this->_hitPoints > 0) && (this->_energyPoints > 0))
    {
        std::cout   << bold_on
                    << "=>  ["
                    << this->_name
                    << "] says: HIGH FIVE BABY !!! (Please?)"
                    << bold_off
                    << std::endl
                    << std::endl;
    }
    else
    {
        std::cout   << bold_on
                    << "=>  ["
                    << this->_name
                    << "] has no more energy / hit points dude."
                    << bold_off
                    << std::endl
                    << std::endl;
    }
    return;
}
