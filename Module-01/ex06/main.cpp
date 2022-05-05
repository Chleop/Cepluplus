/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/05 19:15:17 by cproesch         ###   ########.fr       */
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

int main(int argc, char *argv[])
{
    Harl h;

    if ((argc != 2) || (argv[1].compare("DEBUG") && argv[1].compare("INFO") \
    && argv[1].compare("WARNING") && argv[1].compare("ERROR")))
    {
        std::cout << "Please enter one right argument" << std::endl;
        return 1;
    }
    h.complain("DEBUG");
    return 0;
}