/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:20:17 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/14 14:47:17 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

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

    return 0;
}
