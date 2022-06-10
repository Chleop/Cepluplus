/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:20:17 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/10 12:00:22 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <deque>

#define TEST_INT 7

void    print_deque_init(void)
{
    std::cout   << std::endl 
            << "\033[32m"
            << "### INITIALIZING DEQUE WITH 6 ELEMENTS FROM 0 TO 5 "
            << "\033[37m"
            << std::endl;
    return;
}

void    print_vector_init(void)
{
    std::cout   << std::endl 
                << "\033[32m"
                << "### INITIALIZING VECTOR WITH 21 ELEMENTS FROM 0 TO 20 "
                << "\033[37m"
                << std::endl;
    return;
}

template < typename T >
void test (T container1, int test_int)
{
// specifying that T::iterator is a typename
    typename T::iterator iter;

    std::cout   << std::endl 
                << "\033[32m"
                << "### TESTING WITH "
                << test_int
                << " : \033[37m"
                << std::endl;

// applying the easyfind function
    iter = easyfind(container1, test_int);

// returning the result
    if (iter == container1.end())
        std::cout << "Element not found" << std::endl;
    else
        std::cout << "Element found = " << *iter << std::endl;
    std::cout << std::endl;
}

int main (void)
{
    std::deque <int> mydeque;
    std::vector <int> vector1;

// initializing the deque with values from 0 to 5
    print_deque_init();
    for (int i = 0; i <= 5; i++)
        mydeque.push_back(i);
    
    test(mydeque, TEST_INT);

// initializing the vector with values from 0 to 20
    print_vector_init();
    for (int i = 0; i <= 20; i++)
        vector1.push_back(i);

    test(vector1, TEST_INT);
    return 0;
}

