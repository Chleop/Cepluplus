/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/04 11:40:40 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

Zombie::Zombie(void)
{
    // std::cout \
    // << "\n///////////////////////////" << std::endl \
    // << "//  Constructor called   //" << std::endl \
    // << "///////////////////////////\n" << std::endl; \
    return;
}

Zombie::~Zombie(void)
{
    // std::cout \
    // << "\n//////////////////////////" << std::endl \
    // << "//  Destructor called   //" << std::endl \
    // << "//////////////////////////" << std::endl;
    std::cout << "[" << this->name << " was destroyed]" << std::endl;
    return;
}

// **************************************************************************//
//                              PUBLIC FUNCTIONS                             //
// **************************************************************************//

// NON MEMBER

// MEMBER
void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
    return;
}

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
