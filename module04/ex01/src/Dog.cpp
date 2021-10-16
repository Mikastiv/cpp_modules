/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:58:02 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 06:47:11 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal(), brain(new Brain())
{
    type = "Dog";

    std::cout << "Default Ctor: Dog created\n";
}

Dog::Dog(const Dog& other) : Animal(), brain(new Brain())
{
    *this = other;

    std::cout << "Copy Ctor: Dog created\n";
}

Dog::~Dog()
{
    delete brain;

    std::cout << "Dtor: Dog destroyed\n";
}

Dog& Dog::operator=(const Dog& rhs)
{
    if (this == &rhs)
        return *this;

    type = rhs.type;
    for (size_t i = 0; i < 100; ++i) {
        brain->setIdea(rhs.brain->getIdea(i), i);
    }

    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof\n";
}
