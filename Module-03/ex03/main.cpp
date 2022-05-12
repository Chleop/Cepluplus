/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:15:36 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/12 16:01:15 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap    bidule("Diamonus");

    std::cout << std::endl;
    std::cout << bidule << std::endl;

    bidule.whoAmI();
    std::cout << bidule << std::endl;
    
    bidule.attack("Gentil oiseau des champs");
    std::cout << bidule << std::endl;

    bidule.highFivesGuys();

    bidule.takeDamage(150);
    std::cout << bidule << std::endl;

    bidule.beRepaired(50);
    std::cout << bidule << std::endl;

    bidule.highFivesGuys();

    return 0;
}
