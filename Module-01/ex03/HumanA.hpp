/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:00:27 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/04 18:40:02 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class HumanA {

public:

    HumanA(std::string name, Weapon &w);
    ~HumanA(void);

    void    attack(void) const;

private:

    Weapon      &_w;
    std::string _name;

};

#endif
