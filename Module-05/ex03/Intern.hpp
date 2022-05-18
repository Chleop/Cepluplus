/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:05:56 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/18 18:11:47 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

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

    Form    *makeForm(std::string formName, std::string formTarget);

private:

};

#endif
