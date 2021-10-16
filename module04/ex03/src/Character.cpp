/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 06:25:09 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 07:22:37 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include "AMateria.hpp"

Character::Character() : name()
{
    for (size_t i = 0; i < 4; ++i) {
        materias[i] = NULL;
    }
}

Character::Character(const Character& other)
{
    *this = other;
}

Character::Character(const std::string& name_) : name(name_)
{
    for (size_t i = 0; i < 4; ++i) {
        materias[i] = NULL;
    }
}

Character& Character::operator=(const Character& rhs)
{
    if (this == &rhs)
        return *this;

    name = rhs.getName();
    for (size_t i = 0; i < 4; ++i) {
        delete materias[i];
        if (rhs.materias[i])
            materias[i] = rhs.materias[i]->clone();
        else
            materias[i] = NULL;
    }

    return *this;
}

Character::~Character()
{
    for (size_t i = 0; i < 4; ++i) {
        delete materias[i];
    }
}

const std::string& Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    for (size_t i = 0; i < 4; i++) {
        if (!materias[i]) {
            materias[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx > 3)
        return;

    materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > 3)
        return;

    if (materias[idx]) {
        materias[idx]->use(target);
    }
}
