/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 05:52:36 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/03 16:03:31 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include <iostream>

#include "ICharacter.hpp"

AMateria::AMateria() : type() {}

AMateria::AMateria(const AMateria& other)
{
    *this = other;
}

AMateria::AMateria(const std::string& type_) : type(type_) {}

AMateria& AMateria::operator=(const AMateria& rhs)
{
    type = rhs.type;

    return *this;
}

AMateria::~AMateria() {}

const std::string& AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << target.getName() << std::endl;
}
