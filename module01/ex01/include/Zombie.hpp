/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 02:54:17 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/08 04:36:02 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie
{
public:
    static Zombie* zombieHorde(int N, std::string name);

    Zombie();
    ~Zombie();

    void announce() const;
    void setName(const std::string& name);

private:
    std::string name;
};
