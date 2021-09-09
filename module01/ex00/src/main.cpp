/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 02:51:57 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/08 03:49:51 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zombie1 = Zombie::newZombie("Roger");
    Zombie* zombie2 = Zombie::newZombie("Frank");

    zombie1->announce();
    zombie2->announce();
    Zombie::randomChump("Joe");

    delete zombie1;
    delete zombie2;
}
