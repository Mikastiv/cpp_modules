/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 20:17:47 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 04:54:46 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const ScavTrap&);
    ScavTrap(const std::string& name);
    virtual ~ScavTrap();
    ScavTrap& operator=(const ScavTrap&);

    void guardGate() const;

    virtual void attack(const std::string& target) const;

protected:
    static const unsigned int HITPOINTS = 100;
    static const unsigned int ENERGY = 50;
    static const unsigned int DAMAGE = 20;
};
