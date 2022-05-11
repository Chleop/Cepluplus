/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:15:41 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/11 11:48:15 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include <iomanip>
# include "Fixed.hpp"

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class Point {

public:
// Constructeur et destructeur
    Point(void);
    Point(float const f1, float const f2);
    Point(Point const & src);
    ~Point(void);

// Fonctions non-membres

// Fonctions membres
    Point & operator = (Point const & rhs);
    Fixed const getX(void) const;
    Fixed const getY(void) const;

private:
// Attributs membres
    Fixed const _x;
    Fixed const _y;

};

#endif