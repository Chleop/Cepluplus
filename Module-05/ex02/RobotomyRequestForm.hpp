/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:49:26 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/17 17:05:20 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class RobotomyRequestForm : public Form
{

public:

// Constructors and destructors
    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string name);
    RobotomyRequestForm(RobotomyRequestForm const & src);
    ~RobotomyRequestForm(void);

// Class operators
    RobotomyRequestForm & operator = (RobotomyRequestForm const & rhs);

// Accessors
    const std::string   getName(void) const;
    bool                getSignature(void) const;
    int                 getSigningMinGrade(void) const;
    int                 getExecutingMinGrade(void) const;
    
// Exceptions

// Other functions
    void    beSigned(Bureaucrat &bur);

protected:

private:
    const std::string   _name;
    bool                _signature;
    const int           _signingMinGrade;
    const int           _executingMinGrade;
};

std::ostream    &operator << (std::ostream &o, RobotomyRequestForm const &i);

#endif
