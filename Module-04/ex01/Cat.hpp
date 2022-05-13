/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:56:10 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/13 19:10:11 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

// ************************************************************************** //
//                                    CLASS                                   //
// ************************************************************************** //

class Cat : public virtual Animal
{

    public:

        Cat(void);
        Cat(std::string name);
        Cat(Cat const & src);
        ~Cat(void);

        Cat & operator=(Cat const & rhs);

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