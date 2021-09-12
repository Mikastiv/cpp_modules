/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:40:10 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/11 21:57:47 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Animal
{
public:
    Animal();
    Animal(const Animal&);
    virtual ~Animal();

    Animal& operator=(const Animal&);

    virtual void makeSound() const;

protected:
    std::string type;
};
