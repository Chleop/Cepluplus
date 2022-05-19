/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:38:51 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/19 15:52:39 by cproesch         ###   ########.fr       */
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
    Form* rrf;
    
    bureaucratCreationIntroduction("JAQUELINE", 45);
    Bureaucrat Inst("JAQUELINE", 45);
    std::cout   << Inst << std::endl;
    
    rrf = someRandomIntern.makeForm("Shrubbery creation", "Bender");
    Inst.signForm(*rrf);
    Inst.executeForm(*rrf);
    std::cout << std::endl;

    rrf = someRandomIntern.makeForm("Robotomy request", "Bender");
    Inst.signForm(*rrf);
    Inst.executeForm(*rrf);
    std::cout << std::endl;

    rrf = someRandomIntern.makeForm("Presidential pardon", "Bender");
    Inst.signForm(*rrf);
    Inst.executeForm(*rrf);
    std::cout << std::endl;
    return 0;
}

