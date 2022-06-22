/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 21:27:26 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 22:44:29 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap()
{
    name = "Default";
    hitpoints = FragTrap::HITPOINTS;
    energy = ScavTrap::ENERGY;
    damage = FragTrap::DAMAGE;

    std::cout << "DiamondTrap " << name << " built\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other.name)
{
    *this = other;

    std::cout << "DiamondTrap " << name << " built\n";
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), name(name)
{
    hitpoints = FragTrap::HITPOINTS;
    energy = ScavTrap::ENERGY;
    damage = FragTrap::DAMAGE;

    std::cout << "DiamondTrap " << name << " built\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " destroyed\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
    name = rhs.name;
    hitpoints = rhs.hitpoints;
    energy = rhs.energy;
    damage = rhs.damage;

    return *this;
}

void DiamondTrap::attack(const std::string& target) const
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const
{
    std::cout << "I am ClapTrap " << ClapTrap::name << " and DiamondTrap " << name << '\n';
}
