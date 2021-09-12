/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 04:38:21 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/12 07:29:37 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    AMateria* cure = new Cure();
    src->learnMateria(cure);
    delete cure;

    ICharacter* me = new Character("me");

    AMateria* tmp[6] = {
        src->createMateria("ice"),
        src->createMateria("ice"),
        src->createMateria("ice"),
        src->createMateria("cure"),
        src->createMateria("cure"),
        src->createMateria("cure"),
    };

    me->equip(tmp[0]);
    me->equip(tmp[1]);
    me->equip(tmp[2]);
    me->equip(tmp[3]);
    me->equip(tmp[4]);

    ICharacter* bob = new Character("bob");

    bob->equip(tmp[4]);
    bob->equip(tmp[5]);

    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);

    me->unequip(2);
    me->unequip(3);
    me->unequip(4);

    bob->use(0, *me);
    bob->use(1, *me);
    bob->use(2, *me);
    bob->use(3, *me);
    bob->use(4, *me);
    bob->getName();

    delete bob;
    delete me;
    delete src;
    delete tmp[2];
    delete tmp[3];

    return 0;
}
