/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:00:27 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/17 10:21:27 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <iomanip>

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class Bureaucrat
{

public:

    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const & src);
    ~Bureaucrat(void);

    Bureaucrat &  operator = (Bureaucrat const & rhs);

    const std::string   getName(void) const;
    int                 getGrade(void) const;
    void    upGrade(void);
    void    downGrade(void);
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

private:
    const std::string   _name;
    int                 _grade;

};

std::ostream    & operator<<(std::ostream &o, Bureaucrat const &i);
std::ostream    &bold_on(std::ostream& os);
std::ostream    &bold_off(std::ostream& os);

#endif
