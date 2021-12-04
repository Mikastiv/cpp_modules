/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 23:30:25 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/12 23:24:55 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "whatever.hpp"

int main()
{
    {
        long a = 1000;
        long b = 1;

        print_swap(a, b);
    }

    {
        double a = 6.23;
        double b = 9.34;

        print_swap(a, b);
    }

    {
        int a = 10;
        int b = 20;

        print_result(a, b, min(a, b), "----- Min -----");
    }

    {
        float a = 10;
        float b = 10;

        print_result(a, b, min(a, b), "----- Min -----");
    }

    {
        int a = 10;
        int b = 20;

        print_result(a, b, max(a, b), "----- Max -----");
    }

    {
        float a = 10;
        float b = 10;

        print_result(a, b, max(a, b), "----- Max -----");
    }

    int a = 2;
    int b = 3;

    ::swap(a, b);
    std::cout << "\na = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
}
