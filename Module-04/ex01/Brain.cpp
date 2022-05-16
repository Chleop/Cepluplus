/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:11:20 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/16 11:44:41 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

Brain::Brain(void)
{
    std::cout << "      [Brain default constructor called]" << std::endl;
    return;
}

Brain::Brain(std::string name)
{
    this->_name = name;
    std::cout << "      [Brain parametric constructor called]" << std::endl;
    return;
}

Brain::Brain(Brain const & src)
{
    std::cout << "      [Brain copy constructor called]" << std::endl;
    *this = src;
    return;
}

Brain::~Brain(void)
{
    std::cout << "  [Brain destructor called]" << std::endl;
    return;
}

std::string *Brain::getIdeas(void)
{
    return this->ideas;
}

// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//



// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

Brain &     Brain::operator = (Brain const & rhs)
{
    int i;
    
    std::cout << "      [Brain assignment operator called]" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        for (i = 0; i < 100 ; i++)
            this->ideas[i] = rhs.ideas[i];
    }
    return *this;
}


// **************************************************************************//
//                           PUBLIC FUNCTIONS                                //
// **************************************************************************//



// **************************************************************************//
//                           DESIGN FUNCTIONS                                //
// **************************************************************************//
