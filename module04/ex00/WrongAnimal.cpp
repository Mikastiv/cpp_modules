/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:46:17 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/11 22:22:07 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "Default Ctor: WrongAnimal created\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    *this = other;

    std::cout << "Copy Ctor: WrongAnimal created\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Dtor: WrongAnimal destroyed\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
    type = rhs.type;

    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal noise\n";
}
