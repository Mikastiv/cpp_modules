/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:25:58 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 20:44:45 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Roger");

    scav.attack("Joe");
    scav.beRepaired(15);
    scav.takeDamage(60);
    scav.beRepaired(10);
    scav.guardGate();
}
