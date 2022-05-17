/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:38:51 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/17 13:02:27 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{
    std::cout << std::endl;
    std::cout << bold_on << "CREATING BUREAUCRAT MARIA WITH GRADE 51" << bold_off << std::endl;
    Bureaucrat Maria("Maria", 51);
    std::cout << Maria << std::endl;

    std::cout << bold_on << "CREATING FORM WRONG WITH MIN SIGNING GRADE 0 / MIN EXECUTING GRADE 100" << bold_off << std::endl;
    Form Wrong("WRONG", 0, 100);
    std::cout << std::endl;

    std::cout << bold_on << "CREATING FORM WRONG2 WITH MIN SIGNING GRADE 50 / MIN EXECUTING GRADE 160" << bold_off << std::endl;
    Form Wrong2("WRONG2", 50, 160);
    std::cout << std::endl;

    std::cout << bold_on << "CREATING FORM MOD_05 WITH MIN SIGNING GRADE 50 / MIN EXECUTING GRADE 100" << bold_off << std::endl;
    Form Mod_05("MOD_05", 50, 100);
    std::cout << Mod_05 << std::endl;
    
    std::cout << bold_on << "MARIA SIGNING FORM MOD_05" << bold_off << std::endl;
    Maria.signForm(Mod_05);
    std::cout << Mod_05 << std::endl;

    std::cout << bold_on << "UPGRADING MARIA" << bold_off << std::endl;
    Maria.upGrade();
    std::cout << Maria << std::endl;

    std::cout << bold_on << "MARIA SIGNING FORM MOD_05" << bold_off << std::endl;
    Maria.signForm(Mod_05);
    std::cout << Mod_05 << std::endl;
    
    return 0;
}