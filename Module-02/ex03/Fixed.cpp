/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:41:39 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/10 18:01:08 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

Fixed::Fixed(void):
_rawBits(0)
{
    return;
}

Fixed::Fixed(int const i)
{
    this->_rawBits = i * (1 << Fixed::_nbFractBits);
    return;
}

Fixed::Fixed(float const f)
{
    this->_rawBits = roundf(f * (1 << Fixed::_nbFractBits));
    return;
}

Fixed::Fixed(Fixed const &inst)
{
    *this = inst;
    return;
}

Fixed::~Fixed(void)
{
    return;
}

// **************************************************************************//
//                                   ACCESSORS                               //
// **************************************************************************//

int    Fixed::getRawBits(void) const
{
    return this->_rawBits;
}

void    Fixed::setRawBits(int const raw)
{
    this->_rawBits = raw;
    return;
}

// **************************************************************************//
//                                   OPERATORS                               //
// **************************************************************************//

Fixed & Fixed::operator = (Fixed const & rhs)
{
    if (this != &rhs)
        this->_rawBits = rhs.getRawBits();
    return *this;
}

bool Fixed::operator > (Fixed const & rhs) const
{
    return this->_rawBits > rhs.getRawBits();
}

bool Fixed::operator < (Fixed const & rhs) const
{
    return this->_rawBits < rhs.getRawBits();
}

bool Fixed::operator >= (Fixed const & rhs) const
{
    return this->_rawBits >= rhs.getRawBits();
}

bool Fixed::operator <= (Fixed const & rhs) const
{
    return this->_rawBits <= rhs.getRawBits();
}

bool Fixed::operator == (Fixed const & rhs) const
{
    return this->_rawBits == rhs.getRawBits();
}

bool Fixed::operator != (Fixed const & rhs) const
{
    return this->_rawBits != rhs.getRawBits();
}

Fixed Fixed::operator + (Fixed const & rhs) const
{
    return Fixed(this->_rawBits + rhs.getRawBits());
}

Fixed Fixed::operator - (Fixed const & rhs) const
{
    return Fixed(this->_rawBits - rhs.getRawBits());
}

Fixed Fixed::operator * (Fixed const & rhs) const
{
    float   a;

    a = this->toFloat() * rhs.toFloat();
    return Fixed(a);
}
// Cant mulltiply directly the fixedpoints together so passes them to floats
// and refixed them
Fixed Fixed::operator / (Fixed const & rhs) const
{
    float   a;

    a = this->toFloat() / rhs.toFloat();
    return Fixed(a);
}

Fixed Fixed::operator ++ (int)
{
    Fixed temp(*this);
    this->_rawBits++;
    return temp;
}
// In the case of ++I, the compiler knows it has to call 
// operator++(), for I++ it calls operator++(int).
Fixed &Fixed::operator ++ (void)
{
    this->_rawBits++;
    return *this;
}

Fixed Fixed::operator -- (int)
{
    Fixed temp(*this);
    this->_rawBits--;
    return temp;
}

Fixed &Fixed::operator -- (void)
{
    this->_rawBits--;
    return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &inst)
{
    o << inst.toFloat();
    return o;
}

// **************************************************************************//
//                        OTHER PUBLIC MEMBER FUNCTIONS                      //
// **************************************************************************//

float   Fixed::toFloat(void) const
{
    float f;

    f = (float)this->_rawBits / (1 << Fixed::_nbFractBits);
    return f;
}

int      Fixed::toInt(void) const
{
    int i;

    i = this->_rawBits / (1 << Fixed::_nbFractBits);
    return i;
}

Fixed    Fixed::min(Fixed & inst1, Fixed & inst2)
{
    if (inst1 < inst2)
        return inst1;
    return inst2;
}

Fixed    Fixed::min(Fixed const & inst1, Fixed const & inst2)
{
    if (inst1 < inst2)
        return inst1;
    return inst2;
}

Fixed    Fixed::max(Fixed & inst1, Fixed & inst2)
{
    if (inst1 > inst2)
        return inst1;
    return inst2;
}

Fixed    Fixed::max(Fixed const & inst1, Fixed const & inst2)
{
    if (inst1 > inst2)
        return inst1;
    return inst2;
}
