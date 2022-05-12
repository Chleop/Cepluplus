/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/02 12:27:29 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

ClapTrap::ClapTrap(void):
_hitPoints(10), _energyPoints(10),_attackDamage(0)
{
    std::cout << "Default ClapTrap constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name):
_hitPoints(10), _energyPoints(10),_attackDamage(0)
{
    this->_name = name;
    std::cout << "Parametric ClapTrap constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "Copy ClapTrap constructor called" << std::endl;
    *this = src;
    return;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called" << std::endl;
    return;
}


// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//

std::string ClapTrap::getName(void) const
{
    return _name;
}

unsigned int ClapTrap::get_hitPoints(void) const
{
    return _hitPoints;
}

unsigned int ClapTrap::get_energyPoints(void) const
{
    return _energyPoints;
}

unsigned int ClapTrap::get_attackDamage(void) const
{
    return _attackDamage;
}

// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

ClapTrap &  ClapTrap::operator = (ClapTrap const & rhs)
{
    std::cout << "assisgnment operator" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

std::ostream    & operator<<(std::ostream &o, ClapTrap const &i)
{
    o   << std::setw(10)
        << i.getName()
        << " has "
        << i.get_energyPoints()
        << " energy points, "
        << i.get_hitPoints()
        << " hit points, and is able to damage its target of "
        << i.get_attackDamage()
        << " points."
        << std::endl;
    return o;
}


// **************************************************************************//
//                           PUBLIC FUNCTIONS                                //
// **************************************************************************//

void ClapTrap::attack(const std::string& target)
{
    std::cout   << "[ClapTrap attack function called]"
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

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout   << "[ClapTrap takeDamage function called]"
                << std::endl;
    if ((this->_hitPoints > 0) && (this->_energyPoints > 0))
    {
        if (this->_hitPoints >= amount)
            this->_hitPoints -= amount;
        else
            this->_hitPoints = 0;
        std::cout   << bold_on
                    << "=>  "
                    << this->getName()
                    << " loses "
                    << amount
                    << " hit points."
                    << bold_off
                    << std::endl;
    }
    else
    {
        this->_hitPoints = 0;
        std::cout   << bold_on
                    << "=>  "
                    << this->getName()
                    << " cannot take more damage due to insuffisiant energy and/or hit points."
                    << bold_off
                    << std::endl;
    }
    return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout   << "[ClapTrap beRepaired function called]"
                << std::endl;
    if ((this->_hitPoints > 0) && (this->_energyPoints > 0))
    {
        this->_hitPoints += amount;
        this->_energyPoints -= 1;
        std::cout   << bold_on
                    << "=>  "
                    << this->getName()
                    << " regained "
                    << amount
                    << " hit points."
                    << bold_off
                    << std::endl;
    }
    else
    {
        std::cout   << bold_on
                    << "=>  "
                    << this->getName()
                    << " cannot be repaired due to insuffisiant energy and/or hit points."
                    << bold_off
                    << std::endl;
    }
    return;
}


// **************************************************************************//
//                           DESIGN FUNCTIONS                                //
// **************************************************************************//

std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}
