/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:09:31 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/11 23:03:08 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal()
{
    type = "Cat";

    std::cout << "Default Ctor: Cat created\n";
}

Cat::Cat(const Cat& other) : Animal()
{
    *this = other;

    std::cout << "Copy Ctor: Cat created\n";
}

Cat::~Cat()
{
    std::cout << "Dtor: Cat destroyed\n";
}

Cat& Cat::operator=(const Cat& rhs)
{
    type = rhs.type;

    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow\n";
}
