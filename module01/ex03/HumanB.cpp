/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 05:51:29 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/08 06:05:10 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(const std::string& name_) : name(name_), weapon(NULL) {}

void HumanB::attack() const
{
    if (weapon)
        std::cout << name << " attacks with his " << weapon->getType() << '\n';
    else
        std::cout << name << " doesn't have a weapon\n";
}

void HumanB::setWeapon(Weapon& weapon_)
{
    weapon = &weapon_;
}
