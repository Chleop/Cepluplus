/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:01:20 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/10 10:57:17 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template < typename T >
class Array
{

public:
// DEFAULT CONSTRUCTOR  
    Array<T>(void): _size(0)
    {
        this->_array = new T[0];
        return;
    }
// PARAMETER CONSTRUCTOR
    Array<T>(unsigned int n): _size(n)
    {
        unsigned int i = 0;
        T *temp;
        this->_array = new T[this->_size];
        while (i < this->_size)
        {
            temp = new T();
            this->_array[i] = *temp;
            delete temp;
            i++;
        }
        return;
    }
// COPY CONSTRUCTOR
    Array<T>(Array const & src)
    {
        unsigned int i = 0;
        
        this->_size = src.size();
        this->_array = new T[this->_size];
        while (i < this->_size)
        {
            this->_array[i] = src.get_element(i);
            i++;
        }
        return;
    }
// DEFAULT DESTRUCTOR    
    ~Array<T>(void)
    {
        delete [] this->_array;
    }
// ASSIGNMENT OPERATOR  
    Array & operator = (Array const & rhs)
    {
        unsigned int i = 0;
        
        this->_size = rhs.size();
        this->_array = new T[this->_size];
        while (i < this->_size)
        {
            this->_array[i] = rhs.get_element(i);
            i++;
        }
        return *this;
    }
// SUBSCRIPT OPERATOR    
    T & operator [] (unsigned int const index) const
    {
        if (index >= (this->_size))
            throw std::exception();
        else
            return this->_array[index];
    }
// ASSESSOR
    T get_element(unsigned int index) const
    {
        return this->_array[index];
    }
// OTHER MEMBER FUNCTIONS
    unsigned int size(void) const
    {
        return this->_size;
    }

private:
// ATTRIBUTES
    T   *_array;
    unsigned int _size;

};

#endif
