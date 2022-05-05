/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <cproesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:00:27 by cproesch          #+#    #+#             */
/*   Updated: 2022/05/05 15:51:16 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

// ************************************************************************** //
//                                     CLASS                                  //
// ************************************************************************** //

class HumanB {

public:

    HumanB(std::string name);
    ~HumanB(void);

    void    attack(void) const;
    void    setWeapon(Weapon &w);

private:

    Weapon      *_w;
    std::string _name;

};

#endif
