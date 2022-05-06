/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/06 11:46:43 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

# define NUMBER_OF_TESTS    3

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
    std::string name[NUMBER_OF_TESTS] = {"Jesus", "Marie", "Joseph"};
    int         N[NUMBER_OF_TESTS] = {100};
    int         i;
    int         j;

    for (i = 0; i < NUMBER_OF_TESTS; i++)
    {
        std::cout   << std::endl
                    << bold_on
                    << "Test "
                    << i 
                    << " : Here is a Horde of " 
                    << N[i] 
                    << " Zombie(s) who's names are all " 
                    << name[i] 
                    << bold_off 
                    << std::endl;
        x = zombieHorde(N[i], name[i]);
        for (j = 0; j < N[i]; j++)
            x[j].announce();
        delete[](x);
    }
    return 0;
}
