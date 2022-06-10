/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:38:51 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/20 11:18:34 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void    bureaucratCreationIntroduction(std::string name, int grade)
{
    std::cout   << std::endl
                << "[CREATING BUREAUCRAT "
                << name
                << " WITH GRADE " 
                << grade
                << "]" << std::endl;
}

int main (void)
{
    Intern someRandomIntern;
    Form* lambda;
    
    bureaucratCreationIntroduction("JAQUELINE", 45);
    Bureaucrat Inst("JAQUELINE", 45);
    std::cout   << Inst << std::endl;
    
    lambda = someRandomIntern.makeForm("Shrubbery creation", "Bender");
    Inst.signForm(*lambda);
    Inst.executeForm(*lambda);
    std::cout << std::endl;

    lambda = someRandomIntern.makeForm("Robotomy request", "Fender");
    Inst.signForm(*lambda);
    Inst.executeForm(*lambda);
    std::cout << std::endl;

    lambda = someRandomIntern.makeForm("Presidential pardon", "Tender");
    Inst.signForm(*lambda);
    Inst.executeForm(*lambda);
    std::cout << std::endl;
    return 0;
}

