/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:42:37 by cproesch          #+#    #+#             */
/*   Updated: 2022/04/26 17:48:35 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# include <string>

class Contact
{

public:
    Contact(void);
    ~Contact(void);
    std::string get_first_name(void) const;
    void        set_first_name(std::string name);
    std::string get_last_name(void) const;
    void        set_last_name(std::string name);
    std::string get_nickname(void) const;
    void        set_nickname(std::string name);
    std::string get_phonenumber(void) const;
    void        set_phonenumber(std::string phonenumber);
    std::string get_darkest_secret(void) const;
    void        set_darkest_secret(std::string name);

private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darkest_secret;

};

#endif
