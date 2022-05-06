/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/06 12:02:40 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}

int main(void)
{
    Harl h;

    std::cout << bold_on << "\nTesting DEBUG:" << bold_off << std::endl;
    h.complain("DEBUG");

    std::cout << bold_on << "\nTesting INFO:" << bold_off << std::endl;
    h.complain("INFO");

    std::cout << bold_on << "\nTesting WARNING:" << bold_off << std::endl;
    h.complain("WARNING");

    std::cout << bold_on << "\nTesting ERROR:" << bold_off << std::endl;
    h.complain("ERROR");
    
    std::cout << bold_on << "\nTesting ERfffROR:" << bold_off << std::endl;
    h.complain("ERfffROR");
    std::cout << std::endl;
    return 0;
}