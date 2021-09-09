/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 02:58:50 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/08 04:35:48 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie() : name("") {}

Zombie::~Zombie()
{
    std::cout << name << " is dead\n";
}

void Zombie::announce() const
{
    std::cout << '<' << name << "> BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(const std::string& name_)
{
    name = name_;
}
