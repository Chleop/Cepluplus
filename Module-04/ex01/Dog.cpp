/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:11:20 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/13 19:03:36 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

Dog::Dog(void):
_Brain(new Brain())
{
    std::cout << "[Dog default constructor called]" << std::endl;
    this->_type = "Dog";
    return;
}

Dog::Dog(std::string name):
_Brain(new Brain())
{
    std::cout << "[Dog parametric constructor called]" << std::endl;
    this->_name = name;
    this->_type = "Dog";
    return;
}

Dog::Dog(Dog const & src)
{
    std::cout << "[Dog copy constructor called]" << std::endl;
    this->_name = src._name;
    this->_type = "Dog";
    this->_Brain = new Brain();
    return;
}

Dog::~Dog(void)
{
    std::cout << "[Dog destructor called]" << std::endl;
    delete this->_Brain;
    return;
}


// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//

// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

Dog &     Dog::operator = (Dog const & rhs)
{
    std::cout << "[Dog assignment operator called]" << std::endl;
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

void        Dog::makeSound(void) const
{
    std::cout << "[Dog makeSound function called]" << std::endl;
    std::cout << std::setw(10) << bold_on << "!!! WOOF WOOF !!!" << bold_off << std::endl;
    return;
}

Brain       *Dog::getBrain(void)
{
    return _Brain;
}

void        Dog::setBrain(Brain *brain)
{
    this->_Brain = brain;
    return;
}


// **************************************************************************//
//                           DESIGN FUNCTIONS                                //
// **************************************************************************//
