/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 06:36:51 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 06:52:07 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (size_t i = 0; i < 4; ++i) {
        materias[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
    if (this == &rhs)
        return *this;

    for (size_t i = 0; i < 4; ++i) {
        delete materias[i];
        if (rhs.materias[i])
            materias[i] = rhs.materias[i]->clone();
        else
            materias[i] = NULL;
    }

    return *this;
}

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; ++i) {
        delete materias[i];
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (size_t i = 0; i < 4; ++i) {
        if (!materias[i]) {
            materias[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
    for (size_t i = 0; i < 4; ++i) {
        if (materias[i] && materias[i]->getType() == type) {
            return materias[i]->clone();
        }
    }
    return NULL;
}
