/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:07:20 by cproesch          #+#    #+#             */
/*   Updated: 2022/04/26 17:50:35 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

// Phonebook::Phonebook(void)
// {
//     int i;
//     Contact ctct("", "", "", "", "");
    
//     std::cout << "Constructor called" << std::endl;
//     for(i = 0; i < PHONEBOOK_SIZE; i++)
//         this->_contact[i] = ctct;
//     return;
// }

Phonebook::Phonebook(void)
{
    return;
}

Phonebook::~Phonebook(void)
{
    return;
}

void    Phonebook::set_nb_contacts(void)
{
    this->_nb_contacts = 0;
    return;
}

void    Phonebook::print_phonebook(void)
{
    int i;

    if(!this->_nb_contacts)
        std::cout << "No contacts yet babe" << std::endl;
    for(i = 0; i < this->_nb_contacts; i++)
    {
        std::cout << std::setfill(10);
        std::cout << i << '|';
        std::cout << std::setfill(10);
        std::cout << this->_contact[i].get_first_name() << "|";
        std::cout << std::setfill(10);
        std::cout << this->_contact[i].get_first_name() << "|";
        std::cout << std::setfill(10);
        std::cout << this->_contact[i].get_first_name() << "|";
        std::cout << std::endl;
    }
    return;
}

void    Phonebook::add_contact(void)
{
    int         contact_nb;
    std::string fn;

    contact_nb = this->_nb_contacts % 8;
    std::cout << "Please type First name: ";
    std::cin >> fn;
    
    this->_contact[contact_nb].set_first_name(fn);
    
    this->_nb_contacts += 1;
    return;
}
