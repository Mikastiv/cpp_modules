/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 05:15:09 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 06:56:20 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class AMateria;

class ICharacter
{
public:
    virtual ~ICharacter(){};

    virtual const std::string& getName() const = 0;
    virtual void               equip(AMateria* m) = 0;
    virtual void               unequip(int idx) = 0;
    virtual void               use(int idx, ICharacter& target) = 0;
};
