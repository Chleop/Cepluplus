/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:20:17 by cproesch          #+#    #+#             */
/*   Updated: 2022/06/13 17:29:09 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main (void)
{
    Span mySpan;
    std::list <int> lst = mySpan.getMylist();
    std::list <int> ::iterator iter = lst.begin();
    
    mySpan.addNumber(3);
    mySpan.addNumber(333);
    mySpan.addNumber(666);
    mySpan.addNumber(6);
    
    
    for (; iter != lst.end(); ++iter)
        std::cout << *iter << std::endl;

    std::cout << mySpan.longestSpan() << std::endl;
    
    return 0;
}
