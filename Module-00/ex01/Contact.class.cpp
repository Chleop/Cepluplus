/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:39:20 by cproesch          #+#    #+#             */
/*   Updated: 2022/04/28 17:27:54 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

// **************************************************************************//
//                                CONSTRUCTOR                                //
// **************************************************************************//

Contact::Contact(void)
{
    return;
}

// **************************************************************************//
//                                 DESTRUCTOR                                //
// **************************************************************************//

Contact::~Contact(void)
{
    return;
}

// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//

std::string Contact::get_first_name(void) const
{
    return this->_first_name;
}

void        Contact::set_first_name(std::string name)
{
    this->_first_name = name;
    return;
}

std::string Contact::get_last_name(void) const
{
    return this->_last_name;
}

void        Contact::set_last_name(std::string name)
{
    this->_last_name = name;
    return;
}
std::string Contact::get_nickname(void) const
{
    return this->_nickname;
}

void        Contact::set_nickname(std::string name)
{
    this->_nickname = name;
    return;
}
std::string Contact::get_phonenumber(void) const
{
    return this->_phonenumber;
}

void        Contact::set_phonenumber(std::string name)
{
    this->_phonenumber = name;
    return;
}
std::string Contact::get_darkest_secret(void) const
{
    return this->_darkest_secret;
}

void        Contact::set_darkest_secret(std::string name)
{
    this->_darkest_secret = name;
    return;
}
