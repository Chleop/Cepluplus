/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:11:20 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/16 11:44:45 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

Animal::Animal(void):
_type("")
{
    std::cout << "[Animal default constructor called]" << std::endl;
    return;
}

Animal::Animal(std::string name):
_name(name), _type("")
{
    std::cout << "[Animal parametric constructor called]" << std::endl;
    return;
}

Animal::Animal(Animal const & src)
{
    std::cout << "[Animal copy constructor called]" << std::endl;
    *this = src;
    return;
}

Animal::~Animal(void)
{
    std::cout << "      [Animal destructor called]" << std::endl;
    return;
}


// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//

std::string Animal::getType(void) const
{
    std::cout << "[Animal getType function called]" << std::endl;
    return this->_type;
}


// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

Animal &     Animal::operator = (Animal const & rhs)
{
    std::cout << "[Animal assignment operator called]" << std::endl;
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

void        Animal::makeSound(void) const
{
    std::cout << "[Animal makeSound function called]" << std::endl;
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
