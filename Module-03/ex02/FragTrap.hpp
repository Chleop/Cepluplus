/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:48:14 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/12 15:30:13 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class FragTrap : public ClapTrap
{

public:

    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    ~FragTrap(void);

    FragTrap & operator = (FragTrap const & rhs);

    void highFivesGuys(void);

private:

};

#endif