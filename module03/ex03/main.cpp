/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:25:58 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 21:54:56 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "DiamondTrap.hpp"

int main()
{
    ClapTrap    clap("James");
    ScavTrap    scav("Roger");
    FragTrap    frag("Joe");
    DiamondTrap diamond("John");

    std::cout << "\nClapTrap:\n";
    clap.attack("Frank");
    clap.beRepaired(3);
    clap.takeDamage(3);
    clap.beRepaired(10);

    std::cout << "\nScavTrap:\n";
    scav.attack("Joe");
    scav.beRepaired(15);
    scav.takeDamage(60);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << "\nFragTrap:\n";
    frag.attack("Jimmy");
    frag.beRepaired(15);
    frag.takeDamage(60);
    frag.beRepaired(10);
    frag.highFivesGuys();

    std::cout << "\nDiamondTrap:\n";
    diamond.attack("Timmy");
    diamond.beRepaired(15);
    diamond.takeDamage(60);
    diamond.beRepaired(10);
    diamond.guardGate();
    diamond.highFivesGuys();
    diamond.whoAmI();

    std::cout << '\n';
}
