/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:09:25 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/15 21:27:13 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

template <typename T>
void print(const T& item)
{
    std::cout << item << "\n";
}

int main()
{
    int         array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::string words[3] = { "Hello", "World", "!" };

    iter(array, 10, print);
    iter(words, 3, print);
}
