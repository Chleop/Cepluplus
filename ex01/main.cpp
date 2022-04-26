/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:31:50 by cproesch          #+#    #+#             */
/*   Updated: 2022/04/26 17:29:42 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

int main(void)
{
    std::string input;
    Phonebook   pbk;

    while (1)
    {
        std::cout << "Please type an option ('ADD', 'SEARCH' or 'EXIT'): ";
        std::cin >> input;
        if (input.compare("EXIT") == 0)
            break;
        else if (input.compare("SEARCH") == 0)
            pbk.print_phonebook();
        else if (input.compare("ADD") == 0)
            pbk.add_contact();
    }
    return 0;
}
