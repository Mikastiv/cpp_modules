/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:09:31 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 06:47:05 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal(), brain(new Brain())
{
    type = "Cat";

    std::cout << "Default Ctor: Cat created\n";
}

Cat::Cat(const Cat& other) : Animal(), brain(new Brain())
{
    *this = other;

    std::cout << "Copy Ctor: Cat created\n";
}

Cat::~Cat()
{
    delete brain;

    std::cout << "Dtor: Cat destroyed\n";
}

Cat& Cat::operator=(const Cat& rhs)
{
    if (this == &rhs)
        return *this;

    type = rhs.type;
    for (size_t i = 0; i < 100; ++i) {
        brain->setIdea(rhs.brain->getIdea(i), i);
    }

    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow\n";
}
