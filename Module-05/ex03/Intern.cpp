/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:05:52 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/19 15:50:55 by cproesch         ###   ########.fr       */
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

Intern &  Intern::operator = (Intern const &)
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

const char* Intern::NameDoesNotExist::what() const throw()
{
    return("---Forn name does not exist---");
}

// **************************************************************************//
//                           PUBLIC FUNCTIONS                                //
// **************************************************************************//

Form *Intern::makeShrubberyCreationForm(std::string name, std::string target)
{
    ShrubberyCreationForm *new_shrub = new ShrubberyCreationForm(name, target);
    return new_shrub;
}

Form *Intern::makeRobotomyRequestForm(std::string name, std::string target)
{
    RobotomyRequestForm *new_rob = new RobotomyRequestForm(name, target);
    return new_rob;
}

Form *Intern::makePresidentialPardonForm(std::string name, std::string target)
{
    PresidentialPardonForm *new_pres = new PresidentialPardonForm(name, target);
    return new_pres;
}
    
Form    *Intern::makeForm(std::string formName, std::string formTarget)
{
    int         i;
    std::string strFormsArray[3] = {"Shrubbery creation", "Robotomy request", "Presidential pardon"};
    typedef Form *(Intern::*InternMemberFunctionspointer)(std::string name, std::string target);
    InternMemberFunctionspointer p[3];
    
    p[0] = &Intern::makeShrubberyCreationForm;
    p[1] = &Intern::makeRobotomyRequestForm;
    p[2] = &Intern::makePresidentialPardonForm;

    for (i = 0; i < 3; i++)
    {
        if (formName.compare(strFormsArray[i]) == 0)
            return ((this->*(p[i]))(formName, formTarget));
    }
    throw Intern::NameDoesNotExist();
}
