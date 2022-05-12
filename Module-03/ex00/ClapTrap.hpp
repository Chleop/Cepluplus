/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:00:27 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/12 11:53:09 by cproesch         ###   ########.fr       */
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

    std::string getName(void) const;
    unsigned int get_hitPoints(void) const;
    unsigned int get_energyPoints(void) const;
    unsigned int get_attackDamage(void) const;

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

private:

    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

};

std::ostream    &operator<<(std::ostream &o, ClapTrap const &i);
std::ostream    &bold_on(std::ostream& os);
std::ostream    &bold_off(std::ostream& os);

#endif
