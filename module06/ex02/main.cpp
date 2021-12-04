/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 23:30:25 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/18 12:08:04 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

Base* generate()
{
    int random = rand() % 3;

    switch (random) {
        case 0:
            return new A();
        case 1:
            return new B();
        default:
            return new C();
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p)) {
        std::cout << "A\n";
        return;
    }
    if (dynamic_cast<B*>(p)) {
        std::cout << "B\n";
        return;
    }
    if (dynamic_cast<C*>(p)) {
        std::cout << "C\n";
        return;
    }

    std::cout << "Can't identify\n";
}

void identify(Base& p)
{
    try {
        static_cast<void>(dynamic_cast<A&>(p));
        std::cout << "A\n";
        return;
    } catch (std::exception&) {
    }
    try {
        static_cast<void>(dynamic_cast<B&>(p));
        std::cout << "B\n";
        return;
    } catch (std::exception&) {
    }
    try {
        static_cast<void>(dynamic_cast<C&>(p));
        std::cout << "C\n";
        return;
    } catch (std::exception&) {
    }

    std::cout << "Can't identify\n";
}

int main()
{
    srand(static_cast<unsigned int>(time(NULL)));

    for (size_t i = 0; i < 5; i++) {
        Base* ptr = generate();
        identify(ptr);
        identify(*ptr);

        if (i < 4) {
            std::cout << "\n";
        }
    }
}
