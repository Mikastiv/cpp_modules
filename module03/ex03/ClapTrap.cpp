/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:14:17 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 22:30:05 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap() : name("Default"), hitpoints(10), energy(10), damage(0)
{
    std::cout << "ClapTrap " << name << " built\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;

    std::cout << "ClapTrap " << name << " built\n";
}

ClapTrap::ClapTrap(const std::string& name_) : name(name_), hitpoints(10), energy(10), damage(0)
{
    std::cout << "ClapTrap " << name << " built\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destroyed\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
    name = rhs.name;
    hitpoints = rhs.hitpoints;
    energy = rhs.energy;
    damage = rhs.damage;

    return *this;
}

void ClapTrap::attack(const std::string& target) const
{
    std::cout << "ClapTrap " << name << " attacks " << target << " causing " << damage
              << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > hitpoints)
        amount = hitpoints;
    hitpoints -= amount;

    std::cout << "ClapTrap " << name << " took " << amount << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount > energy)
        amount = energy;
    energy -= amount;
    hitpoints += amount;

    std::cout << "ClapTrap repaired " << amount << " hitpoints using " << amount << " energy!\n";
}
