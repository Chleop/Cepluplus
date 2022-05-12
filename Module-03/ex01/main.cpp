/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:15:36 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/12 12:47:01 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    vilain("Vilain Scavus");

    std::cout << std::endl;
    std::cout << vilain << std::endl;

    vilain.attack("Gentil oiseau des champs");
    std::cout << vilain << std::endl;

    vilain.takeDamage(70);
    std::cout << vilain << std::endl;

    vilain.guardGate();

    vilain.guardGate();

    vilain.beRepaired(50);
    std::cout << vilain << std::endl;

    vilain.takeDamage(100);
    std::cout << vilain << std::endl;

    vilain.beRepaired(50);
    std::cout << vilain << std::endl;

    return 0;
}
