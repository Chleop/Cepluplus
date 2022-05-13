/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:11:20 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/13 19:10:38 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

Cat::Cat(void):
_Brain(new Brain())
{
    std::cout << "[Cat default constructor called]" << std::endl;
    this->_type = "Cat";
    return;
}

Cat::Cat(std::string name):
_Brain(new Brain())
{
    std::cout << "[Cat parametric constructor called]" << std::endl;
    this->_name = name;
    this->_type = "Cat";
    return;
}

Cat::Cat(Cat const & src)
{
    std::cout << "[Cat copy constructor called]" << std::endl;
    this->_name = src._name;
    this->_type = "Cat";
    this->_Brain = new Brain();
    return;
}

Cat::~Cat(void)
{
    std::cout << "[Cat destructor called]" << std::endl;
    delete this->_Brain;
    return;
}


// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//

// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

Cat &     Cat::operator = (Cat const & rhs)
{
    std::cout << "[Cat assignment operator called]" << std::endl;
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

void        Cat::makeSound(void) const
{
    std::cout << "[Cat makeSound function called]" << std::endl;
    std::cout << std::setw(10) << bold_on << "!!! MAOUW MAOUW !!!" << bold_off << std::endl;
    return;
}

Brain *Cat::getBrain(void)
{
    return _Brain;
}

void    Cat::setBrain(Brain *brain)
{
    this->_Brain = brain;
    return;
}

// **************************************************************************//
//                           DESIGN FUNCTIONS                                //
// **************************************************************************//
