/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:16:08 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/14 17:46:22 by cproesch         ###   ########.fr       */
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

unsigned int Span::getMax(void) const
{
    return this->_max;
}

// **************************************************************************//
//                              PUBLIC FUNCTIONS                             //
// **************************************************************************//

int Span::addNumber(int num)
{
    if (this->_myList.size() + 1 > getMax())
        throw "List has already met its max";
    this->_myList.push_back(num);
    return num;
}

int Span::shortestSpan(void)
{
    std::list <int> :: iterator prev;
    std::list <int> :: iterator iter;
    int minDiff = INT_MAX;
    int diff = 0;
    
    if (this->_myList.size() <= 1)
        throw "List contains less than 2 elements";
    this->_myList.sort();
    iter = this->_myList.begin();
    prev = iter;
    ++iter;
    for (; iter != this->_myList.end(); iter++)
    {
        diff = (*iter - *prev);
        prev = iter;
        if (diff < minDiff)
            minDiff = diff;
    }
    return minDiff;
}

int Span::longestSpan(void)
{
    if (this->_myList.size() <= 1)
        throw "List contains less than 2 elements";
    this->_myList.sort();
    return (*--(this->_myList.end()) - *(this->_myList.begin()));
}

int current = 0;
int UniqueNumber (void) 
{
    ++current;
    return current;
}

void    Span::generate_n_elements(int N)
{
    std::cout << "Size = " << this->_myList.size() << std::endl;
    
    std::generate_n(this->_myList.begin(), N, UniqueNumber);
    
    
    std::list <int> :: iterator iter;
    iter = this->_myList.begin();
    
    std::cout << "Size = " << this->_myList.size() << std::endl;
    std::cout << "Start = " << *(this->_myList.begin()) << std::endl;
    std::cout << "End = " << (this->_myList.back()) << std::endl;
    
    for (; iter != this->_myList.end(); iter++)
    {
        std::cout << "element : " << *iter << std::endl;
    }

    
    return;
}
    
