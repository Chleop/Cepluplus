/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:56:10 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/13 13:07:00 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <iomanip>

// ************************************************************************** //
//                                    CLASS                                   //
// ************************************************************************** //

class Animal {

    public:

                    Animal(void);
                    Animal(std::string name);
                    Animal(Animal const & src);
                    virtual ~Animal(void);

        Animal      &operator=(Animal const & rhs);

        std::string     getType(void) const;
        virtual void    makeSound(void) const;

    protected:

        std::string _name;
        std::string _type;

    private:

};

// ************************************************************************** //
//                                   OTHERS                                   //
// ************************************************************************** //

std::ostream    & operator<<(std::ostream &o, Animal const &i);
std::ostream    &bold_on(std::ostream& os);
std::ostream    &bold_off(std::ostream& os);

#endif