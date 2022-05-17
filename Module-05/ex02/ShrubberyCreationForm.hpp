/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:49:26 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/17 19:01:48 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class ShrubberyCreationForm : public Form
{

public:

// Constructors and destructors
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string name, std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    ~ShrubberyCreationForm(void);

// Class operators
    ShrubberyCreationForm & operator = (ShrubberyCreationForm const & rhs);

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

std::ostream    &operator << (std::ostream &o, ShrubberyCreationForm const &i);

#endif
