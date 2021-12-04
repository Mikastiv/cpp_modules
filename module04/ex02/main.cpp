/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:53:28 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/11 23:36:43 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal* animals[100];

    for (size_t i = 0; i < 100; i += 2) {
        animals[i] = new Dog();
        animals[i + 1] = new Cat();
    }

    for (size_t i = 0; i < 100; ++i) {
        animals[i]->makeSound();
    }

    for (size_t i = 0; i < 100; ++i) {
        delete animals[i];
    }

    Dog a;
    Dog b;
    Dog c(b);
    Cat d;
    Cat e;
    Cat f(e);

    b = a;
    e = d;

    // Animal test;
}
