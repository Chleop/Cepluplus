/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/02 12:27:29 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

RobotomyRequestForm::RobotomyRequestForm(void):
_name("Default_RobotomyRequestForm"), _signature(false), _signingMinGrade(72), _executingMinGrade(45)
{
    // std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
    this->p_target = "Default";
    return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target):
_name(name.append("_RobotomyRequestForm")), _signature(false), _signingMinGrade(72), _executingMinGrade(45)
{
    // std::cout << "RobotomyRequestForm Parametric constructor called" << std::endl;
    this->p_target = target;
    return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src):
_name(src._name), _signingMinGrade(src._signingMinGrade), _executingMinGrade(src._executingMinGrade)
{
    // std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
    *this = src;
    return;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    // std::cout << "RobotomyRequestForm Destructor called" << std::endl;
    return;
}

// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

RobotomyRequestForm &  RobotomyRequestForm::operator = (RobotomyRequestForm const & rhs)
{
    // std::cout << "RobotomyRequestForm assisgnment operator" << std::endl;
    if (this != &rhs)
    {
        this->_signature = rhs.getSignature();
        this->p_target = rhs.p_target;
    }
    return *this;
}

std::ostream    & operator << (std::ostream &o, RobotomyRequestForm const &i)
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

const std::string   RobotomyRequestForm::getName(void) const
{
    return(this->_name);
}

bool                RobotomyRequestForm::getSignature(void) const
{
    return(this->_signature);
}

int                 RobotomyRequestForm::getSigningMinGrade(void) const
{
    return(this->_signingMinGrade);
}

int                 RobotomyRequestForm::getExecutingMinGrade(void) const
{
    return(this->_executingMinGrade);
}


// **************************************************************************//
//                                EXCEPTIONS                                 //
// **************************************************************************//

// **************************************************************************//
//                              PUBLIC FUNCTIONS                             //
// **************************************************************************//

void    RobotomyRequestForm::beSigned(Bureaucrat &bur)
{
    try
    {
        if (bur.getGrade() > this->_signingMinGrade)
            throw RobotomyRequestForm::GradeTooLowException();
        this->_signature = true;
        std::cout   << bold_on
                    << "Bureaucrat "
                    << bur.getName()
                    << " signed RobotomyRequestForm "
                    << this->_name
                    << bold_off
                    << std::endl;
    }
    catch (const RobotomyRequestForm::GradeTooLowException& e)
    {
        std::cerr   << "---Bureaucrat "
                    << bur.getName()
                    << " cannot sign RobotomyRequestForm "
                    << this->_name
                    << " because "
                    << e.wrongGrade() << std::endl;
    }
    return;
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    int randomNumber;
    try
    {
        if ((executor.getGrade() > this->_executingMinGrade) || (this->_signature == false))
            throw RobotomyRequestForm::GradeTooLowException();
        std::cout   << bold_on
                    << "Drilling sounds"
                    << std::endl
                    << "DRRRRRRRRRRRRRRRRRRRRRRRRRRRR DRRRRRR DRRRRRRR DRRRRRRRRRRRRRRRRR"
                    << bold_off
                    << std::endl;
        srand(time(NULL));
        randomNumber = rand() % 2;
        if (randomNumber == 0)
            std::cout   << bold_on << this->p_target << " has been ROBOTOMIZED !!!" << bold_off << std::endl;
        else
            std::cout   << bold_on << this->p_target << " could not be robotomized :(" << bold_off << std::endl;
        std::cout   << bold_on
                    << executor.getName()
                    << " executed "
                    << this->_name
                    << bold_off
                    << std::endl;
    }
    catch (const RobotomyRequestForm::GradeTooLowException& e)
    {
        std::cerr   << "---Bureaucrat "
                    << executor.getName()
                    << " cannot execute RobotomyRequestForm "
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
