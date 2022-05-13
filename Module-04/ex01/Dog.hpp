/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:56:10 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/13 19:02:43 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

// ************************************************************************** //
//                                    CLASS                                   //
// ************************************************************************** //

class Dog : public virtual Animal
{

    public:

        Dog(void);
        Dog(std::string name);
        Dog( Dog const & src);
        ~Dog(void);

        Dog & operator=(Dog const & rhs);

        void    makeSound(void) const;
        Brain   *getBrain(void);
        void    setBrain(Brain *brain);

    protected:

    private:

        Brain *_Brain;

};

// ************************************************************************** //
//                                   OTHERS                                   //
// ************************************************************************** //

#endif