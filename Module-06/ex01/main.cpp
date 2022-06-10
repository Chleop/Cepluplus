/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:10:39 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/03 11:14:14 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"convert.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t raw;

    raw = reinterpret_cast<uintptr_t>(ptr);
    return raw;
}

Data* deserialize(uintptr_t raw)
{
    Data *ptr;

    ptr = reinterpret_cast<Data *>(raw);
    return ptr;
}

int main(void)
{
    Data ptr;
    Data *ptr2;
    uintptr_t raw;
    
    ptr.i = 2;
    ptr.c = 'a';
    std::cout << "Dans PTR : i = " << ptr.i << std::endl;
    std::cout << "Dans PTR : c = " << ptr.c << std::endl;
    raw = serialize(&ptr);
    ptr2 = deserialize(raw);
    std::cout << "Dans PTR2 : i = " << ptr2->i << std::endl;
    std::cout << "Dans PTR2 : c = " << ptr2->c << std::endl;
    return 0;
}
