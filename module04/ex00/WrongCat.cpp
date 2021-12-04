/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:09:31 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/11 22:25:44 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat()
{
    type = "WrongCat";

    std::cout << "Default Ctor: WrongCat created\n";
}

WrongCat::WrongCat(const WrongCat& other)
{
    *this = other;

    std::cout << "Copy Ctor: WrongCat created\n";
}

WrongCat::~WrongCat()
{
    std::cout << "Dtor: WrongCat destroyed\n";
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
    type = rhs.type;

    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Meow\n";
}
