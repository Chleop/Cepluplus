/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:11:20 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/13 15:21:17 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

WrongAnimal::WrongAnimal(void):
_type("")
{
    std::cout << "[WrongAnimal default constructor called]" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(std::string name):
_name(name), _type("")
{
    std::cout << "[WrongAnimal parametric constructor called]" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    std::cout << "[WrongAnimal copy constructor called]" << std::endl;
    *this = src;
    return;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "[WrongAnimal destructor called]" << std::endl;
    return;
}


// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//

std::string WrongAnimal::getType(void) const
{
    std::cout << "[WrongAnimal getType function called]" << std::endl;
    return this->_type;
}


// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

WrongAnimal &     WrongAnimal::operator = (WrongAnimal const & rhs)
{
    std::cout << "[WrongAnimal assignment operator called]" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
        this->_name = rhs._name;
    }
    return *this;
}


// **************************************************************************//
//                           PUBLIC FUNCTIONS                                //
// **************************************************************************//

void        WrongAnimal::makeSound(void) const
{
    std::cout << "[WrongAnimal makeSound function called]" << std::endl;
    std::cout << std::setw(10) << bold_on << "NoiZE" << bold_off << std::endl;
    return;
}


// **************************************************************************//
//                           DESIGN FUNCTIONS                                //
// **************************************************************************//
