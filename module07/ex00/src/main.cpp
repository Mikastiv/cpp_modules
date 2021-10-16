/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 23:30:25 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/15 20:53:39 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "whatever.hpp"

template <typename T>
void print_swap(T& a, T& b)
{
    std::cout << "------ Swap -----\n";
    std::cout << "A: " << a << "\n";
    std::cout << "B: " << b << "\n";
    std::cout << "----- After swap -----\n";
    swap(a, b);
    std::cout << "A: " << a << "\n";
    std::cout << "B: " << b << "\n";
}

template <typename T>
void print_result(const T& a, const T& b, const T& ans, const char* header)
{
    std::cout << header << "\n";
    std::cout << "A: " << a << " (" << &a << ")\n";
    std::cout << "B: " << b << " (" << &b << ")\n";
    std::cout << "Ans: " << ans << " (" << &ans << ")\n";
}

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

        const int& ans = min(a, b);
        print_result(a, b, ans, "----- Min -----");
    }

    {
        float a = 10;
        float b = 10;

        const float& ans = min(a, b);
        print_result(a, b, ans, "----- Min -----");
    }

    {
        int a = 10;
        int b = 20;

        const int& ans = max(a, b);
        print_result(a, b, ans, "----- Max -----");
    }

    {
        float a = 10;
        float b = 10;

        const float& ans = max(a, b);
        print_result(a, b, ans, "----- Max -----");
    }
}
