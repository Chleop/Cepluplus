/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:48:33 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/16 15:46:25 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

template < typename T >
MutantStack<T>::MutantStack(void):
std::stack<T>()
{
    return;
}

template < typename T >
MutantStack<T>::MutantStack(const MutantStack & src):
std::stack<T>(src)
{
    return;
}

template < typename T >
MutantStack<T>::~MutantStack(void)
{
    return;
}


// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

template < typename T >
MutantStack<T> & MutantStack<T>::operator = (const MutantStack<T> & rhs)
{
    // typedef typename std::stack<T>::
    *this = rhs;
    return *this;
}


// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//

// **************************************************************************//
//                                EXCEPTIONS                                 //
// **************************************************************************//

// **************************************************************************//
//                              PUBLIC FUNCTIONS                             //
// **************************************************************************//

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
    return this->c.begin();
}

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
    return this->c.end();
}

// **************************************************************************//
//                              DESIGN FUNCTIONS                             //
// **************************************************************************//
