/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:56:10 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/13 15:12:39 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

// ************************************************************************** //
//                                    CLASS                                   //
// ************************************************************************** //

class WrongCat : public virtual WrongAnimal
{

    public:

        WrongCat(void);
        WrongCat(std::string name);
        WrongCat(WrongCat const & src);
        ~WrongCat(void);

        WrongCat & operator=(WrongCat const & rhs);

        void    makeSound(void) const;

    protected:

    private:

};

// ************************************************************************** //
//                                   OTHERS                                   //
// ************************************************************************** //

#endif