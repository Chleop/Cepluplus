/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:00:27 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/11 17:54:04 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <fstream>

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class ClapTrap
{


public:

    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap( ClapTrap const & src);
    ~ClapTrap(void);

    ClapTrap & operator = (ClapTrap const & rhs);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName(void) const;


private:
    std::string _name;
    int         _hitPoints;
    int         _energyPoints;
    int         _attackDamage;
};

std::ostream    & operator<<(std::ostream &o, ClapTrap const &i);

#endif
