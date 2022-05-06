/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/06 11:24:41 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*  An object allocated on the stack will be destroyed automatically 
    when it goes out of scope (destrucor called).
*/

int main(void)
{
    Zombie *x;

    x = newZombie("NewZombie");
    x->announce();
    randomChump("randomChump");
    delete(x);
    return 0;
}
