/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/02 12:27:29 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

DiamondTrap::DiamondTrap(void)
{
    std::cout << "Default DiamondTrap constructor called" << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    return;
}

DiamondTrap::DiamondTrap(std::string name):
_name(name)
{
    std::cout << "Parametric DiamondTrap constructor called" << std::endl;
    ClapTrap::_name = name.append("_clap_name");
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    return;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
    std::cout << "Copy DiamondTrap constructor called" << std::endl;
    *this = src;
    return;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called" << std::endl;
    return;
}


// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//

std::string DiamondTrap::getName(void) const
{
    return _name;
}


// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

DiamondTrap &  DiamondTrap::operator = (DiamondTrap const & rhs)
{
    std::cout << "DiamondTrap assisgnment operator" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->FragTrap::_hitPoints = rhs.FragTrap::_hitPoints;
        this->FragTrap::_energyPoints = rhs.FragTrap::_energyPoints;
        this->FragTrap::_attackDamage = rhs.FragTrap::_attackDamage;
    }
    return *this;
}


// **************************************************************************//
//                           PUBLIC FUNCTIONS                                //
// **************************************************************************//

void DiamondTrap::attack(const std::string& target)
{
    return ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
    return ScavTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount)
{
    return ScavTrap::beRepaired(amount);
}

void DiamondTrap::whoAmI(void)
{
    std::cout   << bold_on
                << "=>  My name is "
                << this->_name
                << ", Claptrap sub-object's name is "
                << ClapTrap::getName()
                << bold_off
                << std::endl
                << std::endl;
    return;
}
