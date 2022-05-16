/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:48:16 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/16 11:44:43 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

// ************************************************************************** //
//                                    CLASS                                   //
// ************************************************************************** //

class Brain {

    public:

        Brain(void);
        Brain(std::string name);
        Brain(Brain const & src);
        virtual ~Brain(void);

        Brain   &operator = (Brain const & rhs);

        std::string *getIdeas();

        std::string ideas[100];

    protected:

    private:
        std::string _name;
};

// ************************************************************************** //
//                                   OTHERS                                   //
// ************************************************************************** //

std::ostream    &bold_on(std::ostream& os);
std::ostream    &bold_off(std::ostream& os);

#endif