/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:12:45 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/16 13:17:28 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <list>
# include <stack>
# include <algorithm>
# include <iterator>

template < typename T >
class MutantStack : public std::stack <T>
{

public:
    MutantStack(void);
    MutantStack(const MutantStack & src);
    ~MutantStack(void);

    MutantStack & operator = (const MutantStack & rhs);

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin(void);
    iterator end(void);

private:

};

#endif
