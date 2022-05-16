/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:11:20 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/16 13:11:05 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

AAnimal::AAnimal(void):
_type("")
{
    std::cout << "[AAnimal default constructor called]" << std::endl;
    return;
}

AAnimal::AAnimal(std::string name):
_name(name), _type("")
{
    std::cout << "[AAnimal parametric constructor called]" << std::endl;
    return;
}

AAnimal::AAnimal(AAnimal const & src)
{
    std::cout << "[AAnimal copy constructor called]" << std::endl;
    *this = src;
    return;
}

AAnimal::~AAnimal(void)
{
    std::cout << "      [AAnimal destructor called]" << std::endl;
    return;
}


// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//

std::string AAnimal::getType(void) const
{
    std::cout << "[AAnimal getType function called]" << std::endl;
    return this->_type;
}


// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

AAnimal &     AAnimal::operator = (AAnimal const & rhs)
{
    std::cout << "[AAnimal assignment operator called]" << std::endl;
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

void        AAnimal::makeSound(void) const
{
    std::cout << "[AAnimal makeSound function called]" << std::endl;
    std::cout << std::setw(10) << bold_on << "NoiZE" << bold_off << std::endl;
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
