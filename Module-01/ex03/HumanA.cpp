/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/04 18:41:06 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

HumanA::HumanA(std::string name, Weapon &w):
_name(name), _w(w)
{
    std::cout << "Constructor called" << std::endl;
    return;
}

HumanA::~HumanA(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

// **************************************************************************//
//                              PUBLIC FUNCTIONS                             //
// **************************************************************************//

// MEMBER
void    HumanA::attack(void) const
{
    std::cout << this->_name << " attacks with their " << this->_w.getType() << std::endl;
    return;
}
