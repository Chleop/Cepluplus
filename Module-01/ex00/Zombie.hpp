/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:00:27 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/02 12:14:29 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <fstream>

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class Zombie {


public:

// Fonctions non-membres

// Constructeur et destructeur
Zombie (std::string name);
~Zombie (void);

// Fonctions membres
void announce( void );

private:

// Attributs non-membres

// Fonctions non-membres

// Attributs membres
std::string name;

// Fonctions membres

};


#endif
