/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/02 12:27:29 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

PresidentialPardonForm::PresidentialPardonForm(void):
_name("Default"), _signature(false), _signingMinGrade(25), _executingMinGrade(5)
{
    // std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
    this->p_target = "Default";
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target):
_name(name), _signature(false), _signingMinGrade(25), _executingMinGrade(5)
{
    // std::cout << "PresidentialPardonForm Parametric constructor called" << std::endl;
    this->p_target = target;
    return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src):
_name(src._name), _signingMinGrade(src._signingMinGrade), _executingMinGrade(src._executingMinGrade)
{
    // std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
    *this = src;
    return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    // std::cout << "PresidentialPardonForm Destructor called" << std::endl;
    return;
}

// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

PresidentialPardonForm &  PresidentialPardonForm::operator = (PresidentialPardonForm const & rhs)
{
    // std::cout << "PresidentialPardonForm assisgnment operator" << std::endl;
    if (this != &rhs)
    {
        this->_signature = rhs.getSignature();
        this->p_target = rhs.p_target;
    }
    return *this;
}

std::ostream    & operator << (std::ostream &o, PresidentialPardonForm const &i)
{
    o   << bold_on
        << "    Form "
        << i.getName()
        << " (min signing grade "
        << i.getSigningMinGrade()
        << ", min executing grade "
        << i.getExecutingMinGrade()
        << "), with target "
        << i.getTarget();
    if (i.getSignature() == false)
        o    << " has not been signed yet.";
    else
        o    << " is signed.";
    o   << bold_off
        << std::endl;
    return o;
}

// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//

const std::string   PresidentialPardonForm::getName(void) const
{
    return(this->_name);
}

bool                PresidentialPardonForm::getSignature(void) const
{
    return(this->_signature);
}

int                 PresidentialPardonForm::getSigningMinGrade(void) const
{
    return(this->_signingMinGrade);
}

int                 PresidentialPardonForm::getExecutingMinGrade(void) const
{
    return(this->_executingMinGrade);
}


// **************************************************************************//
//                                EXCEPTIONS                                 //
// **************************************************************************//

// **************************************************************************//
//                              PUBLIC FUNCTIONS                             //
// **************************************************************************//

void    PresidentialPardonForm::beSigned(Bureaucrat &bur)
{
    try
    {
        if (bur.getGrade() > this->_signingMinGrade)
            throw PresidentialPardonForm::GradeTooLowException();
        this->_signature = true;
        std::cout   << bold_on
                    << "Bureaucrat "
                    << bur.getName()
                    << " signed PresidentialPardonForm "
                    << this->_name
                    << bold_off
                    << std::endl;
    }
    catch (const PresidentialPardonForm::GradeTooLowException& e)
    {
        std::cerr   << "---Bureaucrat "
                    << bur.getName()
                    << " cannot sign PresidentialPardonForm "
                    << this->_name
                    << " because "
                    << e.wrongGrade() << std::endl;
    }
    return;
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if ((executor.getGrade() > this->_executingMinGrade) || (this->_signature == false))
            throw PresidentialPardonForm::GradeTooLowException();
        std::cout   << bold_on
                    << this->p_target
                    << " has been pardonned by Zaphod Beeblebrox."
                    << bold_off
                    << std::endl;
        std::cout   << bold_on
                    << executor.getName()
                    << " executed "
                    << this->_name
                    << bold_off
                    << std::endl;
    }
    catch (const PresidentialPardonForm::GradeTooLowException& e)
    {
        std::cerr   << "---Bureaucrat "
                    << executor.getName()
                    << " cannot execute PresidentialPardonForm "
                    << this->_name
                    << " because ";
        if (this->_signature == false)
            std::cerr << "it has'n been signed." << std::endl;
        else
            std::cerr << e.wrongGrade() << std::endl;
    }
    return;
}

// **************************************************************************//
//                              DESIGN FUNCTIONS                             //
// **************************************************************************//
