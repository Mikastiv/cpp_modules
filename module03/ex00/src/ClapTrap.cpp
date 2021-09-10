/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:14:17 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 18:34:21 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(const std::string& name_)
    : name(name_), hitpoints(10), energy(10), damage(0)
{
    std::cout << "ClapTrap " << name << " created\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destroyed\n";
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << name << " attacks " << target << " causing "
              << damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitpoints -= amount;
    std::cout << "ClapTrap " << name << " took " << amount
              << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount > energy) {
        std::cout << "ClapTrap " << name << " tried to repair " << amount
                  << "hitpoints, not enough energy\n";
        return;
    } else
        energy -= amount;
    hitpoints += amount;
    std::cout << "ClapTrap repaired " << amount << " hitpoints\n";
}
