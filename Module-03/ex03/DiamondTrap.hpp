/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:48:14 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/12 16:08:48 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class DiamondTrap : public FragTrap, public ScavTrap
{

public:

    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const & src);
    ~DiamondTrap(void);

    DiamondTrap & operator = (DiamondTrap const & rhs);

    std::string getName(void) const;

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void whoAmI(void);

private:

    std::string _name;

};

#endif