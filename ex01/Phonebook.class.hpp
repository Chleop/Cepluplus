/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:42:37 by cproesch          #+#    #+#             */
/*   Updated: 2022/04/27 17:01:21 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.class.hpp"

# define PHONEBOOK_SIZE 8

class Phonebook
{

public:
    Phonebook(void);
    ~Phonebook(void);

    void    add_contact(void);
    void    search(void) const;

private:
    Contact _contact[PHONEBOOK_SIZE];
    int     _nb_contacts;
    int     _current_contact;

    void        _set_nb_contacts(void);
    void        _set_current_contact(void);
    void        _print_phonebook(void) const;
    void        _print_contact(int i) const;
    void        _print_table(std::string str[], int nb_column) const;
    std::string _get_variable_from_user(int i);

};

#endif