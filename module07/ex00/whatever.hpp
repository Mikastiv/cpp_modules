/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 20:00:32 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/12 23:24:59 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void swap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
const T& min(const T& a, const T& b)
{
    return a < b ? a : b;
}

template <typename T>
const T& max(const T& a, const T& b)
{
    return a > b ? a : b;
}

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
