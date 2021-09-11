/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 20:51:04 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 20:55:18 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    hitpoints = 100;
    energy = 100;
    damage = 30;

    std::cout << "FragTrap " << name << " built\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destroyed\n";
}

void FragTrap::highFivesGuys() const
{
    std::cout << "FragTrap " << name << " is waiting for a high five!\n";
}
