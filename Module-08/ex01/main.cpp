/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:20:17 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/15 11:05:30 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


// int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }

int current = 0;
int UniqueNumber (void) 
{
    ++current;
    return current;
}

int main (void)
{
    Span mySpan(3);

// Test 1
    std::cout << std::endl << "TEST 1 :" << std::endl; 
    try
    {
        std::cout << "Adding number : " << mySpan.addNumber(6) << std::endl;

        std::cout << "Longest span : " << mySpan.longestSpan() << std::endl;
        std::cout << "Shortest span : " << mySpan.shortestSpan() << std::endl;
    }
    catch(const char * e)
    {
        std::cerr << "Exception : " << e << std::endl;
    }
    
// Test 2
    std::cout << std::endl << "TEST 2 :" << std::endl;
    try
    {
        std::cout << "Adding number : " << mySpan.addNumber(3) << std::endl;
        std::cout << "Adding number : " << mySpan.addNumber(666) << std::endl;

        std::cout << "Longest span : " << mySpan.longestSpan() << std::endl;
        std::cout << "Shortest span : " << mySpan.shortestSpan() << std::endl;
    }
    catch(const char * e)
    {
        std::cerr << "Exception : " << e << std::endl;
    }

// Test 3
    std::cout << std::endl << "TEST 3 :" << std::endl;
    try
    {
        std::cout << "Adding number : " << mySpan.addNumber(33) << std::endl;
        std::cout << "Adding number : " << mySpan.addNumber(333) << std::endl;

        std::cout << "Longest span : " << mySpan.longestSpan() << std::endl;
        std::cout << "Shortest span : " << mySpan.shortestSpan() << std::endl;
    }
    catch(const char * e)
    {
        std::cerr << "Exception : " << e << std::endl;
    }
    
// Test 4
    std::cout << std::endl << "TEST 4 :" << std::endl;
    Span mySpan2(100000);

    try
    {
        mySpan2.generate_n_elements(100000, UniqueNumber);
        std::cout << "Longest span : " << mySpan2.longestSpan() << std::endl;
        std::cout << "Shortest span : " << mySpan2.shortestSpan() << std::endl;
    }
    catch(const char * e)
    {
        std::cerr << "Exception : " << e << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
