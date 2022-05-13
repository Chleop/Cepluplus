/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:56:10 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/13 15:20:27 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <iomanip>

// ************************************************************************** //
//                                    CLASS                                   //
// ************************************************************************** //

class WrongAnimal {

    public:

                    WrongAnimal(void);
                    WrongAnimal(std::string name);
                    WrongAnimal(WrongAnimal const & src);
                    virtual ~WrongAnimal(void);

        WrongAnimal      &operator=(WrongAnimal const & rhs);

        std::string     getType(void) const;
        void    makeSound(void) const;

    protected:

        std::string _name;
        std::string _type;

    private:

};

// ************************************************************************** //
//                                   OTHERS                                   //
// ************************************************************************** //


#endif