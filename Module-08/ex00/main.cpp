/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:20:17 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/09 18:56:52 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main (void)
{
    std::vector <int> vector1;
    std::vector <int> ::iterator iterator1;
    
// initializing the vector with values from 0 to 20
    for (int i = 0; i <= 20; i++)
        vector1.push_back(i);

// applying the easyfind function
    iterator1 = easyfind(vector1, 13);

// returning the result
    if (iterator1 == vector1.end())
        std::cout << "Element not found" << std::endl;
    else
        std::cout << "Element found = " << *iterator1 << std::endl;
    return 0;
}
