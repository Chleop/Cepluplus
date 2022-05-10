/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:41:39 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/10 12:12:02 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):
_rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(int const i)
{
    std::cout << "Int constructor called" << std::endl;
    this->_rawBits = i << this->_nbFractBits;
    return;
}

Fixed::Fixed(float const f)
{
    std::cout << "Float constructor called" << std::endl;
    this->_rawBits = roundf(f * (1 << this->_nbFractBits));
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

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_rawBits = rhs.getRawBits();
    return *this;
}


int    Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_rawBits;
}

void    Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->_rawBits = raw;
    return;
}

std::ostream &operator<<(std::ostream &o, Fixed const &inst)
{
    o << inst.toFloat();
    return o;
}
// Tous les doubles chevrons gauche du code qui seront entoures 
// d'un stream et d'une instance de la classe Fixed appelleront cette fonction
// qui renvoie elle-meme un stream (comme la fonction std::cout) de maniere
// a pouvoir chainer les operations (comme avec =).

float   Fixed::toFloat(void) const
{
    float f;

    f = (float)this->_rawBits / (1 << this->_nbFractBits);
    return f;
}

int      Fixed::toInt(void) const
{
    int i;

    i = this->_rawBits >> this->_nbFractBits;
    return i;
}
