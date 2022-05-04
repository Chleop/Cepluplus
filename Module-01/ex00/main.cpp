/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/04 11:11:51 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie  *z;

    z = new Zombie;
    z->set_name(name);
    return z;
}

void randomChump(std::string name)
{
    Zombie z;

    z.set_name(name);
    z.announce();
}

int main(void)
{
    Zombie *x;

    x = newZombie("NewZombie");
    x->announce();
    randomChump("randomChump");
    delete(x);
    return 0;
}
