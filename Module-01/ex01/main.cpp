/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/04 12:16:59 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

# define NUMBER_OF_TESTS    5

std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}

int main(void)
{
    Zombie      *x;
    std::string name[NUMBER_OF_TESTS] = {"Marie", "Jesus", "Joseph", "Pierre", "Madeleine"};
    int         N[NUMBER_OF_TESTS] = {3, 10, 0, 1, 25};
    int         i;
    int         j;

    for (i = 0; i < NUMBER_OF_TESTS; i++)
    {
        std::cout << bold_on << "Here is a Horde of " << N[i] << " Zombies who's names are all " << name[i] << bold_off << std::endl;
        x = zombieHorde(N[i], name[i]);
        for (j = 0; j < N[i]; j++)
            (x + j)->announce();
        delete[](x);
    }
    return 0;
}
