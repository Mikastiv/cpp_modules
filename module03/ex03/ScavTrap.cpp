/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 20:28:21 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 22:39:30 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
    hitpoints = HITPOINTS;
    energy = ENERGY;
    damage = DAMAGE;

    std::cout << "ScavTrap " << name << " built\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other.name)
{
    *this = other;

    std::cout << "ScavTrap " << name << " built\n";
}
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    hitpoints = HITPOINTS;
    energy = ENERGY;
    damage = DAMAGE;

    std::cout << "ScavTrap " << name << " built\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destroyed\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
    name = rhs.name;
    hitpoints = rhs.hitpoints;
    energy = rhs.energy;
    damage = rhs.damage;

    return *this;
}
void ScavTrap::attack(const std::string& target) const
{
    std::cout << "ScavTrap " << name << " attacks " << target << " causing " << damage
              << " points of damage!\n";
}

void ScavTrap::guardGate() const
{
    std::cout << "ScavTrap " << name << " entered Gate keeper mode\n";
}
