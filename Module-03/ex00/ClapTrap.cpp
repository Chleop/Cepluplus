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
    std::cout << "Default constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name):
_name(name), _hitPoints(10), _energyPoints(10),_attackDamage(0)
{
    std::cout << "Parametric constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const & src):
_hitPoints(10), _energyPoints(10),_attackDamage(0)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}


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

void ClapTrap::attack(const std::string& target)
{
    if (target == "ff")
        std::cout << "coucou";
    return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    amount = 0;
    return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    amount = 0;
    return;
}

std::string ClapTrap::getName(void) const
{
    return _name;
}

// **************************************************************************//
//                              PUBLIC FUNCTIONS                             //
// **************************************************************************//

// NON MEMBER

// MEMBER

// **************************************************************************//
//                             PUBLIC ATTRIBUTES                             //
// **************************************************************************//

// NON MEMBER

// MEMBER

// **************************************************************************//
//                             PRIVATE FUNCTIONS                             //
// **************************************************************************//

// NON MEMBER

// MEMBER

// **************************************************************************//
//                            PRIVATE ATTRIBUTES                             //
// **************************************************************************//

// NON MEMBER

// MEMBER

// **************************************************************************//
//                                 OTHERS                                    //
// **************************************************************************//

std::ostream    & operator<<(std::ostream &o, ClapTrap const &i)
{
    o << i.getName();
    return o;
}