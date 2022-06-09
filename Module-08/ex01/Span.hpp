/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:06:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/09 19:43:00 by cproesch         ###   ########.fr       */
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

    unsigned int get_max(void) const;

private:
    unsigned int _max;


};

#endif
