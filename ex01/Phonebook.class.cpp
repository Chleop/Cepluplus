/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:07:20 by cproesch          #+#    #+#             */
/*   Updated: 2022/04/26 18:14:10 by cproesch         ###   ########.fr       */
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
    this->_nb_contacts = 0;
    return;
}

Phonebook::~Phonebook(void)
{
    return;
}

void    Phonebook::print_phonebook(void)
{
    int i;

    std::cout.width(10);
    std::cout << std::left << "index" << '|';
    std::cout.width(10);
    std::cout << std::left << "First name" << '|';
    std::cout.width(10);
    std::cout << std::left << "Last name" << '|';
    std::cout.width(10);
    std::cout << std::left << "Nickname";
    std::cout << std::endl;
    if(!this->_nb_contacts)
        std::cout << "No contacts yet babe" << std::endl;
    else
    {
        for(i = 0; i < this->_nb_contacts; i++)
        {
            std::cout.width(10);
            std::cout << std::left << i << '|';
            std::cout.width(10);
            std::cout << std::left << this->_contact[i].get_first_name() << "|";
            std::cout.width(10);
            std::cout << std::left << this->_contact[i].get_last_name() << "|";
            std::cout.width(10);
            std::cout << std::left << this->_contact[i].get_nickname();
            std::cout << std::endl;
        }
    }
    return;
}

void    Phonebook::add_contact(void)
{
    int         contact_nb;
    std::string fn;
    std::string ln;
    std::string nn;
    std::string pn;
    std::string ds;

    contact_nb = this->_nb_contacts % 8;
    std::cout << "Please type First name: ";
    std::cin >> fn;
    std::cout << "Please type Last name: ";
    std::cin >> ln;
    std::cout << "Please type Nickname: ";
    std::cin >> nn;
    std::cout << "Please type phone number: ";
    std::cin >> pn;
    std::cout << "Please type darkest secret: ";
    std::cin >> ds;    
    this->_contact[contact_nb].set_first_name(fn);
    this->_contact[contact_nb].set_last_name(ln);
    this->_contact[contact_nb].set_nickname(nn);
    this->_contact[contact_nb].set_phonenumber(pn);
    this->_contact[contact_nb].set_darkest_secret(ds);
    this->_nb_contacts += 1;
    return;
}
