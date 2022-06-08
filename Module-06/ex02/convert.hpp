/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:10:33 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/03 12:48:02 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <stdint.h>
# include <stdlib.h>
# include <time.h>
# include <unistd.h>

// ************************************************************************** //
//                                     CLASSES                                //
// ************************************************************************** //

class Base
{
public:
    virtual ~Base(void){};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif