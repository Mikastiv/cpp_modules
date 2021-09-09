/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 05:30:18 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/08 05:37:07 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type_) : type(type_) {}

const std::string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(const std::string& type_)
{
    type = type_;
}
