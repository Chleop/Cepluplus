/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:05:56 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/19 14:53:05 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class Intern
{

public:

    Intern(void);
    Intern(Intern const & src);
    ~Intern(void);

    Intern  &operator = (Intern const & rhs);

    Form                    *makeForm(std::string formName, std::string formTarget);
    Form   *makeShrubberyCreationForm(std::string name, std::string target);
    Form     *makeRobotomyRequestForm(std::string name, std::string target);
    Form  *makePresidentialPardonForm(std::string name, std::string target);

    class NameDoesNotExist : public std::exception
    {
        public:
             virtual const char* what() const throw();
    };

private:

};

#endif
