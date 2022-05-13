/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:11:20 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/13 15:16:25 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

WrongCat::WrongCat(void)
{
    this->_type = "WrongCat";
    std::cout << "[WrongCat default constructor called]" << std::endl;
    return;
}

WrongCat::WrongCat(std::string name)
{
    this->_name = name;
    this->_type = "WrongCat";
    std::cout << "[WrongCat parametric constructor called]" << std::endl;
    return;
}

WrongCat::WrongCat(WrongCat const & src)
{
    std::cout << "[WrongCat copy constructor called]" << std::endl;
    *this = src;
    return;
}

WrongCat::~WrongCat(void)
{
    std::cout << "[WrongCat destructor called]" << std::endl;
    return;
}


// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//

// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

WrongCat &     WrongCat::operator = (WrongCat const & rhs)
{
    std::cout << "[WrongCat assignment operator called]" << std::endl;
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

void        WrongCat::makeSound(void) const
{
    std::cout << "[WrongCat makeSound function called]" << std::endl;
    std::cout << std::setw(10) << bold_on << "!!! MAOUW MAOUW !!!" << bold_off << std::endl;
    return;
}


// **************************************************************************//
//                           DESIGN FUNCTIONS                                //
// **************************************************************************//
