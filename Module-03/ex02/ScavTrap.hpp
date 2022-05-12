/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:48:14 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/12 15:30:19 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class ScavTrap : public ClapTrap
{

public:

    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap(void);

    ScavTrap & operator = (ScavTrap const & rhs);

    void attack(const std::string& target);
    void guardGate(void);

private:
    int _gateGuarded;
};

#endif