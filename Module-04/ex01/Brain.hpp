/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:48:16 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/13 19:22:54 by cproesch         ###   ########.fr       */
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
std::ostream    &operator<<(std::ostream &o, Brain const &i);

#endif