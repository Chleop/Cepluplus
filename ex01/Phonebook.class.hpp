/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:42:37 by cproesch          #+#    #+#             */
/*   Updated: 2022/04/26 17:42:33 by cproesch         ###   ########.fr       */
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

    void    print_phonebook(void);
    void    set_nb_contacts(void);
    void    add_contact(void);

private:
    Contact _contact[PHONEBOOK_SIZE];
    int     _nb_contacts;
    
};

#endif