/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:14:05 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/12 23:31:48 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void iter(T* array, std::size_t length, void (*func)(const T&))
{
    for (size_t i = 0; i < length; i++) {
        func(array[i]);
    }
}

template <typename T>
void print(const T& item)
{
    std::cout << item << "\n";
}
