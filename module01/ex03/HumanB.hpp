/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 05:47:17 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/08 06:04:09 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
public:
    HumanB(const std::string& name);

    void attack() const;
    void setWeapon(Weapon& weapon);

private:
    std::string name;
    Weapon*     weapon;
};
