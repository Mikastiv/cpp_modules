/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 21:27:26 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 21:54:25 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), name(name)
{
    hitpoints = FragTrap::hitpoints;
    energy = ScavTrap::energy;
    damage = FragTrap::damage;

    std::cout << "DiamondTrap " << name << " built\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " destroyed\n";
}

void DiamondTrap::attack(const std::string& target) const
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const
{
    std::cout << "I am ClapTrap " << ClapTrap::name << " and DiamondTrap "
              << name << '\n';
}
