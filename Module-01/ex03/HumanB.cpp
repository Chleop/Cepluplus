/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/05 15:59:19 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

HumanB::HumanB(std::string name):
_name(name)
{
    this->_w = NULL;
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
    std::cout << this->_name << " attacks with their ";
    if (this->_w)
        std::cout << this->_w->getType() << std::endl;
    else
        std::cout << "bare hands!" << std::endl;
    return;
}

void    HumanB::setWeapon(Weapon &w)
{
    this->_w = &w;
    return;
}
