/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 21:20:08 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 04:54:37 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
    DiamondTrap();
    DiamondTrap(const DiamondTrap&);
    DiamondTrap(const std::string& name);
    virtual ~DiamondTrap();
    DiamondTrap& operator=(const DiamondTrap&);

    void whoAmI() const;

    virtual void attack(const std::string& target) const;

private:
    std::string name;
};
