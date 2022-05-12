/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:15:36 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/12 13:07:23 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap    vilain("Vilain Fragus");

    std::cout << std::endl;
    std::cout << vilain << std::endl;

    vilain.attack("Gentil oiseau des champs");
    std::cout << vilain << std::endl;

    vilain.takeDamage(70);
    std::cout << vilain << std::endl;

    vilain.highFivesGuys();
    vilain.highFivesGuys();
    vilain.highFivesGuys();

    vilain.beRepaired(50);
    std::cout << vilain << std::endl;

    vilain.highFivesGuys();

    return 0;
}
