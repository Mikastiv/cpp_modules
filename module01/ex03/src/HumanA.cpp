/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 05:40:38 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/08 07:11:08 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(const std::string& name_, Weapon& weapon_) : name(name_), weapon(weapon_) {}

void HumanA::attack() const
{
    std::cout << name << " attacks with his " << weapon.getType() << '\n';
}
