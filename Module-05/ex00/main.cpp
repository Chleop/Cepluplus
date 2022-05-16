/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:38:51 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/16 18:12:23 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
    Bureaucrat Maria("Maria", 75);
    std::cout << Maria << std::endl;
    Bureaucrat Omer("Omer", 155);
    std::cout << Omer << std::endl;
    Bureaucrat Hermione("Hermione", 0);
    std::cout << Hermione << std::endl;
    
    
    return 0;
}