/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 06:07:30 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 07:02:47 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include <iostream>

#include "ICharacter.hpp"

Cure::Cure() : AMateria()
{
    type = "cure";
}

Cure::Cure(const Cure& other)
{
    *this = other;
}

Cure& Cure::operator=(const Cure&)
{
    return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const
{
    return new Cure();
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
