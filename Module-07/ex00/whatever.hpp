/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:02:20 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/09 10:55:15 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template < typename T >
void swap (T & a, T & b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
    return;
};

template < typename T >
T & min (T & a, T & b)
{
    if (a >= b)
        return b;
    return a;
};

template < typename T >
T & max (T & a, T & b)
{
    if (a <= b)
        return b;
    return a;
};

#endif