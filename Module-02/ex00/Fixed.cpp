/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:41:39 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/09 15:05:20 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):
_x(0)
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(int i):
_x(i)
{
    return;
}

Fixed::Fixed(Fixed const &inst)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = inst;
    return;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

int    Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_x;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_x = raw;
    return;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_x = rhs.getRawBits();
    return *this;
}