/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:18:37 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/10 18:11:56 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

Point::Point(void):
_x(Fixed(0)), _y(Fixed(0))
{
    return;
}

Point::Point(float const f1, float const f2):
_x(Fixed(f1)), _y(Fixed(f2))
{
    return;
}

Point::Point(Point const &inst)
{
    *this = inst;
    return;
}

Point::~Point(void)
{
    return;
}

// **************************************************************************//
//                                   ACCESSORS                               //
// **************************************************************************//

Fixed   const Point::getX(void) const
{
    return this->_x;
}

Fixed   const Point::getY(void) const
{
    return this->_y;
}


// **************************************************************************//
//                                   OPERATORS                               //
// **************************************************************************//

Point & Point::operator = (Point const & rhs)
{
    if (this != &rhs)
    {
        *const_cast<Fixed *> (&_x) = rhs._x;
        *const_cast<Fixed *> (&_y) = rhs._y;
    }
    return *this;
}
// retirer les this

// **************************************************************************//
//                        OTHER PUBLIC MEMBER FUNCTIONS                      //
// **************************************************************************//