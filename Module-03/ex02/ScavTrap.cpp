/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/02 12:27:29 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

ScavTrap::ScavTrap(void):
_gateGuarded(0)
{
    std::cout << "Default ScavTrap constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    return;
}

ScavTrap::ScavTrap(std::string name):
_gateGuarded(0)
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Parametric ScavTrap constructor called" << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "Copy ScavTrap constructor called" << std::endl;
    *this = src;
    return;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
    return;
}


// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//


// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

ScavTrap &  ScavTrap::operator = (ScavTrap const & rhs)
{
    std::cout << "ScavTrap assisgnment operator" << std::endl;
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

void ScavTrap::attack(const std::string& target)
{
    std::cout   << "[ScavTrap attack function called]"
                << std::endl;
    if ((this->_hitPoints > 0) && (this->_energyPoints > 0))
    {
        std::cout   << bold_on
                    << "=>  "
                    << this->getName()
                    << " attacks "
                    << target
                    << bold_off
                    << std::endl;
        if (this->_name.compare(target) == 0)
        {
            std::cout << "What ?? Cannot attack him/herself!" << std::endl;
            return;
        }
        this->_energyPoints -= 1;
        std::cout   << bold_on
                    << "=>  "
                    << target
                    << " loses "
                    << this->_attackDamage
                    << " point(s)."
                    << bold_off
                    << std::endl;
    }
    else
    {
        std::cout   << bold_on
                    << "=>  "
                    << this->getName()
                    << " cannot attack due to insuffisiant energy and/or hit points."
                    << bold_off
                    << std::endl;
    }
    return;
}

void ScavTrap::guardGate(void)
{
    std::cout   << "[ScavTrap guardGate function called]"
                << std::endl;
    if ((this->_hitPoints > 0) && (this->_energyPoints > 0))
    {
        if (_gateGuarded != 0)
        {
            std::cout   << bold_on
                        << "=>  "
                        << this->getName()
                        << " is already guarding the Gate !"
                        << bold_off
                        << std::endl
                        << std::endl;
            return;
        }
        _gateGuarded++;
        std::cout   << bold_on
                    << "=>  "
                    << this->getName()
                    << " entered Gate keeper mode !"
                    << bold_off
                    << std::endl
                    << std::endl;
    }
    else
    {
        std::cout   << bold_on
                    << "=>  "
                    << this->getName()
                    << " cannot guard the gate due to insuffisiant energy and/or hit points."
                    << bold_off
                    << std::endl
                    << std::endl;
    }
    return;
}
