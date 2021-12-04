/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 05:40:50 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 06:56:23 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "AMateria.hpp"

class IMateriaSource
{
public:
    virtual ~IMateriaSource(){};

    virtual void      learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(const std::string& type) = 0;
};
