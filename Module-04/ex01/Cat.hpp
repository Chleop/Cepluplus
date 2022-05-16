/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:56:10 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/16 12:42:39 by cproesch         ###   ########.fr       */
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

        void    setBrain(std::string *idTable);
        void    displayIdeas(void) const;
        void    makeSound(void) const;

    protected:

    private:

        Brain *_Brain;

};

// ************************************************************************** //
//                                   OTHERS                                   //
// ************************************************************************** //

#endif