/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:49:26 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/18 11:39:21 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class PresidentialPardonForm : public Form
{

public:

// Constructors and destructors
    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string name, std::string target);
    PresidentialPardonForm(PresidentialPardonForm const & src);
    ~PresidentialPardonForm(void);

// Class operators
    PresidentialPardonForm & operator = (PresidentialPardonForm const & rhs);

// Accessors
    const std::string   getName(void) const;
    bool                getSignature(void) const;
    int                 getSigningMinGrade(void) const;
    int                 getExecutingMinGrade(void) const;
    
// Exceptions

// Other functions
    void    beSigned(Bureaucrat &bur);
    void    execute(Bureaucrat const &executor) const;

protected:

private:
    const std::string   _name;
    bool                _signature;
    const int           _signingMinGrade;
    const int           _executingMinGrade;
};

std::ostream    &operator << (std::ostream &o, PresidentialPardonForm const &i);

#endif
