/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/04 18:40:27 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

Weapon::Weapon(std::string type):
_type(type)
{
    return;
}

Weapon::~Weapon(void)
{
    return;
}

// **************************************************************************//
//                              PUBLIC FUNCTIONS                             //
// **************************************************************************//

// MEMBER
std::string const    &Weapon::getType(void) const
{
    return this->_type;
}

void            Weapon::setType(std::string type)
{
    this->_type = type;
    return;
}
