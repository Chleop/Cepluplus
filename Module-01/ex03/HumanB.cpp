/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/04 18:41:12 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

HumanB::HumanB(std::string name):
_name(name)
{
    std::cout << "Constructor called" << std::endl;
    return;
}

HumanB::~HumanB(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

// **************************************************************************//
//                              PUBLIC FUNCTIONS                             //
// **************************************************************************//

// MEMBER
void    HumanB::attack(void) const
{
    std::cout   << this->_name 
                << " attacks with their "
                << this->_w->getType() 
                << std::endl;
    return;
}

void    HumanB::setWeapon(Weapon &w)
{
    this->_w = &w;
    return;
}
