/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:15:36 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/11 17:28:35 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    inst1;
    ClapTrap    inst2("Chleo");
    ClapTrap    inst3(inst1);

    std::cout << inst1 << std::endl;
    std::cout << inst2 << std::endl;
    std::cout << inst3 << std::endl;

    inst3 = inst2;
    std::cout << inst3 << std::endl;
    return 0;
}
