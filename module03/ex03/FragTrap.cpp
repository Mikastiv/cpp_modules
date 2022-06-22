/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 20:51:04 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 22:38:15 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
    hitpoints = HITPOINTS;
    energy = ENERGY;
    damage = DAMAGE;

    std::cout << "FragTrap " << name << " built\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other.name)
{
    *this = other;

    std::cout << "FragTrap " << name << " built\n";
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    hitpoints = HITPOINTS;
    energy = ENERGY;
    damage = DAMAGE;

    std::cout << "FragTrap " << name << " built\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destroyed\n";
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
    name = rhs.name;
    hitpoints = rhs.hitpoints;
    energy = rhs.energy;
    damage = rhs.damage;

    return *this;
}

void FragTrap::highFivesGuys() const
{
    std::cout << "FragTrap " << name << " is waiting for a high five!\n";
}
