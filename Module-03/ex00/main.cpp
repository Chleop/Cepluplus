/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:15:36 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/12 11:44:28 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    vilain("Vilain");

    std::cout << std::endl;
    std::cout << vilain << std::endl;
    std::cout << std::endl;

    vilain.attack("Gentil");
    std::cout << vilain << std::endl;
    std::cout << std::endl;

    vilain.takeDamage(7);
    std::cout << vilain << std::endl;
    std::cout << std::endl;

    vilain.beRepaired(5);
    std::cout << vilain << std::endl;
    std::cout << std::endl;

    vilain.takeDamage(10);
    std::cout << vilain << std::endl;
    std::cout << std::endl;

    vilain.beRepaired(5);
    std::cout << vilain << std::endl;
    std::cout << std::endl;

    return 0;
}
