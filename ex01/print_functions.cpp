/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_functions.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:58:52 by cproesch          #+#    #+#             */
/*   Updated: 2022/04/28 17:49:12 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

void    Phonebook::_print_column(std::string str) const
{
    std::cout << "|";
    if (str.length() > 10)
    {
        str.resize(9);
        str = str + ".";
    }
    std::cout.width(10);
    std::cout << str;
    return;
}

void    Phonebook::_print_table(std::string str[], int nb_column) const
{
    int i;
    
    std::cout << '|';
    for(i = 0; i < nb_column; i++)
    {
        if (str[i].length() > 10)
        {
            str[i].resize(9);
            str[i] = str[i] + ".";
        }
        std::cout.width(10);
        std::cout << str[i] << "|";
    }
    std::cout << std::endl;
    return;
}

void    Phonebook::_print_phonebook(void) const
{
    int         i;
    int         j;
    std::string title[4] = {
        "index", 
        "First name", 
        "Last name", 
        "Nickname"};

    if(!this->_nb_contacts)
        std::cout << "----------NO CONTACT ENTERED YET BABY" << std::endl;
    else
    {
        this->_print_table(title, 4);
        for(i = 0; i < this->_nb_contacts; i++)
        {
            std::cout << '|';
            std::cout.width(10);
            std::cout << i;
            this->_print_column(this->_contact[i].get_first_name());
            this->_print_column(this->_contact[i].get_last_name());
            this->_print_column(this->_contact[i].get_nickname());
            std::cout << "|" << std::endl;
        }
    }
    return;
}

void    Phonebook::_print_contact(int i) const
{
    int         j = 0;
    std::string line[5] = {
        "First name: ",
        "Last name: ",
        "Nickname: ",
        "Phone number: ",
        "Darkest secret: "
    };
    std::string value[5] = {
        this->_contact[i].get_first_name(),
        this->_contact[i].get_last_name(),
        this->_contact[i].get_nickname(),
        this->_contact[i].get_phonenumber(),
        this->_contact[i].get_darkest_secret()
    };

    for (j = 0; j < 5; j++)
    {
        std::cout.width(25);
        std::cout << line[j] << value[j] << std::endl;
    }
    return;
}
