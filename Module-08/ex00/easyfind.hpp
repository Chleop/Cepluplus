/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:21:24 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/10 11:33:18 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>

// std::vector<int>::iterator == class "iterator" that is within the scope of the 
// class "vector<T>" with T = int


// typedef typename T::iterator iter;

template < typename T >
typename T::iterator easyfind (T & t_container, const int & i)
{
    typename T::iterator p;

    p = std::find(t_container.begin(), t_container.end(), i); 
    return p;
}

// t_container.end() is my error return value

#endif
