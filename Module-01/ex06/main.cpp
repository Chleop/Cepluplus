/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/06 11:07:32 by cproesch         ###   ########.fr       */
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

    if (argc != 2)
    {
        std::cout << "Please enter one right argument" << std::endl;
        return 1;
    }
    std::string arg = (std::string)argv[1];
    h.complain(arg);
    return 0;
}