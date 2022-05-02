/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:07:20 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/02 13:31:03 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook(void)
{
    this->_nb_contacts = 0;
    this->_current_contact = 0;
    return;
}

Phonebook::~Phonebook(void)
{
    return;
}

void    Phonebook::_set_nb_contacts(void)
{
    if (this->_nb_contacts < PHONEBOOK_SIZE)
        this->_nb_contacts += 1;
    return;
}

void    Phonebook::_set_current_contact(void)
{
    if (this->_current_contact == PHONEBOOK_SIZE - 1)
        this->_current_contact = 0;
    else
        this->_current_contact += 1;
    return;
}

void    Phonebook::search(void) const
{
    int         i;
    std::string str;
    std::string digit = "01234567";

    this->_print_phonebook();
    if(!this->_nb_contacts)
        return;
    while(1)
    {
        std::cout << "\nPlease type index: ";
        std::getline(std::cin, str);
        std::cout << "\n";
        if (str.empty())
            return;
        if (digit.find(str) == std::string::npos)
            std::cout << "----------INPUT ENTERED IN NOT AN INDEX" << std::endl;
        else
        {
            i = atoi(str.c_str());
            if (this->_contact[i].get_first_name().compare("") == 0)
                std::cout << "----------INDEX DOES NOT MATCH AN EXISTING CONTACT" << std::endl;
            else
                break;
        }
    }
    this->_print_contact(i);
    return;
}

std::string    Phonebook::_get_variable_from_user(int i)
{
    std::string input;
    std::string request[5] = {
        "Please type First name: ",
        "Please type Last name: ",
        "Please type Nickname: ",
        "Please type phone number: ",
        "Please type darkest secret: ",
    };

    while(1)
    {
        std::cout << request[i];
        if (std::getline(std::cin, input) && input.compare(""))
            break;
        if (input.empty())
            exit(1);
    }
    return input;
}

void    Phonebook::add_contact(void)
{
    int         i;
    std::string var[5];

    for(i = 0; i < 5; i++)
        var[i] = _get_variable_from_user(i);
    this->_contact[this->_current_contact].set_first_name(var[0]);
    this->_contact[this->_current_contact].set_last_name(var[1]);
    this->_contact[this->_current_contact].set_nickname(var[2]);
    this->_contact[this->_current_contact].set_phonenumber(var[3]);
    this->_contact[this->_current_contact].set_darkest_secret(var[4]);
    this->_set_current_contact();
    this->_set_nb_contacts();
    std::cout << "----------CONTACT ADDED, THANK YOU!" << std::endl;
    return;
}
