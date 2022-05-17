/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:38:51 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/17 10:30:09 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
    std::cout << bold_on << "CREATING THREE BUREAUCRATS" << bold_off << std::endl;
    Bureaucrat Maria("Maria", 75);
    std::cout << Maria << std::endl;
    
    Bureaucrat Omer("Omer", 155);
    std::cout << Omer << std::endl;
    
    Bureaucrat Hermione("Hermione", 0);
    std::cout << Hermione << std::endl;
    
    std::cout << bold_on << "DOWNGRADING MARIA" << bold_off << std::endl;
    Maria.downGrade();
    std::cout << Maria << std::endl;
    
    std::cout << bold_on << "UPGRADING OMER" << bold_off << std::endl;
    Omer.upGrade();
    std::cout << Omer << std::endl;
    
    std::cout << bold_on << "UPGRADING HERMIONE" << bold_off << std::endl;
    Hermione.upGrade();
    std::cout << Hermione << std::endl;
    
    return 0;
}