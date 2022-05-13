/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:15:36 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/13 15:23:15 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << std::endl;
    std::cout << "TESTING WITH THE INHERITED CLASS ANIMAL" << std::endl;

    const Animal* a = new Animal();
    const Animal* d = new Dog();
    const Animal* c = new Cat();
    
    std::cout << std::endl;
    std::cout << a->getType() << std::endl;
    a->makeSound();
    std::cout << std::endl;
    
    std::cout << d->getType() << std::endl;
    d->makeSound();
    std::cout << std::endl;
    
    std::cout << c->getType() << std::endl;
    c->makeSound();
    std::cout << std::endl;

    delete c;
    delete d;
    delete a;

    std::cout << std::endl;
    std::cout << "TESTING WITH THE INHERITED CLASS WRONG ANIMAL" << std::endl;

    const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();
    
    std::cout << std::endl;
    std::cout << wa->getType() << std::endl;
    wa->makeSound();
    std::cout << std::endl;
    
    std::cout << wc->getType() << std::endl;
    wc->makeSound();
    std::cout << std::endl;

    delete wc;
    delete wa;

    return 0;
}
