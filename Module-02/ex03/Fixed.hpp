/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 18:20:25 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/10 16:27:55 by cproesch         ###   ########.fr       */
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
    Fixed & operator = (Fixed const & rhs);
    // il est necessaire de renvoyer une reference de la classe (et non une copie),
    // car on la modifie
    bool operator > (Fixed const & rhs) const;
    bool operator < (Fixed const & rhs) const;
    bool operator >= (Fixed const & rhs) const;
    bool operator <= (Fixed const & rhs) const;
    bool operator == (Fixed const & rhs) const;
    bool operator != (Fixed const & rhs) const;
    Fixed operator + (Fixed const & rhs) const;
    Fixed operator - (Fixed const & rhs) const;
    Fixed operator * (Fixed const & rhs) const;
    Fixed operator / (Fixed const & rhs) const;
    Fixed operator ++ (int);
    Fixed &operator ++ (void);
    Fixed operator -- (int);
    Fixed &operator -- (void);

    int             getRawBits(void) const;
    int             getNbFractBits (void) const;
    void            setRawBits(int const raw);
    float           toFloat(void) const;
    int             toInt(void) const;
    static Fixed    min(Fixed & inst1, Fixed & inst2);
    static Fixed    min(Fixed const & inst1, Fixed const & inst2);
    static Fixed    max(Fixed & inst1, Fixed & inst2);
    static Fixed    max(Fixed const & inst1, Fixed const & inst2);


private:
// Attributs membres
    int                 _rawBits;
    static const int    _nbFractBits = 8;

};

std::ostream &operator<<(std::ostream &o, Fixed const &inst);

#endif