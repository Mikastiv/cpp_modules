/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 00:16:11 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/13 00:21:23 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>

template <typename T>
bool easyfind(T container, int n)
{
    return std::find(container.begin(), container.end(), n) != container.end();
}

template <typename T>
void test(T container, int n)
{
    if (easyfind(container, n))
        std::cout << n << " found\n";
    else
        std::cout << n << " not found\n";
}
