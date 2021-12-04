/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:09:25 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/12 23:31:44 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

int main()
{
    int         array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::string words[3] = { "Hello", "World", "!" };

    iter(array, 10, print);
    iter(words, 3, print);
}
