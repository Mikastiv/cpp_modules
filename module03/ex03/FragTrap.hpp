/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 20:48:53 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 22:37:21 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(const FragTrap&);
    FragTrap(const std::string& name);
    virtual ~FragTrap();
    FragTrap& operator=(const FragTrap&);

    void highFivesGuys() const;

protected:
    static const unsigned int HITPOINTS = 100;
    static const unsigned int ENERGY = 100;
    static const unsigned int DAMAGE = 30;
};
