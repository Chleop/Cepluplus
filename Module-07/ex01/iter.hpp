/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:02:20 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/09 13:15:18 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

// avec les pointeurs sur fonction, pas besoin de donner un nom a la variable
// passee en parametre, on peut uniquement preciser le type . 
// (Mais on peut si on veut).

// on n'a pas besoin non plus de dereferencer le pointeur sur fonction.
// (Mais on peut si on veut).

template < typename T, typename S >
void    iter (T *tab, S size, void (*f_ptr)(T const &))
{
    S i = 0;
        
    while (i < size)
    {
        f_ptr(tab[i]);
        i++;
    }
    return;
}

#endif