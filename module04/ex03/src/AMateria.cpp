/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 05:52:36 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 06:04:54 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type() {}

AMateria::AMateria(const AMateria& other)
{
    *this = other;
}

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
    (void)target;
}
