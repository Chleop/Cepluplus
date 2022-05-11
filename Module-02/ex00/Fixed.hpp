/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 18:20:25 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/11 12:10:01 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class Fixed {

public:
// Constructeur et destructeur
    Fixed(void);
    Fixed(int const n);
    Fixed( Fixed const & src);
    ~Fixed(void);

// Fonctions non-membres

// Fonctions membres
    Fixed & operator=(Fixed const & rhs);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);

private:
// Attributs membres
    int                 _x;
    static const int    _y = 8;
    // A static data member of a class is also known as a "class variable", 
    // because there is only one common variable for all the objects of that 
    // same class, sharing the same value: i.e., its value is not different 
    // from one object of this class to another.  static members have the same 
    // properties as non-member variables but they enjoy class scope.

};

#endif