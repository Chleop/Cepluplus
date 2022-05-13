/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:15:36 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/13 13:17:49 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main(void)
{
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
    return 0;
}
