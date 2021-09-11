/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 20:17:47 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 22:39:10 by mleblanc         ###   ########.fr       */
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

    virtual void attack(const std::string& target) const;
    void         guardGate() const;
};
