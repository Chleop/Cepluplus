/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:20:17 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/10 12:23:26 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void    init_deque(std::deque <int> & mydeque)
{
    std::cout   << std::endl 
            << "\033[32m"
            << "### INITIALIZING DEQUE WITH 6 ELEMENTS FROM 0 TO 5 "
            << "\033[37m"
            << std::endl;
    for (int i = 0; i <= 5; i++)
        mydeque.push_back(i);
    return;
}

void    init_vector(std::vector <int> & myvector)
{
    std::cout   << std::endl 
                << "\033[32m"
                << "### INITIALIZING VECTOR WITH 21 ELEMENTS FROM 0 TO 20 "
                << "\033[37m"
                << std::endl;
    for (int i = 0; i <= 20; i++)
        myvector.push_back(i);
    return;
}

template < typename T >
void test (T container1, int test_int)
{
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
    std::vector <int> myvector;

// initializing the deque with values from 0 to 5
    init_deque(mydeque);
// testing the dequeu 
    test(mydeque, TEST_INT);

// initializing the vector with values from 0 to 20
    init_vector(myvector);
// testing the vector
    test(myvector, TEST_INT);
    return 0;
}
