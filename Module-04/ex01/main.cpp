/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:15:36 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/13 19:22:41 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    // int     i;
    Animal  **array = new Animal*[4];

    array[0] = new Cat();
    // array[1] = array[2];
    // array[2] = new Dog();
    // array[3] = array[0];

    Brain *Brain0 = new Brain();
    Brain0->ideas[0] = "ChatRavoile";
    array[0]->setBrain(Brain0);

    std::cout << array[0]->getBrain() << std::endl;

    // !!! AJOUTER UN OPERATOR OVERLOAD SUR << POUR IMPRIMER L'IDEE

    // Brain *Brain1 = new Brain();
    // Brain1->ideas[0] = "ChatLutier";
    // array[1]->setBrain(Brain1);

    // Brain *Brain2 = new Brain();
    // Brain2->ideas[0] = "ChienDesBulles";
    // array[2]->setBrain(Brain2);

    // Brain *Brain3 = new Brain();
    // Brain3->ideas[0] = "ChienDesPendules";
    // array[3]->setBrain(Brain3);

    delete array[0];

    // for (i = 3; i >= 0; i--)
    // {
    //     delete array[i];
    // }
    delete [] array;
    return 0;
}
