/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:46:17 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/11 22:00:41 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>

Animal::Animal() : type("Animal")
{
    std::cout << "Default Ctor: Animal created\n";
}

Animal::Animal(const Animal& other)
{
    *this = other;

    std::cout << "Copy Ctor: Animal created\n";
}

Animal::~Animal()
{
    std::cout << "Dtor: Animal destroyed\n";
}

Animal& Animal::operator=(const Animal& rhs)
{
    type = rhs.type;

    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal noise\n";
}
