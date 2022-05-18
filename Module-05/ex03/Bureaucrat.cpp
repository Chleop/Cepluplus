/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:59:11 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/02 12:27:29 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// **************************************************************************//
//                         CONSTRUCTOR / DESTRUCTOR                          //
// **************************************************************************//

Bureaucrat::Bureaucrat(void):
_name("Default"), _grade(75)
{
    // std::cout << "Bureaucrat Default constructor called" << std::endl;
    return;
}

Bureaucrat::Bureaucrat(std::string name, int grade):
_name(name)
{
    // std::cout << "Bureaucrat Parametric constructor called" << std::endl;
    try
    {
        if (grade < 1)
        {
            this->_grade = 1;
            throw Bureaucrat::GradeTooHighException();
        }
        if (grade > 150)
        {
            this->_grade = 150;
            throw Bureaucrat::GradeTooLowException();
        }
        this->_grade = grade;
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
    // std::cout << "Bureaucrat Copy constructor called" << std::endl;
    *this = src;
    return;
}

Bureaucrat::~Bureaucrat(void)
{
    // std::cout << "Bureaucrat Destructor called" << std::endl;
    return;
}

// **************************************************************************//
//                                 OPERATORS                                 //
// **************************************************************************//

Bureaucrat &  Bureaucrat::operator = (Bureaucrat const & rhs)
{
    // std::cout << "Bureaucrat assisgnment operator" << std::endl;
    if (this != &rhs)
        this->_grade = rhs.getGrade();
    return *this;
}

std::ostream    & operator << (std::ostream &o, Bureaucrat const &i)
{
    o   << "    Bureaucrat "
        << i.getName()
        << " has grade "
        << i.getGrade()
        << std::endl;
    return o;
}


// **************************************************************************//
//                                 ACCESSORS                                 //
// **************************************************************************//

const std::string   Bureaucrat::getName(void) const
{
    return(this->_name);
}

int                 Bureaucrat::getGrade(void) const
{
    return(this->_grade);
}


// **************************************************************************//
//                              EXCEPTIONS                                   //
// **************************************************************************//

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("---Exception: Grade cannot be over 1---");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("---Exception: Grade cannot be under 150---");
}


// **************************************************************************//
//                           PUBLIC FUNCTIONS                                //
// **************************************************************************//

void    Bureaucrat::upGrade(void)
{
    try
    {
        if (this->_grade == 1)
            throw Bureaucrat::GradeTooHighException();
        this->_grade --;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void    Bureaucrat::downGrade(void)
{
    try
    {
        if (this->_grade == 150)
            throw Bureaucrat::GradeTooLowException();
        this->_grade ++;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void    Bureaucrat::signForm(Form &form)
{
    form.beSigned(*this);
    return;
}

void    Bureaucrat::executeForm(Form const &form)
{
    form.execute(*this);
    return;
}

// **************************************************************************//
//                           DESIGN FUNCTIONS                                //
// **************************************************************************//

std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}

