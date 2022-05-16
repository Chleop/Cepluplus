/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:15:36 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/16 12:48:03 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    int     i;
    Animal  *array[4];

    std::cout << std::endl << bold_on << "TESTING ARRAY OF OBJECTS" << bold_off << std::endl << std::endl;
    array[0] = new Cat();
    array[1] = new Cat();
    array[2] = new Dog();
    array[3] = new Dog();
    std::cout << std::endl;
    for (i = 3; i >= 0; i--)
        delete array[i];

    std::cout << std::endl << bold_on << "TESTING DEEP COPY" << bold_off << std::endl;

    std::string idTable1[100] = {"J'aime", "les", "laids", ""};
    std::string idTable2[100] = {"J'aime", "le", "poison", ""};
    std::cout << std::endl << bold_on << "=> On cree le chat Mo" << bold_off << std::endl;
    Cat     Mo;
    std::cout << std::endl << bold_on << "=> On set les idees de Mo a idTable1" << bold_off << std::endl;
    Mo.setBrain(idTable1);
    std::cout << std::endl << bold_on << "=> On cree le chat Lumo par copie du chat Mo" << bold_off << std::endl;
    Cat     Lumo(Mo);
    std::cout << std::endl << bold_on << "=> On affiche les idees du chat Mo " << bold_off << std::endl;
    Mo.displayIdeas();
    std::cout << std::endl << bold_on << "=> On affiche les idees du chat Lumo " << bold_off << std::endl;
    Lumo.displayIdeas();
    std::cout << std::endl << bold_on << "=> On set les idees de Mo a idTable2" << bold_off << std::endl;
    Mo.setBrain(idTable2);
    std::cout << std::endl << bold_on << "=> On affiche les idees du chat Mo " << bold_off << std::endl;
    Mo.displayIdeas();
    std::cout << std::endl << bold_on << "=> On affiche les idees du chat Lumo " << bold_off << std::endl;
    Lumo.displayIdeas();
    std::cout << std::endl;
    return 0;
}
