/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:10:21 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/05 18:59:43 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <fstream>

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class Harl {


public:

// Fonctions non-membres

// Constructeur et destructeur
Harl(void);
~Harl(void);

// Fonctions membres
void complain(std::string level);

private:

// Attributs non-membres

// Fonctions non-membres

// Fonctions membres
void    debug(void);
void    info(void);
void    warning(void);
void    error(void);

// Attributs membres

};


#endif
