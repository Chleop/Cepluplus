/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:11:20 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/16 12:45:41 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

Dog::Dog(void)
{
    std::cout << "  [Dog default constructor called]" << std::endl;
    this->_Brain = new Brain();
    this->_type = "Dog";
    return;
}

Dog::Dog(std::string name)
{
    std::cout << "  [Dog parametric constructor called]" << std::endl;
    this->_Brain = new Brain();
    this->_name = name;
    this->_type = "Dog";
    return;
}

Dog::Dog(Dog const & src)
{
    int i = 0;

    std::cout << "  [Dog copy constructor called]" << std::endl;
    this->_Brain = new Brain();
    while(i < 100)
    {
        this->_Brain->ideas[i] = src._Brain->ideas[i];
        i++;
    }
    this->_name = src._name;
    this->_type = src._type;
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

void    Dog::setBrain(std::string *idTable)
{
    int i = 0;

    while(idTable[i].compare(""))
    {
        this->_Brain->ideas[i] = idTable[i];
        i++;
    }
    return;
}

// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

Dog &     Dog::operator = (Dog const & rhs)
{
    int i = 0;
    
    std::cout << "  [Dog assignment operator called]" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
        this->_name = rhs._name;
        while(i < 100)
        {
            this->_Brain->ideas[i] = rhs._Brain->ideas[i];
            i++;
        }
    }
    return *this;
}


// **************************************************************************//
//                           PUBLIC FUNCTIONS                                //
// **************************************************************************//

void        Dog::makeSound(void) const
{
    std::cout << "  [Dog makeSound function called]" << std::endl;
    std::cout << std::setw(10) << bold_on << "!!! WOOF WOOF !!!" << bold_off << std::endl;
    return;
}

void        Dog::displayIdeas(void) const
{
    int i = 0;

    while(this->_Brain->getIdeas()[i].compare(""))
    {
        std::cout << this->_Brain->getIdeas()[i] << " ";
        i++;
    }
    std::cout << std::endl;
    return;
}

// **************************************************************************//
//                           DESIGN FUNCTIONS                                //
// **************************************************************************//
