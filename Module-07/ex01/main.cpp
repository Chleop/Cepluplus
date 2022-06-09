/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:02:17 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/09 13:00:20 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template < typename T >
void f(T const & element)
{
    std::cout << "Element " << element << " says hello ! " << std::endl;
    return;
}

int main( void ) 
{
    int a[4] = {1, 56, 58, 5};
    char b[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    double c[5] = {69.3, 5.36, 698.21};
    std::string d[2] = {"hello", "babe"};

    std::cout << std::endl << ">>> INT >>>" << std::endl;
    iter(a, 4, f);
    std::cout << std::endl << ">>> CHAR >>>" << std::endl;
    iter(b, 6, f);
    std::cout << std::endl << ">>> DOUBLE >>>" << std::endl;
    iter(c, 3, f);
    std::cout << std::endl << ">>> STRING >>>" << std::endl;
    iter(d, 2, f);

    return 0;
}
