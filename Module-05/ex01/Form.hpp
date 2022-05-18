/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:00:27 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/18 17:57:49 by cproesch         ###   ########.fr       */
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

// Exceptions
    class   GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
    class   GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

// Other functions
    void    beSigned(Bureaucrat &bur);
    
protected:

private:
    const std::string   _name;
    bool                _signature;
    const int           _signingMinGrade;
    const int           _executingMinGrade;

};

std::ostream    &operator << (std::ostream &o, Form const &i);

#endif
