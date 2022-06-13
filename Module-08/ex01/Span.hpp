/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:06:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/13 18:47:40 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>
# include <algorithm>

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class Span
{

public:
    Span(void);
    Span(unsigned int N);
    Span(Span const & src);
    ~Span(void);

    Span & operator = (Span const & rhs);

    const unsigned int & getMax(void) const;
    const std::list <int> & getMylist(void) const;
    // je l'ai mise const car autrement j'ai l'impression que la liste est 
    // reinitialisee a chaque fois que j'appelle getmylist
    void addNumber(int num);
    int shortestSpan(void) const;
    int longestSpan(void) const;

private:
    unsigned int _max;
    std::list <int> _myList; 


};

#endif
