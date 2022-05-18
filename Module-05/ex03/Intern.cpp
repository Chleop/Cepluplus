/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:05:52 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/18 18:25:10 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

Intern::Intern(void)
{
    // std::cout << "Intern Default constructor called" << std::endl;
    return;
}

Intern::Intern(Intern const & src)
{
    // std::cout << "Intern Copy constructor called" << std::endl;
    *this = src;
    return;
}

Intern::~Intern(void)
{
    // std::cout << "Intern Destructor called" << std::endl;
    return;
}

// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

Intern &  Intern::operator = (Intern const & rhs)
{
    // std::cout << "Intern assisgnment operator" << std::endl;
    return *this;
}


// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//


// **************************************************************************//
//                              EXCEPTIONS                                   //
// **************************************************************************//


// **************************************************************************//
//                           PUBLIC FUNCTIONS                                //
// **************************************************************************//

Form    Intern::*makeForm(std::string formName, std::string formTarget)
{
    std::string strFormsArray[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    Form        *classFormsArray[3];
    int         i;
    
    classFormsArray[0] = new ShrubberyCreationForm();
    classFormsArray[1] = new RobotomyRequestForm();
    classFormsArray[2] = new PresidentialPardonForm();
    for (i = 0; i < 3; i++)
    {
        
    }
    return ;
}