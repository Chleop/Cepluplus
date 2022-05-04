/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:00:27 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/04 16:52:59 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class Weapon {


public:

// Fonctions non-membres

// Constructeur et destructeur
Weapon(std::string type);
~Weapon(void);

// Fonctions membres
std::string const   &getType(void) const;
void                setType(std::string type);

private:

// Attributs non-membres

// Fonctions non-membres

// Fonctions membres

// Attributs membres
std::string     _type;

};


#endif
