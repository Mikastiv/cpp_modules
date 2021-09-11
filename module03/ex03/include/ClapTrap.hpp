/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:28:45 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 22:24:13 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class ClapTrap
{
public:
    ClapTrap();
    ClapTrap(const ClapTrap&);
    ClapTrap(const std::string& name);
    virtual ~ClapTrap();
    ClapTrap& operator=(const ClapTrap&);

    virtual void attack(const std::string& target) const;
    void         takeDamage(unsigned int amount);
    void         beRepaired(unsigned int amount);

protected:
    std::string  name;
    unsigned int hitpoints;
    unsigned int energy;
    unsigned int damage;
};
