/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:11:20 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/13 19:22:27 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

Brain::Brain(void)
{
    std::cout << "[Brain default constructor called]" << std::endl;
    return;
}

Brain::Brain(std::string name)
{
    this->_name = name;
    std::cout << "[Brain parametric constructor called]" << std::endl;
    return;
}

Brain::Brain(Brain const & src)
{
    std::cout << "[Brain copy constructor called]" << std::endl;
    *this = src;
    return;
}

Brain::~Brain(void)
{
    std::cout << "[Brain destructor called]" << std::endl;
    return;
}


// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//



// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

Brain &     Brain::operator = (Brain const & rhs)
{
    std::cout << "[Brain assignment operator called]" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
    }
    return *this;
}

std::ostream    & operator<<(std::ostream &o, Brain const &i)
{
    o    << i.ideas[0]
        << std::endl;
    return o;
}


// **************************************************************************//
//                           PUBLIC FUNCTIONS                                //
// **************************************************************************//



// **************************************************************************//
//                           DESIGN FUNCTIONS                                //
// **************************************************************************//
