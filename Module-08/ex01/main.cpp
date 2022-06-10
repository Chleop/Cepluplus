/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:20:17 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/10 14:51:30 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main (void)
{
    Span mySpan;
    
    mySpan.addNumber(3);
    mySpan.addNumber(333);
    mySpan.addNumber(666);
    mySpan.addNumber(6);

    
    std::list <int> ::iterator iter;
    int i = 0;
    iter = mySpan.getMylist().begin();
    while (iter != mySpan.getMylist().end() && i < 20)
    {
        iter++;
        std::cout << *iter << std::endl;
        i++;
    }
 
    std::cout << mySpan.longestSpan() << std::endl;
    return 0;
}
