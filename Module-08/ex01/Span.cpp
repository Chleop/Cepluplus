/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:16:08 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/13 18:47:48 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// **************************************************************************//
//                       CONSTRUCTORS / DESTRUCTORS                          //
// **************************************************************************//

Span::Span(void) : _myList() { return; }

Span::Span(unsigned int N) :
_max(N), _myList()
{
    return;
}

Span::Span(Span const & src)
{
    *this = src;
    return;
}

Span::~Span(void){ return; }

// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

Span & Span::operator = (Span const & rhs)
{
    if (this != &rhs)
        this->_max = rhs.getMax();
    return *this;
}

// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//

const unsigned int & Span::getMax(void) const
{
    return this->_max;
}

const std::list <int> & Span::getMylist(void) const
{
    return this->_myList;
}

// **************************************************************************//
//                              PUBLIC FUNCTIONS                             //
// **************************************************************************//

void Span::addNumber(int num)
{
    std::cout <<  "taille de ma liste : " << getMylist().size() << std::endl;
    if (this->_myList.size() > getMax())
        throw std::exception();
    this->_myList.push_back(num);
    std::cout <<  "Dans addnumber, last = " << (this->_myList.back()) << std::endl;
    return;
}

int Span::shortestSpan(void) const
{
    int i = 0;
    std::list <int> sortedList = this->_myList;
    
    sortedList.sort();
    
    return i;
}

int Span::longestSpan(void) const
{
    std::list <int> myList = this->_myList;
    
    // sort(getMylist().begin(), getMylist().end());
    myList.sort();
    return (*--(getMylist().end()) - *(getMylist().begin()));
}
