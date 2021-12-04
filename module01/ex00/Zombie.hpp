/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 02:54:17 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/09 22:49:51 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie
{
public:
    Zombie(const std::string& name);
    ~Zombie();

    void announce() const;

private:
    std::string name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);
