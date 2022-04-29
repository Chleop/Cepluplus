/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:31:50 by cproesch          #+#    #+#             */
/*   Updated: 2022/04/27 17:55:46 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

std::string    get_user_input(void)
{
    std::string input;

    std::cout << "\nPlease type an option ('ADD', 'SEARCH' or 'EXIT'): ";
    std::getline(std::cin, input);
    std::cout << "\n";
    return input;
}

int main(void)
{
    Phonebook   repertoire;
    std::string input;

    while (1)
    {
        input = get_user_input();
        if (input.compare("EXIT") == 0)
            break;
        else if (input.compare("SEARCH") == 0)
            repertoire.search();
        else if (input.compare("ADD") == 0)
            repertoire.add_contact();
    }
    return 0;
}
