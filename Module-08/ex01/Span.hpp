/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:06:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/14 14:42:01 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>
# include <algorithm>
# include <limits.h>

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

    unsigned int getMax(void) const;
    int addNumber(int num);
    int shortestSpan(void);
    int longestSpan(void);

    
    
private:
    unsigned int _max;
    std::list <int> _myList;
    
};

#endif
