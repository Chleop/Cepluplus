/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:00:27 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/17 19:02:21 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class Bureaucrat;

class Form
{

public:

// Constructors and destructors
    Form(void);
    Form(std::string name, const int signingMin, const int executingMin);
    Form(Form const & src);
    ~Form(void);

// Class operators
    Form & operator = (Form const & rhs);

// Accessors
    const std::string   getName(void) const;
    bool                getSignature(void) const;
    int                 getSigningMinGrade(void) const;
    int                 getExecutingMinGrade(void) const;
    std::string         getTarget(void) const;

// Exceptions
    class   GradeTooHighException : public std::exception
    {
        public:
            virtual const char* wrongGrade() const throw();
    };
    class   GradeTooLowException : public virtual std::exception
    {
        public:
            virtual const char* wrongGrade() const throw();
    };

// Other functions
    virtual void    beSigned(Bureaucrat &bur) = 0;
    virtual void    execute(Bureaucrat const &executor) const = 0;
    
protected:
    std::string         p_target;

private:
    const std::string   _name;
    bool                _signature;
    const int           _signingMinGrade;
    const int           _executingMinGrade;

};

std::ostream    &operator << (std::ostream &o, Form const &i);

#endif
