/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:53:28 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/05 05:53:26 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal      meta;
    Dog         j;
    Cat         i;
    WrongAnimal wmeta;
    WrongCat    wcat;

    meta.makeSound();
    j.makeSound();
    i.makeSound();
    wmeta.makeSound();
    wcat.makeSound();

    const WrongAnimal* ptr = new WrongCat();
    ptr->makeSound();
    delete ptr;
}
