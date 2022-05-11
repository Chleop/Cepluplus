/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 18:20:25 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/11 12:05:25 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class Fixed {

public:
// Constructeur et destructeur
    Fixed(void);
    Fixed(int const i);
    Fixed(float const f);
    Fixed( Fixed const & src);
    ~Fixed(void);

// Fonctions non-membres

// Fonctions membres
    Fixed & operator=(Fixed const & rhs);
    int     getRawBits(void) const;
    int     getNbFractBits (void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;


private:
// Attributs membres
    int                 _rawBits;
    static const int    _nbFractBits = 8;

};

std::ostream &operator<<(std::ostream &o, Fixed const &inst);

#endif