/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:58:02 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/11 22:04:34 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog()
{
    type = "Dog";

    std::cout << "Default Ctor: Dog created\n";
}

Dog::Dog(const Dog& other)
{
    *this = other;

    std::cout << "Copy Ctor: Dog created\n";
}

Dog::~Dog()
{
    std::cout << "Dtor: Dog destroyed\n";
}

Dog& Dog::operator=(const Dog& rhs)
{
    type = rhs.type;

    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof\n";
}
