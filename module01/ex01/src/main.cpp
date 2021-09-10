/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 04:02:46 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/09 22:53:54 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    const int size = 5;
    Zombie*   horde = zombieHorde(size, "Frank");

    for (int i = 0; i < size; ++i) {
        horde[i].announce();
    }

    delete[] horde;
}
