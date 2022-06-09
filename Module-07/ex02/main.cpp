/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:02:17 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/09 13:09:03 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template < typename T >
void    test(std::string str, Array < T > & array)
{
    std::cout   << std::endl 
                << "\033[32m### TESTING " << str << "\033[37m"
                << std::endl;
    try
    {
        std::cout << "Array size = " << array.size() << std::endl;
        std::cout << "Adress : " << &array << std::endl;
        std::cout << "First element : " << array[0] << std::endl;
        std::cout << "Out of array element : " << array[5] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main( void ) 
{
    Array <int> int_empty_array;
    Array <int> int_array(5);
    Array <int> copy_int_array(int_array);
    Array <std::string> string_array(5);
    
    test("EMPTY INT ARRAY - DEFAULT CONSTRUCTOR", int_empty_array);
    test("INT ARRAY WITH N ELEMENTS", int_array);
    test("COPY OF INT ARRAY", copy_int_array);
    test("STRING ARRAY WITH N ELEMENTS", string_array);

    return 0;
}