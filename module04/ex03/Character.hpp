/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 05:37:45 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 06:34:33 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
    Character();
    Character(const Character&);
    Character(const std::string& name);
    Character& operator=(const Character&);
    virtual ~Character();

    virtual const std::string& getName() const;
    virtual void               equip(AMateria* m);
    virtual void               unequip(int idx);
    virtual void               use(int idx, ICharacter& target);

private:
    std::string name;
    AMateria*   materias[4];
};
