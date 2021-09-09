/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 02:54:17 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/08 04:09:21 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie
{
public:
    static Zombie* newZombie(std::string name);
    static void    randomChump(std::string name);

    Zombie(const std::string& name);
    ~Zombie();

    void announce() const;

private:
    std::string name;
};
