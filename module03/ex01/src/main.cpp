/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:25:58 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 21:51:51 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("James");
    ScavTrap scav("Roger");

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

    std::cout << '\n';
}
