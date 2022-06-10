/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:06:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/10 14:46:57 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>

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
    std::list <int> getMylist(void) const;
    void addNumber(int num);
    int shortestSpan(void) const;
    int longestSpan(void) const;

private:
    unsigned int _max;
    std::list <int> _myList; 


};

#endif
