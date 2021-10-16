/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:14:05 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/15 21:23:19 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stddef.h>

template <typename T>
void iter(T* array, size_t length, void (*func)(const T&))
{
    for (size_t i = 0; i < length; i++) {
        func(array[i]);
    }
}
