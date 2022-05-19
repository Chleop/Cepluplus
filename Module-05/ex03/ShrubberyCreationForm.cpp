/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/02 12:27:29 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

ShrubberyCreationForm::ShrubberyCreationForm(void):
_name("Default_ShrubberyCreationForm"), _signature(false), _signingMinGrade(145), _executingMinGrade(137)
{
    // std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
    this->p_target = "Default";
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target):
_name(name.append("_ShrubberyCreationForm")), _signature(false), _signingMinGrade(145), _executingMinGrade(137)
{
    // std::cout << "ShrubberyCreationForm Parametric constructor called" << std::endl;
    this->p_target = target;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src):
_name(src._name), _signingMinGrade(src._signingMinGrade), _executingMinGrade(src._executingMinGrade)
{
    // std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
    *this = src;
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    // std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
    return;
}

// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

ShrubberyCreationForm &  ShrubberyCreationForm::operator = (ShrubberyCreationForm const & rhs)
{
    // std::cout << "ShrubberyCreationForm assisgnment operator" << std::endl;
    if (this != &rhs)
    {
        this->_signature = rhs.getSignature();
        this->p_target = rhs.p_target;
    }
    return *this;
}

std::ostream    & operator << (std::ostream &o, ShrubberyCreationForm const &i)
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

const std::string   ShrubberyCreationForm::getName(void) const
{
    return(this->_name);
}

bool                ShrubberyCreationForm::getSignature(void) const
{
    return(this->_signature);
}

int                 ShrubberyCreationForm::getSigningMinGrade(void) const
{
    return(this->_signingMinGrade);
}

int                 ShrubberyCreationForm::getExecutingMinGrade(void) const
{
    return(this->_executingMinGrade);
}


// **************************************************************************//
//                                EXCEPTIONS                                 //
// **************************************************************************//

// **************************************************************************//
//                              PUBLIC FUNCTIONS                             //
// **************************************************************************//

void    ShrubberyCreationForm::beSigned(Bureaucrat &bur)
{
    try
    {
        if (bur.getGrade() > this->_signingMinGrade)
            throw ShrubberyCreationForm::GradeTooLowException();
        this->_signature = true;
        std::cout   << bold_on
                    << "Bureaucrat "
                    << bur.getName()
                    << " signed ShrubberyCreationForm "
                    << this->_name
                    << bold_off
                    << std::endl;
    }
    catch (const ShrubberyCreationForm::GradeTooLowException& e)
    {
        std::cerr   << "---Bureaucrat "
                    << bur.getName()
                    << " cannot sign ShrubberyCreationForm "
                    << this->_name
                    << " because "
                    << e.wrongGrade() << std::endl;
    }
    return;
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if ((executor.getGrade() > this->_executingMinGrade) || (this->_signature == false))
            throw ShrubberyCreationForm::GradeTooLowException();
        std::ofstream   ofs((this->p_target+ "_shrubbery").c_str());

        ofs << ""
            << "               ,@@@@@@@,\n"
            << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
            << "    ,&&%&%&&%,@@@@@/@@@@@@,8888/88/8o\n"
            << "   ,%&/%&&%&&%,@@@/@@@/@@@88/88888/88'\n"
            << "   %&&%&%&/%&&%@@/@@/ /@@@88888/88888'\n"
            << "   %&&%/ %&&%&&@@/ V /@@' `88/8 `/88'\n"
            << "   `&%/ ` /%&'    |.|        / '|8'\n"
            << "       |o|        | |         | |\n"
            << "       |.|        | |         | |\n"
            << "jgs /// ._///_/__/  ,/_//__///.  /_//__/_"; 
        ofs.close();
        std::cout   << bold_on
                    << executor.getName()
                    << " executed "
                    << this->_name
                    << bold_off
                    << std::endl;
    }
    catch (const ShrubberyCreationForm::GradeTooLowException& e)
    {
        std::cerr   << "---Bureaucrat "
                    << executor.getName()
                    << " cannot execute ShrubberyCreationForm "
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
