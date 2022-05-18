/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/02 12:27:29 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

Form::Form(void):
_name("Default"), _signature(false), _signingMinGrade(50), _executingMinGrade(100)
{
    std::cout << "Form Default constructor called" << std::endl;
    return;
}

Form::Form(std::string name, const int signingMin, const int executingMin):
_name(name), _signature(false), _signingMinGrade(signingMin), _executingMinGrade(executingMin)
{
    std::cout << "Form Parametric constructor called" << std::endl;
    try
    {
        if ((signingMin < 1) || (executingMin < 1))
            throw Form::GradeTooHighException();
        if ((signingMin > 150) || (executingMin > 150))
            throw Form::GradeTooLowException();
    }
    catch(std::exception& e)
    {
        std::cerr << "---" << e.what() << std::endl;
    }
    return;
}

Form::Form(Form const & src):
_name(src._name), _signingMinGrade(src._signingMinGrade), _executingMinGrade(src._executingMinGrade)
{
    std::cout << "Form Copy constructor called" << std::endl;
    *this = src;
    return;
}

Form::~Form(void)
{
    std::cout << "Form Destructor called" << std::endl;
    return;
}

// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

Form &  Form::operator = (Form const & rhs)
{
    std::cout << "assisgnment operator" << std::endl;
    if (this != &rhs)
        this->_signature = rhs.getSignature();
    return *this;
}

std::ostream    & operator << (std::ostream &o, Form const &i)
{
    o   << std::setw(10)
        << "Form "
        << bold_on
        << i.getName()
        << bold_off
        << " of min signing grade "
        << bold_on
        << i.getSigningMinGrade()
        << bold_off
        << " and min executing grade "
        << bold_on
        << i.getExecutingMinGrade();
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

const std::string   Form::getName(void) const
{
    return(this->_name);
}

bool                Form::getSignature(void) const
{
    return(this->_signature);
}

int                 Form::getSigningMinGrade(void) const
{
    return(this->_signingMinGrade);
}

int                 Form::getExecutingMinGrade(void) const
{
    return(this->_executingMinGrade);
}


// **************************************************************************//
//                                EXCEPTIONS                                 //
// **************************************************************************//

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high---");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low---");
}


// **************************************************************************//
//                              PUBLIC FUNCTIONS                             //
// **************************************************************************//

void    Form::beSigned(Bureaucrat &bur)
{
    try
    {
        if (bur.getGrade() > this->_signingMinGrade)
            throw Form::GradeTooLowException();
        this->_signature = true;
        std::cout   << "Bureaucrat "
            << bur.getName()
            << " signed form "
            << this->_name
            << std::endl;
    }
    catch (const Form::GradeTooLowException& e)
    {
        std::cerr   << "---Bureaucrat "
                    << bur.getName()
                    << " cannot sign form "
                    << this->_name
                    << " because "
                    << e.what() << std::endl;
    }
    return;
}


// **************************************************************************//
//                              DESIGN FUNCTIONS                             //
// **************************************************************************//
