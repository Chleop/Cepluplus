/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:15:36 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/16 13:12:04 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    // const AAnimal* a = new AAnimal();
    const AAnimal* d = new Dog();
    const AAnimal* c = new Cat();
    
    // std::cout << std::endl;
    // std::cout << a->getType() << std::endl;
    // a->makeSound();
    // std::cout << std::endl;
    
    std::cout << d->getType() << std::endl;
    d->makeSound();
    std::cout << std::endl;
    
    std::cout << c->getType() << std::endl;
    c->makeSound();
    std::cout << std::endl;

    delete c;
    delete d;
    // delete a;
    return 0;
}
